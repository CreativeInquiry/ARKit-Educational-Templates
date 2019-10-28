const CFIndex streamSize = 1024;
static NSOperationQueue *webOperationQueue;

@interface UnityWebRequestDelegate : NSObject<NSURLSessionDataDelegate, NSURLSessionTaskDelegate>
{
}

@property (readwrite, nonatomic) void* udata;
@property (readwrite, nonatomic) NSURLSessionDataTask* task;
@property (readwrite, strong, nonatomic) NSOutputStream* outputStream;
@property (readwrite, strong, nonatomic) NSURL* url;
@property (readwrite, strong, nonatomic) NSString* method;
@property (readwrite, strong, nonatomic) NSMutableDictionary* headers;
@property (readwrite, nonatomic) bool wantCertificateCallback;

@end


@implementation UnityWebRequestDelegate
{
    void* _udata;
    NSURLSessionDataTask* _task;
    NSURL* _url;
    NSString* _method;
    NSMutableDictionary* _headers;
    bool _wantCertificateCallback;
    long long _estimatedContentLength;
    long long _receivedBytes;
    bool _redirecting;
}

@synthesize udata = _udata;
@synthesize task = _task;
@synthesize url = _url;
@synthesize method = _method;
@synthesize headers = _headers;
@synthesize wantCertificateCallback = _wantCertificateCallback;

+ (id)newDelegate:(void*)udata
{
    UnityWebRequestDelegate* delegate = [[UnityWebRequestDelegate alloc] init];
    delegate.udata = udata;
    return delegate;
}

- (id)init
{
    _udata = NULL;
    _task = nil;
    _estimatedContentLength = 0;
    _receivedBytes = 0;
    _redirecting = false;
    return self;
}

- (void)updateEstimatedContentLength:(long long)contentLength
{
    if (contentLength > _estimatedContentLength)
        _estimatedContentLength = contentLength;
}

- (void)updateReceivedBytes:(long long)receivedBytes
{
    _receivedBytes += receivedBytes;
    if (_receivedBytes > _estimatedContentLength)
        _estimatedContentLength = _receivedBytes;
}

- (void)URLSession:(NSURLSession *)session dataTask:(NSURLSessionDataTask *)dataTask didReceiveResponse:(nonnull NSURLResponse *)response completionHandler:(nonnull void (^)(NSURLSessionResponseDisposition))completionHandler
{
    [self handleResponse: (NSHTTPURLResponse*)response];
    completionHandler(NSURLSessionResponseAllow);
}

- (void)handleResponse:(NSHTTPURLResponse *)response
{
    [self updateEstimatedContentLength: [response expectedContentLength]];
    _receivedBytes = 0;
    UnityReportWebRequestStatus(self.udata, (int)[response statusCode]);
    NSDictionary* respHeader = [response allHeaderFields];
    NSEnumerator* headerEnum = [respHeader keyEnumerator];
    for (id headerKey = [headerEnum nextObject]; headerKey; headerKey = [headerEnum nextObject])
        UnityReportWebRequestResponseHeader(self.udata, [headerKey UTF8String], [[respHeader objectForKey: headerKey] UTF8String]);
    UnityReportWebRequestReceivedResponse(self.udata, (unsigned int)_estimatedContentLength);
}

- (void)URLSession:(NSURLSession *)session dataTask:(NSURLSessionDataTask *)dataTask didReceiveData:(NSData *)data
{
    [self updateEstimatedContentLength: [dataTask countOfBytesExpectedToReceive]];
    [data enumerateByteRangesUsingBlock:^(const void* bytes, NSRange range, BOOL* stop) {
        UnityReportWebRequestReceivedData(self.udata, bytes, (unsigned int)range.length, (unsigned int)_estimatedContentLength);
    }];
}

- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task willPerformHTTPRedirection:(NSHTTPURLResponse *)response newRequest:(NSURLRequest *)request completionHandler:(void (^)(NSURLRequest * _Nullable))completionHandler
{
    _redirecting = true;
    [self handleResponse: response];
    completionHandler(nil);
    [task cancel];
}

- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task didReceiveChallenge:(NSURLAuthenticationChallenge *)challenge completionHandler:(void (^)(NSURLSessionAuthChallengeDisposition disposition, NSURLCredential* credential))completionHandler
{
    if ([[challenge protectionSpace] authenticationMethod] == NSURLAuthenticationMethodServerTrust)
    {
        if (!_wantCertificateCallback)
        {
            completionHandler(NSURLSessionAuthChallengePerformDefaultHandling, nil);
            return;
        }

#if !defined(DISABLE_WEBREQUEST_CERTIFICATE_CALLBACK)
        SecTrustResultType systemResult;
        SecTrustRef serverTrust = [[challenge protectionSpace] serverTrust];
        if (serverTrust == nil || errSecSuccess != SecTrustEvaluate(serverTrust, &systemResult))
        {
            systemResult = kSecTrustResultOtherError;
        }

        switch (systemResult)
        {
            case kSecTrustResultUnspecified:
            case kSecTrustResultProceed:
            case kSecTrustResultRecoverableTrustFailure:
                break;
            default:
                completionHandler(NSURLSessionAuthChallengePerformDefaultHandling, nil);
                return;
        }

        SecCertificateRef serverCertificate = SecTrustGetCertificateAtIndex(serverTrust, 0);
        if (serverCertificate != nil)
        {
            CFDataRef serverCertificateData = SecCertificateCopyData(serverCertificate);
            const UInt8* const data = CFDataGetBytePtr(serverCertificateData);
            const CFIndex size = CFDataGetLength(serverCertificateData);
            bool trust = UnityReportWebRequestValidateCertificate(self.udata, (const char*)data, (unsigned)size);
            CFRelease(serverCertificateData);
            if (trust)
            {
                NSURLCredential *credential = [NSURLCredential credentialForTrust: challenge.protectionSpace.serverTrust];
                completionHandler(NSURLSessionAuthChallengeUseCredential, credential);
                return;
            }
        }
#endif
        completionHandler(NSURLSessionAuthChallengeCancelAuthenticationChallenge, nil);
        return;
    }
    else
        completionHandler(NSURLSessionAuthChallengePerformDefaultHandling, nil);
}

- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task needNewBodyStream:(void (^)(NSInputStream * _Nullable))completionHandler
{
    CFReadStreamRef readStream;
    CFWriteStreamRef writeStream;
    CFStreamCreateBoundPair(kCFAllocatorDefault, &readStream, &writeStream, streamSize);
    CFWriteStreamOpen(writeStream);
    self.outputStream = (__bridge NSOutputStream*)writeStream;
    completionHandler((__bridge NSInputStream*)readStream);
    [webOperationQueue addOperationWithBlock:^{
        [self writeBody];
    }];
}

- (void)writeBody
{
    if (self.outputStream == nil)
        return;
    unsigned dataSize = streamSize;
    BOOL uploadComplete = FALSE;
    while (!uploadComplete)
    {
        dataSize = streamSize;
        const UInt8* data = (const UInt8*)UnityWebRequestGetUploadData(_udata, &dataSize);
        if (dataSize == 0)
            break;
        NSInteger transmitted = [_outputStream write: data maxLength: dataSize];
        if (transmitted > 0)
            UnityWebRequestConsumeUploadData(_udata, (unsigned)transmitted);
        switch (self.task.state)
        {
            case NSURLSessionTaskStateCanceling:
            case NSURLSessionTaskStateCompleted:
                uploadComplete = TRUE;
                break;
            default:
                uploadComplete = FALSE;
        }
    }
    [_outputStream close];
    self.outputStream = nil;
}

- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task didCompleteWithError:(NSError *)error
{
    if (_redirecting)
        return;
    if (error != nil)
        UnityReportWebRequestNetworkError(self.udata, (int)[error code]);
    UnityReportWebRequestFinishedLoadingData(self.udata);
}

@end


extern "C" void* UnityCreateWebRequestBackend(void* udata, const char* methodString, const void* headerDict, const char* url)
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        webOperationQueue = [[NSOperationQueue alloc] init];
        webOperationQueue.name = @"com.unity3d.WebOperationQueue";
    });

    NSURLSessionConfiguration* config = [NSURLSessionConfiguration defaultSessionConfiguration];
    UnityWebRequestDelegate* delegate = [UnityWebRequestDelegate newDelegate: udata];
    delegate.url = [NSURL URLWithString: [NSString stringWithUTF8String: url]];
    delegate.method = [NSString stringWithUTF8String: methodString];
    delegate.headers = (__bridge NSMutableDictionary*)headerDict;
    NSURLSession* session = [NSURLSession sessionWithConfiguration: config delegate: delegate delegateQueue: webOperationQueue];
    return (__bridge_retained void*)session;
}

extern "C" void UnitySendWebRequest(void* connection, unsigned length, unsigned long timeoutSec, bool wantCertificateCallback)
{
    NSURLSession* session = (__bridge NSURLSession*)connection;
    UnityWebRequestDelegate* delegate = (UnityWebRequestDelegate*)session.delegate;
    delegate.wantCertificateCallback = wantCertificateCallback;

    NSMutableURLRequest* request = [[NSMutableURLRequest alloc] init];
    [request setHTTPMethod: delegate.method];
    [request setURL: delegate.url];
    [request setCachePolicy: NSURLRequestReloadIgnoringLocalCacheData];
    [request setAllHTTPHeaderFields: delegate.headers];

    if (length > 0)
        delegate.task = [session uploadTaskWithStreamedRequest: request];
    else
        delegate.task = [session dataTaskWithRequest: request];
    [delegate.task resume];
    delegate.url = nil;
    delegate.method = nil;
    delegate.headers = nil;
}

extern "C" bool UnityWebRequestIsDone(void* connection)
{
    NSURLSession* session = (__bridge NSURLSession*)connection;
    UnityWebRequestDelegate* delegate = (UnityWebRequestDelegate*)session.delegate;
    if (delegate == nil)
        return true;
    return [delegate.task state] == NSURLSessionTaskStateCompleted;
}

extern "C" void UnityDestroyWebRequestBackend(void* connection)
{
    NSURLSession* session = (__bridge_transfer NSURLSession*)connection;
    [session invalidateAndCancel];
}

extern "C" void UnityCancelWebRequest(const void* connection)
{
    NSURLSession* session = (__bridge NSURLSession*)connection;
    UnityWebRequestDelegate* delegate = (UnityWebRequestDelegate*)session.delegate;
    [delegate.task cancel];
}
