#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// ARReferenceImagesSet
struct ARReferenceImagesSet_tE637611976378C4D1057CE06DD14F87EB52174E0;
// ARReferenceObjectsSetAsset
struct ARReferenceObjectsSetAsset_t0CF5B17AAFFE42A9741BCD5431117FDD025D334E;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<UnityEngine.XR.iOS.ARWorldMap>
struct Action_1_t3C39529EECE3FAE7BEC843DA89A2FA025136D52B;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t3D4152882C54B77C712688E910390D5C8E030463;
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>
struct List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.UInt64[]
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityARCameraManager
struct UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.XR.iOS.ARFaceAnchor
struct ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6;
// UnityEngine.XR.iOS.ARPointCloud
struct ARPointCloud_t57E36E6C732B90C48B77D64E9FAE17668784064C;
// UnityEngine.XR.iOS.ARWorldMap
struct ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A;
// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/AREnvironmentProbeAnchorAdded
struct AREnvironmentProbeAnchorAdded_t352A2C6AEBFEFAF9FFC8E717E49036E7A2DB4E00;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/AREnvironmentProbeAnchorRemoved
struct AREnvironmentProbeAnchorRemoved_t3B32E5CFAC64DF8A23DB054842E6A67B21CCEB4F;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/AREnvironmentProbeAnchorUpdated
struct AREnvironmentProbeAnchorUpdated_t2649997F4BDBFDD212BD08787EA6B37DA6C4D9FE;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded
struct ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved
struct ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated
struct ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorAdded
struct ARImageAnchorAdded_t71A8F5EF09FE7FFD5FFA8E35FE2409FE59893A44;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorRemoved
struct ARImageAnchorRemoved_t55233D152AF70F8970D7F4598DADE918A99C82B2;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorUpdated
struct ARImageAnchorUpdated_t552C60653C0710AD7312589A16E6E8B4F00CE036;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARObjectAnchorAdded
struct ARObjectAnchorAdded_t44787F4D7B17D8D9D220C99ECB644F34E8DFF41C;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARObjectAnchorRemoved
struct ARObjectAnchorRemoved_t7365DB46860AE9393ABBD80691D81F38FA5A41B6;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARObjectAnchorUpdated
struct ARObjectAnchorUpdated_tECD9813AEC4C3F1B751595D3C48DA59F8105C88D;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F;
// UnityEngine.XR.iOS.UnityARVideoFormat[]
struct UnityARVideoFormatU5BU5D_t9BD2BED5536D57391846494DD876F3904E42EEED;
// UnityEngine.XR.iOS.serializableARWorldMap
struct serializableARWorldMap_t7E10ABE00B8AE4798879ED785B257CF12FDFFFCE;
// UnityPointCloudExample
struct UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3;
// UpdateWorldMappingStatus
struct UpdateWorldMappingStatus_tA474863E7C7B2C743BB4109F5D84160177875FA8;
// VideoFormatButton
struct VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83;
// VideoFormatButton/VideoFormatButtonPressed
struct VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC;
// VideoFormatsExample
struct VideoFormatsExample_t33090EA342CA6D34540CD00BAB4D81FE5B8BE08B;
// WorldMapManager
struct WorldMapManager_t2E882FE3D5782FCC4EEE54E41A3A12CF64DEF7F8;

IL2CPP_EXTERN_C RuntimeClass* ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARTrackingStateReason_t4E957429E93991E43643D4C64AC81F488B71A17C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARTrackingState_t904937D92845C4D5954E4E16182F7BC33F5F744B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARWorldMappingStatus_t1924A56B168ED7DDAA8FB935E53E56E56A893834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3C39529EECE3FAE7BEC843DA89A2FA025136D52B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3D4152882C54B77C712688E910390D5C8E030463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072;
IL2CPP_EXTERN_C String_t* _stringLiteral13462B997C9C86B85C4A46CF050B8644B6563ACF;
IL2CPP_EXTERN_C String_t* _stringLiteral23AC544F0D26B2181F8595700714B2376AB76C14;
IL2CPP_EXTERN_C String_t* _stringLiteral2D8B7735FD16AC780D318FD9F36F6FD17A43910A;
IL2CPP_EXTERN_C String_t* _stringLiteral40000C98ABC008AF8B7D859D811CF8101C06F210;
IL2CPP_EXTERN_C String_t* _stringLiteral51F0411356A6493C85450718E57493CA2665F92B;
IL2CPP_EXTERN_C String_t* _stringLiteral6750FBAC3BDD831087716F82EDECD7C2D74E257B;
IL2CPP_EXTERN_C String_t* _stringLiteral909095BEB753BFB98465032D4A0A5A2E3E5D5826;
IL2CPP_EXTERN_C String_t* _stringLiteral97C60DC984919315FF2E5589CAB4084B9CD7FBED;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralD6F5D3097D29CB2DC7AB5DEEB05FA4AB2ACEAB07;
IL2CPP_EXTERN_C String_t* _stringLiteralD9F218E4F5C608DD8F358F6B0507A9E7392929B8;
IL2CPP_EXTERN_C String_t* _stringLiteralE3AB937C51614F4C91ACDC23A25C5CDF20CE5A10;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mF93053DD6A32ACE4C6DC8EDFE0A9FDF28F23312A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m30AEB9995CE97DE0080491C4DBA8176F9DB74CD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3664EDDE4BC67CE2EBC22692863FF89520217A79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m01F086B16DE444EC3FA5E088F14FAAEF5A96CD79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisVideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_m98E45280EB96DF176C3C1E881AD56000C52F92FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB466FEDA88AB72CA7331450A36E50D916A6C3BB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA2E730455476B54363C610767E79578F78E804D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE0CF797BC1662A4FDFF8009E76AC0A5CD1BB1FCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF3CFF4FB71CEEDC038A8826D6AE1A226B7CF22A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityPointCloudExample_ARFrameUpdated_m63496C2B26C679351D74B8628C328046DC19E2DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UpdateWorldMappingStatus_CheckWorldMapStatus_m5DF114B471E5534D5B23B3BC83B3A168F0670DD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VideoFormatsExample_ExampletButtonPressed_m5084D6E2E72CB31C3059069692D8D8B4044F3626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WorldMapManager_OnFrameUpdate_mBDC132061B68AE7315F22B25B0F634487C278CC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WorldMapManager_OnWorldMapSerialized_m7D0B5FDD3E57A6892A7DB973922EFB1D4AC8A831_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WorldMapManager_OnWorldMap_m91EF97042CE9769FED3515AC548332B898CD648A_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t UnityARSessionNativeInterface_set_ARSessionShouldAttemptRelocalization_mC7419A0137CADDD2387503BF0701CD5624295CD5AssemblyU2DCSharp2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityPointCloudExample_Start_mBBFD6C7EA992F831E0FDF4C552791DA990344B86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityPointCloudExample_Update_m17378257B82327F087B521E4E4432699317EFA7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UpdateWorldMappingStatus_CheckWorldMapStatus_m5DF114B471E5534D5B23B3BC83B3A168F0670DD5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UpdateWorldMappingStatus_OnDestroy_m570EDDDAC3665FD6F0123423F22CC64C2105EFD0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UpdateWorldMappingStatus_Start_m2AD028A21B09490FC3373321AA23F9EA59F62703_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoFormatButtonPressed_BeginInvoke_m55D2AA471C3413047F17ECB7453E439B3ED8E9F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoFormatButton_ButtonPressed_m7BA63FD2D097010414DF7C0A2D42FDEB1AB80C43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoFormatButton_Populate_m440B794C3E2E292E99B5CD614FAE3DE3207D3087_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoFormatButton_add_FormatButtonPressedEvent_m13791FB6B2E8E3F68B62B8AF97747151B5C183C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoFormatButton_remove_FormatButtonPressedEvent_mF7D22FC6DC84507C3D50BBE2512CB56318C4BB36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoFormatsExample_ExampletButtonPressed_m5084D6E2E72CB31C3059069692D8D8B4044F3626_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoFormatsExample_OnDestroy_m3C90AAEE40F90FCD3C9CDED932A31FDA882E9C9F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoFormatsExample_PopulateVideoFormatButtons_mB7448949BE86B5314C66D7C19C23AB6E4815E805_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VideoFormatsExample_Start_mF2BC62AA4127FA53E9A9E08CBC400671F3FA5613_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldMapManager_LoadSerialized_m3DDB92B4EF4EADD8D0F9E7C93D7033F08723ED18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldMapManager_Load_m7E083E944C2D6366D4A4EA62240747CEE15FAD02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldMapManager_OnFrameUpdate_mBDC132061B68AE7315F22B25B0F634487C278CC1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldMapManager_OnWorldMapSerialized_m7D0B5FDD3E57A6892A7DB973922EFB1D4AC8A831_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldMapManager_OnWorldMap_m91EF97042CE9769FED3515AC548332B898CD648A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldMapManager_SaveSerialized_m7B229C69A8D75C59C6FB7AF1435DD6C1EA73BDD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldMapManager_Save_mF9E1A2A689FB73FC9D2D57C607522D462143145C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldMapManager_Start_m77A456E8F7C00A342EE5E5AB179AC8EA895667E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldMapManager_get_path_m53218CEC7AAF9F8A86F49D46A9499E452252CEDC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldMapManager_get_session_mF41AE66999D28361BF32CEB0984ED966BB6C622D_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t3D4152882C54B77C712688E910390D5C8E030463  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3D4152882C54B77C712688E910390D5C8E030463, ____items_1)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3D4152882C54B77C712688E910390D5C8E030463, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3D4152882C54B77C712688E910390D5C8E030463, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3D4152882C54B77C712688E910390D5C8E030463, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3D4152882C54B77C712688E910390D5C8E030463_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3D4152882C54B77C712688E910390D5C8E030463_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>
struct  List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UnityARVideoFormatU5BU5D_t9BD2BED5536D57391846494DD876F3904E42EEED* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71, ____items_1)); }
	inline UnityARVideoFormatU5BU5D_t9BD2BED5536D57391846494DD876F3904E42EEED* get__items_1() const { return ____items_1; }
	inline UnityARVideoFormatU5BU5D_t9BD2BED5536D57391846494DD876F3904E42EEED** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UnityARVideoFormatU5BU5D_t9BD2BED5536D57391846494DD876F3904E42EEED* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UnityARVideoFormatU5BU5D_t9BD2BED5536D57391846494DD876F3904E42EEED* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71_StaticFields, ____emptyArray_5)); }
	inline UnityARVideoFormatU5BU5D_t9BD2BED5536D57391846494DD876F3904E42EEED* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UnityARVideoFormatU5BU5D_t9BD2BED5536D57391846494DD876F3904E42EEED** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UnityARVideoFormatU5BU5D_t9BD2BED5536D57391846494DD876F3904E42EEED* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.XR.iOS.serializableARWorldMap
struct  serializableARWorldMap_t7E10ABE00B8AE4798879ED785B257CF12FDFFFCE  : public RuntimeObject
{
public:
	// System.Byte[] UnityEngine.XR.iOS.serializableARWorldMap::arWorldMapData
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___arWorldMapData_0;

public:
	inline static int32_t get_offset_of_arWorldMapData_0() { return static_cast<int32_t>(offsetof(serializableARWorldMap_t7E10ABE00B8AE4798879ED785B257CF12FDFFFCE, ___arWorldMapData_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_arWorldMapData_0() const { return ___arWorldMapData_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_arWorldMapData_0() { return &___arWorldMapData_0; }
	inline void set_arWorldMapData_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___arWorldMapData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arWorldMapData_0), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.LogType
struct  LogType_t6B6C6234E8B44B73937581ACFBE15DE28227849D 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_t6B6C6234E8B44B73937581ACFBE15DE28227849D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.StackTraceLogType
struct  StackTraceLogType_t79D1449B0F10BC06A02E06EF9C63C7D1098A806E 
{
public:
	// System.Int32 UnityEngine.StackTraceLogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StackTraceLogType_t79D1449B0F10BC06A02E06EF9C63C7D1098A806E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.ARPointCloud
struct  ARPointCloud_t57E36E6C732B90C48B77D64E9FAE17668784064C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.ARPointCloud::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.ARPointCloud::m_Positions
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Positions_1;
	// System.UInt64[] UnityEngine.XR.iOS.ARPointCloud::m_Identifiers
	UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* ___m_Identifiers_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ARPointCloud_t57E36E6C732B90C48B77D64E9FAE17668784064C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Positions_1() { return static_cast<int32_t>(offsetof(ARPointCloud_t57E36E6C732B90C48B77D64E9FAE17668784064C, ___m_Positions_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Positions_1() const { return ___m_Positions_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Positions_1() { return &___m_Positions_1; }
	inline void set_m_Positions_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Positions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Identifiers_2() { return static_cast<int32_t>(offsetof(ARPointCloud_t57E36E6C732B90C48B77D64E9FAE17668784064C, ___m_Identifiers_2)); }
	inline UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* get_m_Identifiers_2() const { return ___m_Identifiers_2; }
	inline UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4** get_address_of_m_Identifiers_2() { return &___m_Identifiers_2; }
	inline void set_m_Identifiers_2(UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* value)
	{
		___m_Identifiers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Identifiers_2), (void*)value);
	}
};


// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t904937D92845C4D5954E4E16182F7BC33F5F744B 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARTrackingState_t904937D92845C4D5954E4E16182F7BC33F5F744B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t4E957429E93991E43643D4C64AC81F488B71A17C 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t4E957429E93991E43643D4C64AC81F488B71A17C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.ARWorldMap
struct  ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.ARWorldMap::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.XR.iOS.ARWorldMappingStatus
struct  ARWorldMappingStatus_t1924A56B168ED7DDAA8FB935E53E56E56A893834 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARWorldMappingStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARWorldMappingStatus_t1924A56B168ED7DDAA8FB935E53E56E56A893834, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.LightDataType
struct  LightDataType_tA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553 
{
public:
	// System.Int32 UnityEngine.XR.iOS.LightDataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightDataType_tA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.UnityARAlignment
struct  UnityARAlignment_tBF31DEB8CE1A352963601C233FC63CBAA562054F 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityARAlignment_tBF31DEB8CE1A352963601C233FC63CBAA562054F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.UnityAREnvironmentTexturing
struct  UnityAREnvironmentTexturing_tBDFAE61111F5224E58F7445C52AA83ABD7AFFE38 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityAREnvironmentTexturing::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityAREnvironmentTexturing_tBDFAE61111F5224E58F7445C52AA83ABD7AFFE38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column0_0)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column0_0() const { return ___column0_0; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column1_1)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column1_1() const { return ___column1_1; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column2_2)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column2_2() const { return ___column2_2; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column3_3)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column3_3() const { return ___column3_3; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column3_3 = value;
	}
};


// UnityEngine.XR.iOS.UnityARPlaneDetection
struct  UnityARPlaneDetection_t2B0A97EC1392ACCE7B07E691202B9CD10C972A22 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneDetection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityARPlaneDetection_t2B0A97EC1392ACCE7B07E691202B9CD10C972A22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.UnityARSessionRunOption
struct  UnityARSessionRunOption_t727FF292E082186FACC7FF0DB653ACCE553F3247 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARSessionRunOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityARSessionRunOption_t727FF292E082186FACC7FF0DB653ACCE553F3247, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.UnityARVideoFormat
struct  UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARVideoFormat::videoFormatPtr
	intptr_t ___videoFormatPtr_0;
	// System.Single UnityEngine.XR.iOS.UnityARVideoFormat::imageResolutionWidth
	float ___imageResolutionWidth_1;
	// System.Single UnityEngine.XR.iOS.UnityARVideoFormat::imageResolutionHeight
	float ___imageResolutionHeight_2;
	// System.Int32 UnityEngine.XR.iOS.UnityARVideoFormat::framesPerSecond
	int32_t ___framesPerSecond_3;

public:
	inline static int32_t get_offset_of_videoFormatPtr_0() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95, ___videoFormatPtr_0)); }
	inline intptr_t get_videoFormatPtr_0() const { return ___videoFormatPtr_0; }
	inline intptr_t* get_address_of_videoFormatPtr_0() { return &___videoFormatPtr_0; }
	inline void set_videoFormatPtr_0(intptr_t value)
	{
		___videoFormatPtr_0 = value;
	}

	inline static int32_t get_offset_of_imageResolutionWidth_1() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95, ___imageResolutionWidth_1)); }
	inline float get_imageResolutionWidth_1() const { return ___imageResolutionWidth_1; }
	inline float* get_address_of_imageResolutionWidth_1() { return &___imageResolutionWidth_1; }
	inline void set_imageResolutionWidth_1(float value)
	{
		___imageResolutionWidth_1 = value;
	}

	inline static int32_t get_offset_of_imageResolutionHeight_2() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95, ___imageResolutionHeight_2)); }
	inline float get_imageResolutionHeight_2() const { return ___imageResolutionHeight_2; }
	inline float* get_address_of_imageResolutionHeight_2() { return &___imageResolutionHeight_2; }
	inline void set_imageResolutionHeight_2(float value)
	{
		___imageResolutionHeight_2 = value;
	}

	inline static int32_t get_offset_of_framesPerSecond_3() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95, ___framesPerSecond_3)); }
	inline int32_t get_framesPerSecond_3() const { return ___framesPerSecond_3; }
	inline int32_t* get_address_of_framesPerSecond_3() { return &___framesPerSecond_3; }
	inline void set_framesPerSecond_3(int32_t value)
	{
		___framesPerSecond_3 = value;
	}
};

struct UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat> UnityEngine.XR.iOS.UnityARVideoFormat::videoFormatsList
	List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 * ___videoFormatsList_4;

public:
	inline static int32_t get_offset_of_videoFormatsList_4() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95_StaticFields, ___videoFormatsList_4)); }
	inline List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 * get_videoFormatsList_4() const { return ___videoFormatsList_4; }
	inline List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 ** get_address_of_videoFormatsList_4() { return &___videoFormatsList_4; }
	inline void set_videoFormatsList_4(List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 * value)
	{
		___videoFormatsList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoFormatsList_4), (void*)value);
	}
};


// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	intptr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___cvPixelBufferPtr_4)); }
	inline intptr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline intptr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(intptr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>
struct  Enumerator_t858BC997372412990A872C348DEFB6AFF271B588 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t858BC997372412990A872C348DEFB6AFF271B588, ___list_0)); }
	inline List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 * get_list_0() const { return ___list_0; }
	inline List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t858BC997372412990A872C348DEFB6AFF271B588, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t858BC997372412990A872C348DEFB6AFF271B588, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t858BC997372412990A872C348DEFB6AFF271B588, ___current_3)); }
	inline UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  get_current_3() const { return ___current_3; }
	inline UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  value)
	{
		___current_3 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct  ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableAutoFocus
	bool ___enableAutoFocus_4;
	// UnityEngine.XR.iOS.UnityAREnvironmentTexturing UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::environmentTexturing
	int32_t ___environmentTexturing_5;
	// System.Int32 UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::maximumNumberOfTrackedImages
	int32_t ___maximumNumberOfTrackedImages_6;
	// System.IntPtr UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::videoFormat
	intptr_t ___videoFormat_7;
	// System.String UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::referenceImagesGroupName
	String_t* ___referenceImagesGroupName_8;
	// System.String UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::referenceObjectsGroupName
	String_t* ___referenceObjectsGroupName_9;
	// System.IntPtr UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::dynamicReferenceObjectsPtr
	intptr_t ___dynamicReferenceObjectsPtr_10;
	// System.IntPtr UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::m_worldMapPtr
	intptr_t ___m_worldMapPtr_11;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}

	inline static int32_t get_offset_of_enableAutoFocus_4() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___enableAutoFocus_4)); }
	inline bool get_enableAutoFocus_4() const { return ___enableAutoFocus_4; }
	inline bool* get_address_of_enableAutoFocus_4() { return &___enableAutoFocus_4; }
	inline void set_enableAutoFocus_4(bool value)
	{
		___enableAutoFocus_4 = value;
	}

	inline static int32_t get_offset_of_environmentTexturing_5() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___environmentTexturing_5)); }
	inline int32_t get_environmentTexturing_5() const { return ___environmentTexturing_5; }
	inline int32_t* get_address_of_environmentTexturing_5() { return &___environmentTexturing_5; }
	inline void set_environmentTexturing_5(int32_t value)
	{
		___environmentTexturing_5 = value;
	}

	inline static int32_t get_offset_of_maximumNumberOfTrackedImages_6() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___maximumNumberOfTrackedImages_6)); }
	inline int32_t get_maximumNumberOfTrackedImages_6() const { return ___maximumNumberOfTrackedImages_6; }
	inline int32_t* get_address_of_maximumNumberOfTrackedImages_6() { return &___maximumNumberOfTrackedImages_6; }
	inline void set_maximumNumberOfTrackedImages_6(int32_t value)
	{
		___maximumNumberOfTrackedImages_6 = value;
	}

	inline static int32_t get_offset_of_videoFormat_7() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___videoFormat_7)); }
	inline intptr_t get_videoFormat_7() const { return ___videoFormat_7; }
	inline intptr_t* get_address_of_videoFormat_7() { return &___videoFormat_7; }
	inline void set_videoFormat_7(intptr_t value)
	{
		___videoFormat_7 = value;
	}

	inline static int32_t get_offset_of_referenceImagesGroupName_8() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___referenceImagesGroupName_8)); }
	inline String_t* get_referenceImagesGroupName_8() const { return ___referenceImagesGroupName_8; }
	inline String_t** get_address_of_referenceImagesGroupName_8() { return &___referenceImagesGroupName_8; }
	inline void set_referenceImagesGroupName_8(String_t* value)
	{
		___referenceImagesGroupName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___referenceImagesGroupName_8), (void*)value);
	}

	inline static int32_t get_offset_of_referenceObjectsGroupName_9() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___referenceObjectsGroupName_9)); }
	inline String_t* get_referenceObjectsGroupName_9() const { return ___referenceObjectsGroupName_9; }
	inline String_t** get_address_of_referenceObjectsGroupName_9() { return &___referenceObjectsGroupName_9; }
	inline void set_referenceObjectsGroupName_9(String_t* value)
	{
		___referenceObjectsGroupName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___referenceObjectsGroupName_9), (void*)value);
	}

	inline static int32_t get_offset_of_dynamicReferenceObjectsPtr_10() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___dynamicReferenceObjectsPtr_10)); }
	inline intptr_t get_dynamicReferenceObjectsPtr_10() const { return ___dynamicReferenceObjectsPtr_10; }
	inline intptr_t* get_address_of_dynamicReferenceObjectsPtr_10() { return &___dynamicReferenceObjectsPtr_10; }
	inline void set_dynamicReferenceObjectsPtr_10(intptr_t value)
	{
		___dynamicReferenceObjectsPtr_10 = value;
	}

	inline static int32_t get_offset_of_m_worldMapPtr_11() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___m_worldMapPtr_11)); }
	inline intptr_t get_m_worldMapPtr_11() const { return ___m_worldMapPtr_11; }
	inline intptr_t* get_address_of_m_worldMapPtr_11() { return &___m_worldMapPtr_11; }
	inline void set_m_worldMapPtr_11(intptr_t value)
	{
		___m_worldMapPtr_11 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
	int32_t ___enableAutoFocus_4;
	int32_t ___environmentTexturing_5;
	int32_t ___maximumNumberOfTrackedImages_6;
	intptr_t ___videoFormat_7;
	char* ___referenceImagesGroupName_8;
	char* ___referenceObjectsGroupName_9;
	intptr_t ___dynamicReferenceObjectsPtr_10;
	intptr_t ___m_worldMapPtr_11;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
	int32_t ___enableAutoFocus_4;
	int32_t ___environmentTexturing_5;
	int32_t ___maximumNumberOfTrackedImages_6;
	intptr_t ___videoFormat_7;
	Il2CppChar* ___referenceImagesGroupName_8;
	Il2CppChar* ___referenceObjectsGroupName_9;
	intptr_t ___dynamicReferenceObjectsPtr_10;
	intptr_t ___m_worldMapPtr_11;
};

// UnityEngine.XR.iOS.UnityARLightData
struct  UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityARLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARLightData::arLightEstimate
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate UnityEngine.XR.iOS.UnityARLightData::arDirectonalLightEstimate
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C, ___arDirectonalLightEstimate_2)); }
	inline UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 ** get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * value)
	{
		___arDirectonalLightEstimate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arDirectonalLightEstimate_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_pinvoke
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___arDirectonalLightEstimate_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_com
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___arDirectonalLightEstimate_2;
};

// System.Action`1<UnityEngine.XR.iOS.ARWorldMap>
struct  Action_1_t3C39529EECE3FAE7BEC843DA89A2FA025136D52B  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightData UnityEngine.XR.iOS.UnityARCamera::lightData
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::displayTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	// UnityEngine.XR.iOS.ARPointCloud UnityEngine.XR.iOS.UnityARCamera::pointCloud
	ARPointCloud_t57E36E6C732B90C48B77D64E9FAE17668784064C * ___pointCloud_7;
	// UnityEngine.XR.iOS.ARWorldMappingStatus UnityEngine.XR.iOS.UnityARCamera::worldMappingStatus
	int32_t ___worldMappingStatus_8;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___worldTransform_0)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___videoParams_4)); }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___lightData_5)); }
	inline UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  get_lightData_5() const { return ___lightData_5; }
	inline UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  value)
	{
		___lightData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lightData_5))->___arDirectonalLightEstimate_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___displayTransform_6)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_pointCloud_7() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___pointCloud_7)); }
	inline ARPointCloud_t57E36E6C732B90C48B77D64E9FAE17668784064C * get_pointCloud_7() const { return ___pointCloud_7; }
	inline ARPointCloud_t57E36E6C732B90C48B77D64E9FAE17668784064C ** get_address_of_pointCloud_7() { return &___pointCloud_7; }
	inline void set_pointCloud_7(ARPointCloud_t57E36E6C732B90C48B77D64E9FAE17668784064C * value)
	{
		___pointCloud_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointCloud_7), (void*)value);
	}

	inline static int32_t get_offset_of_worldMappingStatus_8() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___worldMappingStatus_8)); }
	inline int32_t get_worldMappingStatus_8() const { return ___worldMappingStatus_8; }
	inline int32_t* get_address_of_worldMappingStatus_8() { return &___worldMappingStatus_8; }
	inline void set_worldMappingStatus_8(int32_t value)
	{
		___worldMappingStatus_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4_marshaled_pinvoke
{
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_pinvoke ___lightData_5;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	ARPointCloud_t57E36E6C732B90C48B77D64E9FAE17668784064C * ___pointCloud_7;
	int32_t ___worldMappingStatus_8;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4_marshaled_com
{
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_com ___lightData_5;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	ARPointCloud_t57E36E6C732B90C48B77D64E9FAE17668784064C * ___pointCloud_7;
	int32_t ___worldMappingStatus_8;
};

// VideoFormatButton_VideoFormatButtonPressed
struct  VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct  UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::m_NativeARSession
	intptr_t ___m_NativeARSession_25;

public:
	inline static int32_t get_offset_of_m_NativeARSession_25() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760, ___m_NativeARSession_25)); }
	inline intptr_t get_m_NativeARSession_25() const { return ___m_NativeARSession_25; }
	inline intptr_t* get_address_of_m_NativeARSession_25() { return &___m_NativeARSession_25; }
	inline void set_m_NativeARSession_25(intptr_t value)
	{
		___m_NativeARSession_25 = value;
	}
};

struct UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields
{
public:
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_AREnvironmentProbeAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::AREnvironmentProbeAnchorAddedEvent
	AREnvironmentProbeAnchorAdded_t352A2C6AEBFEFAF9FFC8E717E49036E7A2DB4E00 * ___AREnvironmentProbeAnchorAddedEvent_0;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_AREnvironmentProbeAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::AREnvironmentProbeAnchorUpdatedEvent
	AREnvironmentProbeAnchorUpdated_t2649997F4BDBFDD212BD08787EA6B37DA6C4D9FE * ___AREnvironmentProbeAnchorUpdatedEvent_1;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_AREnvironmentProbeAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::AREnvironmentProbeAnchorRemovedEvent
	AREnvironmentProbeAnchorRemoved_t3B32E5CFAC64DF8A23DB054842E6A67B21CCEB4F * ___AREnvironmentProbeAnchorRemovedEvent_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARObjectAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARObjectAnchorAddedEvent
	ARObjectAnchorAdded_t44787F4D7B17D8D9D220C99ECB644F34E8DFF41C * ___ARObjectAnchorAddedEvent_3;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARObjectAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARObjectAnchorUpdatedEvent
	ARObjectAnchorUpdated_tECD9813AEC4C3F1B751595D3C48DA59F8105C88D * ___ARObjectAnchorUpdatedEvent_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARObjectAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARObjectAnchorRemovedEvent
	ARObjectAnchorRemoved_t7365DB46860AE9393ABBD80691D81F38FA5A41B6 * ___ARObjectAnchorRemovedEvent_5;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFrameUpdatedEvent
	ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * ___ARFrameUpdatedEvent_6;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorAddedEvent
	ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523 * ___ARAnchorAddedEvent_7;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorUpdatedEvent
	ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151 * ___ARAnchorUpdatedEvent_8;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorRemovedEvent
	ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584 * ___ARAnchorRemovedEvent_9;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorAddedEvent
	ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8 * ___ARUserAnchorAddedEvent_10;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorUpdatedEvent
	ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * ___ARUserAnchorUpdatedEvent_11;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorRemovedEvent
	ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * ___ARUserAnchorRemovedEvent_12;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorAddedEvent
	ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8 * ___ARFaceAnchorAddedEvent_13;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorUpdatedEvent
	ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35 * ___ARFaceAnchorUpdatedEvent_14;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorRemovedEvent
	ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C * ___ARFaceAnchorRemovedEvent_15;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARImageAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARImageAnchorAddedEvent
	ARImageAnchorAdded_t71A8F5EF09FE7FFD5FFA8E35FE2409FE59893A44 * ___ARImageAnchorAddedEvent_16;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARImageAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARImageAnchorUpdatedEvent
	ARImageAnchorUpdated_t552C60653C0710AD7312589A16E6E8B4F00CE036 * ___ARImageAnchorUpdatedEvent_17;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARImageAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARImageAnchorRemovedEvent
	ARImageAnchorRemoved_t55233D152AF70F8970D7F4598DADE918A99C82B2 * ___ARImageAnchorRemovedEvent_18;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionFailedEvent
	ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * ___ARSessionFailedEvent_19;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionInterruptedEvent
	ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * ___ARSessionInterruptedEvent_20;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessioninterruptionEndedEvent
	ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * ___ARSessioninterruptionEndedEvent_21;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionTrackingChangedEvent
	ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2 * ___ARSessionTrackingChangedEvent_22;
	// System.Boolean UnityEngine.XR.iOS.UnityARSessionNativeInterface::<ARSessionShouldAttemptRelocalization>k__BackingField
	bool ___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23;
	// UnityEngine.XR.iOS.UnityARCamera UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_Camera
	UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___s_Camera_24;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_UnityARSessionNativeInterface
	UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * ___s_UnityARSessionNativeInterface_26;
	// UnityEngine.XR.iOS.ARFaceAnchor UnityEngine.XR.iOS.UnityARSessionNativeInterface::arFaceAnchor
	ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6 * ___arFaceAnchor_27;

public:
	inline static int32_t get_offset_of_AREnvironmentProbeAnchorAddedEvent_0() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___AREnvironmentProbeAnchorAddedEvent_0)); }
	inline AREnvironmentProbeAnchorAdded_t352A2C6AEBFEFAF9FFC8E717E49036E7A2DB4E00 * get_AREnvironmentProbeAnchorAddedEvent_0() const { return ___AREnvironmentProbeAnchorAddedEvent_0; }
	inline AREnvironmentProbeAnchorAdded_t352A2C6AEBFEFAF9FFC8E717E49036E7A2DB4E00 ** get_address_of_AREnvironmentProbeAnchorAddedEvent_0() { return &___AREnvironmentProbeAnchorAddedEvent_0; }
	inline void set_AREnvironmentProbeAnchorAddedEvent_0(AREnvironmentProbeAnchorAdded_t352A2C6AEBFEFAF9FFC8E717E49036E7A2DB4E00 * value)
	{
		___AREnvironmentProbeAnchorAddedEvent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AREnvironmentProbeAnchorAddedEvent_0), (void*)value);
	}

	inline static int32_t get_offset_of_AREnvironmentProbeAnchorUpdatedEvent_1() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___AREnvironmentProbeAnchorUpdatedEvent_1)); }
	inline AREnvironmentProbeAnchorUpdated_t2649997F4BDBFDD212BD08787EA6B37DA6C4D9FE * get_AREnvironmentProbeAnchorUpdatedEvent_1() const { return ___AREnvironmentProbeAnchorUpdatedEvent_1; }
	inline AREnvironmentProbeAnchorUpdated_t2649997F4BDBFDD212BD08787EA6B37DA6C4D9FE ** get_address_of_AREnvironmentProbeAnchorUpdatedEvent_1() { return &___AREnvironmentProbeAnchorUpdatedEvent_1; }
	inline void set_AREnvironmentProbeAnchorUpdatedEvent_1(AREnvironmentProbeAnchorUpdated_t2649997F4BDBFDD212BD08787EA6B37DA6C4D9FE * value)
	{
		___AREnvironmentProbeAnchorUpdatedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AREnvironmentProbeAnchorUpdatedEvent_1), (void*)value);
	}

	inline static int32_t get_offset_of_AREnvironmentProbeAnchorRemovedEvent_2() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___AREnvironmentProbeAnchorRemovedEvent_2)); }
	inline AREnvironmentProbeAnchorRemoved_t3B32E5CFAC64DF8A23DB054842E6A67B21CCEB4F * get_AREnvironmentProbeAnchorRemovedEvent_2() const { return ___AREnvironmentProbeAnchorRemovedEvent_2; }
	inline AREnvironmentProbeAnchorRemoved_t3B32E5CFAC64DF8A23DB054842E6A67B21CCEB4F ** get_address_of_AREnvironmentProbeAnchorRemovedEvent_2() { return &___AREnvironmentProbeAnchorRemovedEvent_2; }
	inline void set_AREnvironmentProbeAnchorRemovedEvent_2(AREnvironmentProbeAnchorRemoved_t3B32E5CFAC64DF8A23DB054842E6A67B21CCEB4F * value)
	{
		___AREnvironmentProbeAnchorRemovedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AREnvironmentProbeAnchorRemovedEvent_2), (void*)value);
	}

	inline static int32_t get_offset_of_ARObjectAnchorAddedEvent_3() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARObjectAnchorAddedEvent_3)); }
	inline ARObjectAnchorAdded_t44787F4D7B17D8D9D220C99ECB644F34E8DFF41C * get_ARObjectAnchorAddedEvent_3() const { return ___ARObjectAnchorAddedEvent_3; }
	inline ARObjectAnchorAdded_t44787F4D7B17D8D9D220C99ECB644F34E8DFF41C ** get_address_of_ARObjectAnchorAddedEvent_3() { return &___ARObjectAnchorAddedEvent_3; }
	inline void set_ARObjectAnchorAddedEvent_3(ARObjectAnchorAdded_t44787F4D7B17D8D9D220C99ECB644F34E8DFF41C * value)
	{
		___ARObjectAnchorAddedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARObjectAnchorAddedEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of_ARObjectAnchorUpdatedEvent_4() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARObjectAnchorUpdatedEvent_4)); }
	inline ARObjectAnchorUpdated_tECD9813AEC4C3F1B751595D3C48DA59F8105C88D * get_ARObjectAnchorUpdatedEvent_4() const { return ___ARObjectAnchorUpdatedEvent_4; }
	inline ARObjectAnchorUpdated_tECD9813AEC4C3F1B751595D3C48DA59F8105C88D ** get_address_of_ARObjectAnchorUpdatedEvent_4() { return &___ARObjectAnchorUpdatedEvent_4; }
	inline void set_ARObjectAnchorUpdatedEvent_4(ARObjectAnchorUpdated_tECD9813AEC4C3F1B751595D3C48DA59F8105C88D * value)
	{
		___ARObjectAnchorUpdatedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARObjectAnchorUpdatedEvent_4), (void*)value);
	}

	inline static int32_t get_offset_of_ARObjectAnchorRemovedEvent_5() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARObjectAnchorRemovedEvent_5)); }
	inline ARObjectAnchorRemoved_t7365DB46860AE9393ABBD80691D81F38FA5A41B6 * get_ARObjectAnchorRemovedEvent_5() const { return ___ARObjectAnchorRemovedEvent_5; }
	inline ARObjectAnchorRemoved_t7365DB46860AE9393ABBD80691D81F38FA5A41B6 ** get_address_of_ARObjectAnchorRemovedEvent_5() { return &___ARObjectAnchorRemovedEvent_5; }
	inline void set_ARObjectAnchorRemovedEvent_5(ARObjectAnchorRemoved_t7365DB46860AE9393ABBD80691D81F38FA5A41B6 * value)
	{
		___ARObjectAnchorRemovedEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARObjectAnchorRemovedEvent_5), (void*)value);
	}

	inline static int32_t get_offset_of_ARFrameUpdatedEvent_6() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARFrameUpdatedEvent_6)); }
	inline ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * get_ARFrameUpdatedEvent_6() const { return ___ARFrameUpdatedEvent_6; }
	inline ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 ** get_address_of_ARFrameUpdatedEvent_6() { return &___ARFrameUpdatedEvent_6; }
	inline void set_ARFrameUpdatedEvent_6(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * value)
	{
		___ARFrameUpdatedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARFrameUpdatedEvent_6), (void*)value);
	}

	inline static int32_t get_offset_of_ARAnchorAddedEvent_7() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARAnchorAddedEvent_7)); }
	inline ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523 * get_ARAnchorAddedEvent_7() const { return ___ARAnchorAddedEvent_7; }
	inline ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523 ** get_address_of_ARAnchorAddedEvent_7() { return &___ARAnchorAddedEvent_7; }
	inline void set_ARAnchorAddedEvent_7(ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523 * value)
	{
		___ARAnchorAddedEvent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARAnchorAddedEvent_7), (void*)value);
	}

	inline static int32_t get_offset_of_ARAnchorUpdatedEvent_8() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARAnchorUpdatedEvent_8)); }
	inline ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151 * get_ARAnchorUpdatedEvent_8() const { return ___ARAnchorUpdatedEvent_8; }
	inline ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151 ** get_address_of_ARAnchorUpdatedEvent_8() { return &___ARAnchorUpdatedEvent_8; }
	inline void set_ARAnchorUpdatedEvent_8(ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151 * value)
	{
		___ARAnchorUpdatedEvent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARAnchorUpdatedEvent_8), (void*)value);
	}

	inline static int32_t get_offset_of_ARAnchorRemovedEvent_9() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARAnchorRemovedEvent_9)); }
	inline ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584 * get_ARAnchorRemovedEvent_9() const { return ___ARAnchorRemovedEvent_9; }
	inline ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584 ** get_address_of_ARAnchorRemovedEvent_9() { return &___ARAnchorRemovedEvent_9; }
	inline void set_ARAnchorRemovedEvent_9(ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584 * value)
	{
		___ARAnchorRemovedEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARAnchorRemovedEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_ARUserAnchorAddedEvent_10() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARUserAnchorAddedEvent_10)); }
	inline ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8 * get_ARUserAnchorAddedEvent_10() const { return ___ARUserAnchorAddedEvent_10; }
	inline ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8 ** get_address_of_ARUserAnchorAddedEvent_10() { return &___ARUserAnchorAddedEvent_10; }
	inline void set_ARUserAnchorAddedEvent_10(ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8 * value)
	{
		___ARUserAnchorAddedEvent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARUserAnchorAddedEvent_10), (void*)value);
	}

	inline static int32_t get_offset_of_ARUserAnchorUpdatedEvent_11() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARUserAnchorUpdatedEvent_11)); }
	inline ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * get_ARUserAnchorUpdatedEvent_11() const { return ___ARUserAnchorUpdatedEvent_11; }
	inline ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F ** get_address_of_ARUserAnchorUpdatedEvent_11() { return &___ARUserAnchorUpdatedEvent_11; }
	inline void set_ARUserAnchorUpdatedEvent_11(ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * value)
	{
		___ARUserAnchorUpdatedEvent_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARUserAnchorUpdatedEvent_11), (void*)value);
	}

	inline static int32_t get_offset_of_ARUserAnchorRemovedEvent_12() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARUserAnchorRemovedEvent_12)); }
	inline ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * get_ARUserAnchorRemovedEvent_12() const { return ___ARUserAnchorRemovedEvent_12; }
	inline ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 ** get_address_of_ARUserAnchorRemovedEvent_12() { return &___ARUserAnchorRemovedEvent_12; }
	inline void set_ARUserAnchorRemovedEvent_12(ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * value)
	{
		___ARUserAnchorRemovedEvent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARUserAnchorRemovedEvent_12), (void*)value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorAddedEvent_13() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARFaceAnchorAddedEvent_13)); }
	inline ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8 * get_ARFaceAnchorAddedEvent_13() const { return ___ARFaceAnchorAddedEvent_13; }
	inline ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8 ** get_address_of_ARFaceAnchorAddedEvent_13() { return &___ARFaceAnchorAddedEvent_13; }
	inline void set_ARFaceAnchorAddedEvent_13(ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8 * value)
	{
		___ARFaceAnchorAddedEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARFaceAnchorAddedEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorUpdatedEvent_14() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARFaceAnchorUpdatedEvent_14)); }
	inline ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35 * get_ARFaceAnchorUpdatedEvent_14() const { return ___ARFaceAnchorUpdatedEvent_14; }
	inline ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35 ** get_address_of_ARFaceAnchorUpdatedEvent_14() { return &___ARFaceAnchorUpdatedEvent_14; }
	inline void set_ARFaceAnchorUpdatedEvent_14(ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35 * value)
	{
		___ARFaceAnchorUpdatedEvent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARFaceAnchorUpdatedEvent_14), (void*)value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorRemovedEvent_15() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARFaceAnchorRemovedEvent_15)); }
	inline ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C * get_ARFaceAnchorRemovedEvent_15() const { return ___ARFaceAnchorRemovedEvent_15; }
	inline ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C ** get_address_of_ARFaceAnchorRemovedEvent_15() { return &___ARFaceAnchorRemovedEvent_15; }
	inline void set_ARFaceAnchorRemovedEvent_15(ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C * value)
	{
		___ARFaceAnchorRemovedEvent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARFaceAnchorRemovedEvent_15), (void*)value);
	}

	inline static int32_t get_offset_of_ARImageAnchorAddedEvent_16() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARImageAnchorAddedEvent_16)); }
	inline ARImageAnchorAdded_t71A8F5EF09FE7FFD5FFA8E35FE2409FE59893A44 * get_ARImageAnchorAddedEvent_16() const { return ___ARImageAnchorAddedEvent_16; }
	inline ARImageAnchorAdded_t71A8F5EF09FE7FFD5FFA8E35FE2409FE59893A44 ** get_address_of_ARImageAnchorAddedEvent_16() { return &___ARImageAnchorAddedEvent_16; }
	inline void set_ARImageAnchorAddedEvent_16(ARImageAnchorAdded_t71A8F5EF09FE7FFD5FFA8E35FE2409FE59893A44 * value)
	{
		___ARImageAnchorAddedEvent_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARImageAnchorAddedEvent_16), (void*)value);
	}

	inline static int32_t get_offset_of_ARImageAnchorUpdatedEvent_17() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARImageAnchorUpdatedEvent_17)); }
	inline ARImageAnchorUpdated_t552C60653C0710AD7312589A16E6E8B4F00CE036 * get_ARImageAnchorUpdatedEvent_17() const { return ___ARImageAnchorUpdatedEvent_17; }
	inline ARImageAnchorUpdated_t552C60653C0710AD7312589A16E6E8B4F00CE036 ** get_address_of_ARImageAnchorUpdatedEvent_17() { return &___ARImageAnchorUpdatedEvent_17; }
	inline void set_ARImageAnchorUpdatedEvent_17(ARImageAnchorUpdated_t552C60653C0710AD7312589A16E6E8B4F00CE036 * value)
	{
		___ARImageAnchorUpdatedEvent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARImageAnchorUpdatedEvent_17), (void*)value);
	}

	inline static int32_t get_offset_of_ARImageAnchorRemovedEvent_18() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARImageAnchorRemovedEvent_18)); }
	inline ARImageAnchorRemoved_t55233D152AF70F8970D7F4598DADE918A99C82B2 * get_ARImageAnchorRemovedEvent_18() const { return ___ARImageAnchorRemovedEvent_18; }
	inline ARImageAnchorRemoved_t55233D152AF70F8970D7F4598DADE918A99C82B2 ** get_address_of_ARImageAnchorRemovedEvent_18() { return &___ARImageAnchorRemovedEvent_18; }
	inline void set_ARImageAnchorRemovedEvent_18(ARImageAnchorRemoved_t55233D152AF70F8970D7F4598DADE918A99C82B2 * value)
	{
		___ARImageAnchorRemovedEvent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARImageAnchorRemovedEvent_18), (void*)value);
	}

	inline static int32_t get_offset_of_ARSessionFailedEvent_19() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARSessionFailedEvent_19)); }
	inline ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * get_ARSessionFailedEvent_19() const { return ___ARSessionFailedEvent_19; }
	inline ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 ** get_address_of_ARSessionFailedEvent_19() { return &___ARSessionFailedEvent_19; }
	inline void set_ARSessionFailedEvent_19(ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * value)
	{
		___ARSessionFailedEvent_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARSessionFailedEvent_19), (void*)value);
	}

	inline static int32_t get_offset_of_ARSessionInterruptedEvent_20() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARSessionInterruptedEvent_20)); }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * get_ARSessionInterruptedEvent_20() const { return ___ARSessionInterruptedEvent_20; }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 ** get_address_of_ARSessionInterruptedEvent_20() { return &___ARSessionInterruptedEvent_20; }
	inline void set_ARSessionInterruptedEvent_20(ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * value)
	{
		___ARSessionInterruptedEvent_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARSessionInterruptedEvent_20), (void*)value);
	}

	inline static int32_t get_offset_of_ARSessioninterruptionEndedEvent_21() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARSessioninterruptionEndedEvent_21)); }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * get_ARSessioninterruptionEndedEvent_21() const { return ___ARSessioninterruptionEndedEvent_21; }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 ** get_address_of_ARSessioninterruptionEndedEvent_21() { return &___ARSessioninterruptionEndedEvent_21; }
	inline void set_ARSessioninterruptionEndedEvent_21(ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * value)
	{
		___ARSessioninterruptionEndedEvent_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARSessioninterruptionEndedEvent_21), (void*)value);
	}

	inline static int32_t get_offset_of_ARSessionTrackingChangedEvent_22() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARSessionTrackingChangedEvent_22)); }
	inline ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2 * get_ARSessionTrackingChangedEvent_22() const { return ___ARSessionTrackingChangedEvent_22; }
	inline ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2 ** get_address_of_ARSessionTrackingChangedEvent_22() { return &___ARSessionTrackingChangedEvent_22; }
	inline void set_ARSessionTrackingChangedEvent_22(ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2 * value)
	{
		___ARSessionTrackingChangedEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARSessionTrackingChangedEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23)); }
	inline bool get_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23() const { return ___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23() { return &___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23; }
	inline void set_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23(bool value)
	{
		___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_s_Camera_24() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___s_Camera_24)); }
	inline UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  get_s_Camera_24() const { return ___s_Camera_24; }
	inline UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4 * get_address_of_s_Camera_24() { return &___s_Camera_24; }
	inline void set_s_Camera_24(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  value)
	{
		___s_Camera_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_Camera_24))->___lightData_5))->___arDirectonalLightEstimate_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Camera_24))->___pointCloud_7), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_UnityARSessionNativeInterface_26() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___s_UnityARSessionNativeInterface_26)); }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * get_s_UnityARSessionNativeInterface_26() const { return ___s_UnityARSessionNativeInterface_26; }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 ** get_address_of_s_UnityARSessionNativeInterface_26() { return &___s_UnityARSessionNativeInterface_26; }
	inline void set_s_UnityARSessionNativeInterface_26(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * value)
	{
		___s_UnityARSessionNativeInterface_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UnityARSessionNativeInterface_26), (void*)value);
	}

	inline static int32_t get_offset_of_arFaceAnchor_27() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___arFaceAnchor_27)); }
	inline ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6 * get_arFaceAnchor_27() const { return ___arFaceAnchor_27; }
	inline ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6 ** get_address_of_arFaceAnchor_27() { return &___arFaceAnchor_27; }
	inline void set_arFaceAnchor_27(ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6 * value)
	{
		___arFaceAnchor_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arFaceAnchor_27), (void*)value);
	}
};


// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFrameUpdate
struct  ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67  : public MulticastDelegate_t
{
public:

public:
};


// UnityARCameraManager
struct  UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Camera UnityARCameraManager::m_camera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___m_camera_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityARCameraManager::m_session
	UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * ___m_session_5;
	// UnityEngine.Material UnityARCameraManager::savedClearMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___savedClearMaterial_6;
	// UnityEngine.XR.iOS.UnityARAlignment UnityARCameraManager::startAlignment
	int32_t ___startAlignment_7;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityARCameraManager::planeDetection
	int32_t ___planeDetection_8;
	// System.Boolean UnityARCameraManager::getPointCloud
	bool ___getPointCloud_9;
	// System.Boolean UnityARCameraManager::enableLightEstimation
	bool ___enableLightEstimation_10;
	// System.Boolean UnityARCameraManager::enableAutoFocus
	bool ___enableAutoFocus_11;
	// UnityEngine.XR.iOS.UnityAREnvironmentTexturing UnityARCameraManager::environmentTexturing
	int32_t ___environmentTexturing_12;
	// ARReferenceImagesSet UnityARCameraManager::detectionImages
	ARReferenceImagesSet_tE637611976378C4D1057CE06DD14F87EB52174E0 * ___detectionImages_13;
	// System.Int32 UnityARCameraManager::maximumNumberOfTrackedImages
	int32_t ___maximumNumberOfTrackedImages_14;
	// ARReferenceObjectsSetAsset UnityARCameraManager::detectionObjects
	ARReferenceObjectsSetAsset_t0CF5B17AAFFE42A9741BCD5431117FDD025D334E * ___detectionObjects_15;
	// System.Boolean UnityARCameraManager::sessionStarted
	bool ___sessionStarted_16;

public:
	inline static int32_t get_offset_of_m_camera_4() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51, ___m_camera_4)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_m_camera_4() const { return ___m_camera_4; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_m_camera_4() { return &___m_camera_4; }
	inline void set_m_camera_4(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___m_camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_camera_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_session_5() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51, ___m_session_5)); }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * get_m_session_5() const { return ___m_session_5; }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 ** get_address_of_m_session_5() { return &___m_session_5; }
	inline void set_m_session_5(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * value)
	{
		___m_session_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_session_5), (void*)value);
	}

	inline static int32_t get_offset_of_savedClearMaterial_6() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51, ___savedClearMaterial_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_savedClearMaterial_6() const { return ___savedClearMaterial_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_savedClearMaterial_6() { return &___savedClearMaterial_6; }
	inline void set_savedClearMaterial_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___savedClearMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___savedClearMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_startAlignment_7() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51, ___startAlignment_7)); }
	inline int32_t get_startAlignment_7() const { return ___startAlignment_7; }
	inline int32_t* get_address_of_startAlignment_7() { return &___startAlignment_7; }
	inline void set_startAlignment_7(int32_t value)
	{
		___startAlignment_7 = value;
	}

	inline static int32_t get_offset_of_planeDetection_8() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51, ___planeDetection_8)); }
	inline int32_t get_planeDetection_8() const { return ___planeDetection_8; }
	inline int32_t* get_address_of_planeDetection_8() { return &___planeDetection_8; }
	inline void set_planeDetection_8(int32_t value)
	{
		___planeDetection_8 = value;
	}

	inline static int32_t get_offset_of_getPointCloud_9() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51, ___getPointCloud_9)); }
	inline bool get_getPointCloud_9() const { return ___getPointCloud_9; }
	inline bool* get_address_of_getPointCloud_9() { return &___getPointCloud_9; }
	inline void set_getPointCloud_9(bool value)
	{
		___getPointCloud_9 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_10() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51, ___enableLightEstimation_10)); }
	inline bool get_enableLightEstimation_10() const { return ___enableLightEstimation_10; }
	inline bool* get_address_of_enableLightEstimation_10() { return &___enableLightEstimation_10; }
	inline void set_enableLightEstimation_10(bool value)
	{
		___enableLightEstimation_10 = value;
	}

	inline static int32_t get_offset_of_enableAutoFocus_11() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51, ___enableAutoFocus_11)); }
	inline bool get_enableAutoFocus_11() const { return ___enableAutoFocus_11; }
	inline bool* get_address_of_enableAutoFocus_11() { return &___enableAutoFocus_11; }
	inline void set_enableAutoFocus_11(bool value)
	{
		___enableAutoFocus_11 = value;
	}

	inline static int32_t get_offset_of_environmentTexturing_12() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51, ___environmentTexturing_12)); }
	inline int32_t get_environmentTexturing_12() const { return ___environmentTexturing_12; }
	inline int32_t* get_address_of_environmentTexturing_12() { return &___environmentTexturing_12; }
	inline void set_environmentTexturing_12(int32_t value)
	{
		___environmentTexturing_12 = value;
	}

	inline static int32_t get_offset_of_detectionImages_13() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51, ___detectionImages_13)); }
	inline ARReferenceImagesSet_tE637611976378C4D1057CE06DD14F87EB52174E0 * get_detectionImages_13() const { return ___detectionImages_13; }
	inline ARReferenceImagesSet_tE637611976378C4D1057CE06DD14F87EB52174E0 ** get_address_of_detectionImages_13() { return &___detectionImages_13; }
	inline void set_detectionImages_13(ARReferenceImagesSet_tE637611976378C4D1057CE06DD14F87EB52174E0 * value)
	{
		___detectionImages_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___detectionImages_13), (void*)value);
	}

	inline static int32_t get_offset_of_maximumNumberOfTrackedImages_14() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51, ___maximumNumberOfTrackedImages_14)); }
	inline int32_t get_maximumNumberOfTrackedImages_14() const { return ___maximumNumberOfTrackedImages_14; }
	inline int32_t* get_address_of_maximumNumberOfTrackedImages_14() { return &___maximumNumberOfTrackedImages_14; }
	inline void set_maximumNumberOfTrackedImages_14(int32_t value)
	{
		___maximumNumberOfTrackedImages_14 = value;
	}

	inline static int32_t get_offset_of_detectionObjects_15() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51, ___detectionObjects_15)); }
	inline ARReferenceObjectsSetAsset_t0CF5B17AAFFE42A9741BCD5431117FDD025D334E * get_detectionObjects_15() const { return ___detectionObjects_15; }
	inline ARReferenceObjectsSetAsset_t0CF5B17AAFFE42A9741BCD5431117FDD025D334E ** get_address_of_detectionObjects_15() { return &___detectionObjects_15; }
	inline void set_detectionObjects_15(ARReferenceObjectsSetAsset_t0CF5B17AAFFE42A9741BCD5431117FDD025D334E * value)
	{
		___detectionObjects_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___detectionObjects_15), (void*)value);
	}

	inline static int32_t get_offset_of_sessionStarted_16() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51, ___sessionStarted_16)); }
	inline bool get_sessionStarted_16() const { return ___sessionStarted_16; }
	inline bool* get_address_of_sessionStarted_16() { return &___sessionStarted_16; }
	inline void set_sessionStarted_16(bool value)
	{
		___sessionStarted_16 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityPointCloudExample
struct  UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.UInt32 UnityPointCloudExample::numPointsToShow
	uint32_t ___numPointsToShow_4;
	// UnityEngine.GameObject UnityPointCloudExample::PointCloudPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___PointCloudPrefab_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityPointCloudExample::pointCloudObjects
	List_1_t3D4152882C54B77C712688E910390D5C8E030463 * ___pointCloudObjects_6;
	// UnityEngine.Vector3[] UnityPointCloudExample::m_PointCloudData
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_PointCloudData_7;

public:
	inline static int32_t get_offset_of_numPointsToShow_4() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3, ___numPointsToShow_4)); }
	inline uint32_t get_numPointsToShow_4() const { return ___numPointsToShow_4; }
	inline uint32_t* get_address_of_numPointsToShow_4() { return &___numPointsToShow_4; }
	inline void set_numPointsToShow_4(uint32_t value)
	{
		___numPointsToShow_4 = value;
	}

	inline static int32_t get_offset_of_PointCloudPrefab_5() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3, ___PointCloudPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_PointCloudPrefab_5() const { return ___PointCloudPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_PointCloudPrefab_5() { return &___PointCloudPrefab_5; }
	inline void set_PointCloudPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___PointCloudPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PointCloudPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_pointCloudObjects_6() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3, ___pointCloudObjects_6)); }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 * get_pointCloudObjects_6() const { return ___pointCloudObjects_6; }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 ** get_address_of_pointCloudObjects_6() { return &___pointCloudObjects_6; }
	inline void set_pointCloudObjects_6(List_1_t3D4152882C54B77C712688E910390D5C8E030463 * value)
	{
		___pointCloudObjects_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointCloudObjects_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointCloudData_7() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3, ___m_PointCloudData_7)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_PointCloudData_7() const { return ___m_PointCloudData_7; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_PointCloudData_7() { return &___m_PointCloudData_7; }
	inline void set_m_PointCloudData_7(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_PointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointCloudData_7), (void*)value);
	}
};


// UpdateWorldMappingStatus
struct  UpdateWorldMappingStatus_tA474863E7C7B2C743BB4109F5D84160177875FA8  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text UpdateWorldMappingStatus::text
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___text_4;
	// UnityEngine.UI.Text UpdateWorldMappingStatus::tracking
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___tracking_5;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(UpdateWorldMappingStatus_tA474863E7C7B2C743BB4109F5D84160177875FA8, ___text_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_text_4() const { return ___text_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}

	inline static int32_t get_offset_of_tracking_5() { return static_cast<int32_t>(offsetof(UpdateWorldMappingStatus_tA474863E7C7B2C743BB4109F5D84160177875FA8, ___tracking_5)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_tracking_5() const { return ___tracking_5; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_tracking_5() { return &___tracking_5; }
	inline void set_tracking_5(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___tracking_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tracking_5), (void*)value);
	}
};


// VideoFormatButton
struct  VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text VideoFormatButton::videoFormatDescription
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___videoFormatDescription_4;
	// UnityEngine.XR.iOS.UnityARVideoFormat VideoFormatButton::arVideoFormat
	UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  ___arVideoFormat_5;

public:
	inline static int32_t get_offset_of_videoFormatDescription_4() { return static_cast<int32_t>(offsetof(VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83, ___videoFormatDescription_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_videoFormatDescription_4() const { return ___videoFormatDescription_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_videoFormatDescription_4() { return &___videoFormatDescription_4; }
	inline void set_videoFormatDescription_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___videoFormatDescription_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoFormatDescription_4), (void*)value);
	}

	inline static int32_t get_offset_of_arVideoFormat_5() { return static_cast<int32_t>(offsetof(VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83, ___arVideoFormat_5)); }
	inline UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  get_arVideoFormat_5() const { return ___arVideoFormat_5; }
	inline UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95 * get_address_of_arVideoFormat_5() { return &___arVideoFormat_5; }
	inline void set_arVideoFormat_5(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  value)
	{
		___arVideoFormat_5 = value;
	}
};

struct VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_StaticFields
{
public:
	// VideoFormatButton_VideoFormatButtonPressed VideoFormatButton::FormatButtonPressedEvent
	VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * ___FormatButtonPressedEvent_6;

public:
	inline static int32_t get_offset_of_FormatButtonPressedEvent_6() { return static_cast<int32_t>(offsetof(VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_StaticFields, ___FormatButtonPressedEvent_6)); }
	inline VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * get_FormatButtonPressedEvent_6() const { return ___FormatButtonPressedEvent_6; }
	inline VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC ** get_address_of_FormatButtonPressedEvent_6() { return &___FormatButtonPressedEvent_6; }
	inline void set_FormatButtonPressedEvent_6(VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * value)
	{
		___FormatButtonPressedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FormatButtonPressedEvent_6), (void*)value);
	}
};


// VideoFormatsExample
struct  VideoFormatsExample_t33090EA342CA6D34540CD00BAB4D81FE5B8BE08B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform VideoFormatsExample::formatsParent
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___formatsParent_4;
	// UnityEngine.GameObject VideoFormatsExample::videoFormatButtonPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___videoFormatButtonPrefab_5;

public:
	inline static int32_t get_offset_of_formatsParent_4() { return static_cast<int32_t>(offsetof(VideoFormatsExample_t33090EA342CA6D34540CD00BAB4D81FE5B8BE08B, ___formatsParent_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_formatsParent_4() const { return ___formatsParent_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_formatsParent_4() { return &___formatsParent_4; }
	inline void set_formatsParent_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___formatsParent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formatsParent_4), (void*)value);
	}

	inline static int32_t get_offset_of_videoFormatButtonPrefab_5() { return static_cast<int32_t>(offsetof(VideoFormatsExample_t33090EA342CA6D34540CD00BAB4D81FE5B8BE08B, ___videoFormatButtonPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_videoFormatButtonPrefab_5() const { return ___videoFormatButtonPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_videoFormatButtonPrefab_5() { return &___videoFormatButtonPrefab_5; }
	inline void set_videoFormatButtonPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___videoFormatButtonPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoFormatButtonPrefab_5), (void*)value);
	}
};


// WorldMapManager
struct  WorldMapManager_t2E882FE3D5782FCC4EEE54E41A3A12CF64DEF7F8  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityARCameraManager WorldMapManager::m_ARCameraManager
	UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51 * ___m_ARCameraManager_4;
	// UnityEngine.XR.iOS.ARWorldMap WorldMapManager::m_LoadedMap
	ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * ___m_LoadedMap_5;
	// UnityEngine.XR.iOS.serializableARWorldMap WorldMapManager::serializedWorldMap
	serializableARWorldMap_t7E10ABE00B8AE4798879ED785B257CF12FDFFFCE * ___serializedWorldMap_6;
	// UnityEngine.XR.iOS.ARTrackingStateReason WorldMapManager::m_LastReason
	int32_t ___m_LastReason_7;

public:
	inline static int32_t get_offset_of_m_ARCameraManager_4() { return static_cast<int32_t>(offsetof(WorldMapManager_t2E882FE3D5782FCC4EEE54E41A3A12CF64DEF7F8, ___m_ARCameraManager_4)); }
	inline UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51 * get_m_ARCameraManager_4() const { return ___m_ARCameraManager_4; }
	inline UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51 ** get_address_of_m_ARCameraManager_4() { return &___m_ARCameraManager_4; }
	inline void set_m_ARCameraManager_4(UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51 * value)
	{
		___m_ARCameraManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ARCameraManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_LoadedMap_5() { return static_cast<int32_t>(offsetof(WorldMapManager_t2E882FE3D5782FCC4EEE54E41A3A12CF64DEF7F8, ___m_LoadedMap_5)); }
	inline ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * get_m_LoadedMap_5() const { return ___m_LoadedMap_5; }
	inline ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A ** get_address_of_m_LoadedMap_5() { return &___m_LoadedMap_5; }
	inline void set_m_LoadedMap_5(ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * value)
	{
		___m_LoadedMap_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoadedMap_5), (void*)value);
	}

	inline static int32_t get_offset_of_serializedWorldMap_6() { return static_cast<int32_t>(offsetof(WorldMapManager_t2E882FE3D5782FCC4EEE54E41A3A12CF64DEF7F8, ___serializedWorldMap_6)); }
	inline serializableARWorldMap_t7E10ABE00B8AE4798879ED785B257CF12FDFFFCE * get_serializedWorldMap_6() const { return ___serializedWorldMap_6; }
	inline serializableARWorldMap_t7E10ABE00B8AE4798879ED785B257CF12FDFFFCE ** get_address_of_serializedWorldMap_6() { return &___serializedWorldMap_6; }
	inline void set_serializedWorldMap_6(serializableARWorldMap_t7E10ABE00B8AE4798879ED785B257CF12FDFFFCE * value)
	{
		___serializedWorldMap_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedWorldMap_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastReason_7() { return static_cast<int32_t>(offsetof(WorldMapManager_t2E882FE3D5782FCC4EEE54E41A3A12CF64DEF7F8, ___m_LastReason_7)); }
	inline int32_t get_m_LastReason_7() const { return ___m_LastReason_7; }
	inline int32_t* get_address_of_m_LastReason_7() { return &___m_LastReason_7; }
	inline void set_m_LastReason_7(int32_t value)
	{
		___m_LastReason_7 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_34;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_35;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_37;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_40;

public:
	inline static int32_t get_offset_of_m_FontData_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_34)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_34() const { return ___m_FontData_34; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_34() { return &___m_FontData_34; }
	inline void set_m_FontData_34(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_35)); }
	inline String_t* get_m_Text_35() const { return ___m_Text_35; }
	inline String_t** get_address_of_m_Text_35() { return &___m_Text_35; }
	inline void set_m_Text_35(String_t* value)
	{
		___m_Text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_36)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_36() const { return ___m_TextCache_36; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_36() { return &___m_TextCache_36; }
	inline void set_m_TextCache_36(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_37() const { return ___m_TextCacheForLayout_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_37() { return &___m_TextCacheForLayout_37; }
	inline void set_m_TextCacheForLayout_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_39)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_39() const { return ___m_DisableFontTextureRebuiltCallback_39; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_39() { return &___m_DisableFontTextureRebuiltCallback_39; }
	inline void set_m_DisableFontTextureRebuiltCallback_39(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_39 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_40)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_40() const { return ___m_TempVerts_40; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_40() { return &___m_TempVerts_40; }
	inline void set_m_TempVerts_40(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_40), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_38;

public:
	inline static int32_t get_offset_of_s_DefaultText_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_38)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_38() const { return ___s_DefaultText_38; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_38() { return &___s_DefaultText_38; }
	inline void set_s_DefaultText_38(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_38), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mFBEB99FAFA7C81868D18C2A17C94AF512CD872EC_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t858BC997372412990A872C348DEFB6AFF271B588  List_1_GetEnumerator_mA2E730455476B54363C610767E79578F78E804D0_gshared (List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  Enumerator_get_Current_m01F086B16DE444EC3FA5E088F14FAAEF5A96CD79_gshared_inline (Enumerator_t858BC997372412990A872C348DEFB6AFF271B588 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m765EEDB3D86CE4EADC667B84C18E793D14144E1D_gshared (RuntimeObject * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3664EDDE4BC67CE2EBC22692863FF89520217A79_gshared (Enumerator_t858BC997372412990A872C348DEFB6AFF271B588 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m30AEB9995CE97DE0080491C4DBA8176F9DB74CD7_gshared (Enumerator_t858BC997372412990A872C348DEFB6AFF271B588 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFrameUpdate__ctor_m6F45CC484332074A55C8E90A002E14881B72A68A (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARFrameUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m220BDF5002999B98BCF2E6696125C105CB798461 (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_mE0CF797BC1662A4FDFF8009E76AC0A5CD1BB1FCA (List_1_t3D4152882C54B77C712688E910390D5C8E030463 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3D4152882C54B77C712688E910390D5C8E030463 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mFBEB99FAFA7C81868D18C2A17C94AF512CD872EC_gshared)(___original0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_mB466FEDA88AB72CA7331450A36E50D916A6C3BB6 (List_1_t3D4152882C54B77C712688E910390D5C8E030463 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3D4152882C54B77C712688E910390D5C8E030463 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3[] UnityEngine.XR.iOS.ARPointCloud::get_Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ARPointCloud_get_Points_m7C7E2823BD9A4AF26DD6B23112750A071DE5FEAD (ARPointCloud_t57E36E6C732B90C48B77D64E9FAE17668784064C * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_op_Implicit_m5BFA8D95F88CB2AEA6E02B200A61B718314A8495 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * List_1_get_Item_mF3CFF4FB71CEEDC038A8826D6AE1A226B7CF22A6_inline (List_1_t3D4152882C54B77C712688E910390D5C8E030463 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (List_1_t3D4152882C54B77C712688E910390D5C8E030463 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Int64 System.Math::Min(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Min_mA2FECF96DCE00528FBA2A3835BEB4B9B1E97CDD3 (int64_t ___val10, int64_t ___val21, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARFrameUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_mB19CB3DB613EA5AB905C1C946618F509607F8A3A (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void VideoFormatButton/VideoFormatButtonPressed::Invoke(UnityEngine.XR.iOS.UnityARVideoFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatButtonPressed_Invoke_m71D0D1AD5D2027FAE544C696B1F949CA6E30D68D (VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * __this, UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  ___videoFormat0, const RuntimeMethod* method);
// System.Void VideoFormatButton/VideoFormatButtonPressed::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatButtonPressed__ctor_m59244FE8EB45DADB40BD08C8F98507215DC45953 (VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void VideoFormatButton::add_FormatButtonPressedEvent(VideoFormatButton/VideoFormatButtonPressed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatButton_add_FormatButtonPressedEvent_m13791FB6B2E8E3F68B62B8AF97747151B5C183C3 (VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * ___value0, const RuntimeMethod* method);
// System.Void VideoFormatsExample::PopulateVideoFormatButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatsExample_PopulateVideoFormatButtons_mB7448949BE86B5314C66D7C19C23AB6E4815E805 (VideoFormatsExample_t33090EA342CA6D34540CD00BAB4D81FE5B8BE08B * __this, const RuntimeMethod* method);
// System.Void VideoFormatButton::remove_FormatButtonPressedEvent(VideoFormatButton/VideoFormatButtonPressed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatButton_remove_FormatButtonPressedEvent_mF7D22FC6DC84507C3D50BBE2512CB56318C4BB36 (VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat> UnityEngine.XR.iOS.UnityARVideoFormat::SupportedVideoFormats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 * UnityARVideoFormat_SupportedVideoFormats_m4017CB1068607654ADE02166974D4459B29BC9CF (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>::GetEnumerator()
inline Enumerator_t858BC997372412990A872C348DEFB6AFF271B588  List_1_GetEnumerator_mA2E730455476B54363C610767E79578F78E804D0 (List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t858BC997372412990A872C348DEFB6AFF271B588  (*) (List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 *, const RuntimeMethod*))List_1_GetEnumerator_mA2E730455476B54363C610767E79578F78E804D0_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::get_Current()
inline UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  Enumerator_get_Current_m01F086B16DE444EC3FA5E088F14FAAEF5A96CD79_inline (Enumerator_t858BC997372412990A872C348DEFB6AFF271B588 * __this, const RuntimeMethod* method)
{
	return ((  UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  (*) (Enumerator_t858BC997372412990A872C348DEFB6AFF271B588 *, const RuntimeMethod*))Enumerator_get_Current_m01F086B16DE444EC3FA5E088F14FAAEF5A96CD79_gshared_inline)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m765EEDB3D86CE4EADC667B84C18E793D14144E1D_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<VideoFormatButton>()
inline VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83 * GameObject_GetComponent_TisVideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_m98E45280EB96DF176C3C1E881AD56000C52F92FA (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void VideoFormatButton::Populate(UnityEngine.XR.iOS.UnityARVideoFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatButton_Populate_m440B794C3E2E292E99B5CD614FAE3DE3207D3087 (VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83 * __this, UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  ___videoFormat0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::MoveNext()
inline bool Enumerator_MoveNext_m3664EDDE4BC67CE2EBC22692863FF89520217A79 (Enumerator_t858BC997372412990A872C348DEFB6AFF271B588 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t858BC997372412990A872C348DEFB6AFF271B588 *, const RuntimeMethod*))Enumerator_MoveNext_m3664EDDE4BC67CE2EBC22692863FF89520217A79_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::Dispose()
inline void Enumerator_Dispose_m30AEB9995CE97DE0080491C4DBA8176F9DB74CD7 (Enumerator_t858BC997372412990A872C348DEFB6AFF271B588 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t858BC997372412990A872C348DEFB6AFF271B588 *, const RuntimeMethod*))Enumerator_Dispose_m30AEB9995CE97DE0080491C4DBA8176F9DB74CD7_gshared)(__this, method);
}
// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARSessionNativeInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * UnityARSessionNativeInterface_GetARSessionNativeInterface_m1BE99E7A463CFC435889D1AFEF569BB4E7F69E67 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::get_IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitWorldTrackingSessionConfiguration_get_IsSupported_m5ECF5336ED042DAF6C96DDAE32848AEC332F46F1 (ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mC20C40E50BAB994B10DDAC0E3C26A851025337BC (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::RunWithConfigAndOptions(UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_RunWithConfigAndOptions_m205C48D0979F3D1DA96AA557AD29C171AD42FE22 (UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * __this, ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  ___config0, int32_t ___runOptions1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::SetStackTraceLogType(UnityEngine.LogType,UnityEngine.StackTraceLogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_SetStackTraceLogType_m0E7F71F07C77A92CD88DD0F4A0BFD881AE4F1692 (int32_t ___logType0, int32_t ___stackTraceType1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.String WorldMapManager::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WorldMapManager_get_path_m53218CEC7AAF9F8A86F49D46A9499E452252CEDC (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.iOS.ARWorldMap::Save(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Save_mD039CE26625B86C26856230E3A5238E2AF3DCF5E (ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * __this, String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARSessionNativeInterface WorldMapManager::get_session()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * WorldMapManager_get_session_mF41AE66999D28361BF32CEB0984ED966BB6C622D (const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.iOS.ARWorldMap>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mF93053DD6A32ACE4C6DC8EDFE0A9FDF28F23312A (Action_1_t3C39529EECE3FAE7BEC843DA89A2FA025136D52B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3C39529EECE3FAE7BEC843DA89A2FA025136D52B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetCurrentWorldMapAsync(System.Action`1<UnityEngine.XR.iOS.ARWorldMap>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_GetCurrentWorldMapAsync_mD6591FE76F0BC4AD296966F02071D8E0068EB955 (UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * __this, Action_1_t3C39529EECE3FAE7BEC843DA89A2FA025136D52B * ___completionCallback0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARWorldMap UnityEngine.XR.iOS.ARWorldMap::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * ARWorldMap_Load_m4E49380E20AF7CCCC9A9B0CBA303EEA728A67DA3 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.iOS.ARWorldMap::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ARWorldMap_get_center_m06DC20B2E216CF12BF25D75AB5D9EF98F7502581 (ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.iOS.ARWorldMap::get_extent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ARWorldMap_get_extent_mDA5CEA8C24C66341C9F554D366475CE6A6290118 (ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::set_ARSessionShouldAttemptRelocalization(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_set_ARSessionShouldAttemptRelocalization_mC7419A0137CADDD2387503BF0701CD5624295CD5_inline (bool ___value0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration UnityARCameraManager::get_sessionConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  UnityARCameraManager_get_sessionConfiguration_m780742DED19901F72EC03D10A4DBCA9B59FC2CE2 (UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::set_worldMap(UnityEngine.XR.iOS.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitWorldTrackingSessionConfiguration_set_worldMap_mC86AFE6C3F466CAD7967F6FF36AF1BC588ABDD0F (ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03 * __this, ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.serializableARWorldMap UnityEngine.XR.iOS.serializableARWorldMap::op_Implicit(UnityEngine.XR.iOS.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableARWorldMap_t7E10ABE00B8AE4798879ED785B257CF12FDFFFCE * serializableARWorldMap_op_Implicit_m02A1D4E28143EBCC9FF4D5D768DAA6E60B7B0F0F (ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * ___arWorldMap0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARWorldMap UnityEngine.XR.iOS.serializableARWorldMap::op_Implicit(UnityEngine.XR.iOS.serializableARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * serializableARWorldMap_op_Implicit_mAC63AA57DF39039FC9A8C53F9933A1363C2541CC (serializableARWorldMap_t7E10ABE00B8AE4798879ED785B257CF12FDFFFCE * ___serWorldMap0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityPointCloudExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPointCloudExample_Start_mBBFD6C7EA992F831E0FDF4C552791DA990344B86 (UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPointCloudExample_Start_mBBFD6C7EA992F831E0FDF4C552791DA990344B86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * L_0 = (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 *)il2cpp_codegen_object_new(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m6F45CC484332074A55C8E90A002E14881B72A68A(L_0, __this, (intptr_t)((intptr_t)UnityPointCloudExample_ARFrameUpdated_m63496C2B26C679351D74B8628C328046DC19E2DD_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m220BDF5002999B98BCF2E6696125C105CB798461(L_0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		List_1_t3D4152882C54B77C712688E910390D5C8E030463 * L_3 = (List_1_t3D4152882C54B77C712688E910390D5C8E030463 *)il2cpp_codegen_object_new(List_1_t3D4152882C54B77C712688E910390D5C8E030463_il2cpp_TypeInfo_var);
		List_1__ctor_mE0CF797BC1662A4FDFF8009E76AC0A5CD1BB1FCA(L_3, /*hidden argument*/List_1__ctor_mE0CF797BC1662A4FDFF8009E76AC0A5CD1BB1FCA_RuntimeMethod_var);
		__this->set_pointCloudObjects_6(L_3);
		V_0 = 0;
		goto IL_0048;
	}

IL_002e:
	{
		List_1_t3D4152882C54B77C712688E910390D5C8E030463 * L_4 = __this->get_pointCloudObjects_6();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_Add_mB466FEDA88AB72CA7331450A36E50D916A6C3BB6(L_4, L_6, /*hidden argument*/List_1_Add_mB466FEDA88AB72CA7331450A36E50D916A6C3BB6_RuntimeMethod_var);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_8 = V_0;
		uint32_t L_9 = __this->get_numPointsToShow_4();
		if ((((int64_t)(((int64_t)((int64_t)L_8)))) < ((int64_t)(((int64_t)((uint64_t)L_9))))))
		{
			goto IL_002e;
		}
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityPointCloudExample::ARFrameUpdated(UnityEngine.XR.iOS.UnityARCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPointCloudExample_ARFrameUpdated_m63496C2B26C679351D74B8628C328046DC19E2DD (UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3 * __this, UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___camera0, const RuntimeMethod* method)
{
	{
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_0 = ___camera0;
		ARPointCloud_t57E36E6C732B90C48B77D64E9FAE17668784064C * L_1 = L_0.get_pointCloud_7();
		NullCheck(L_1);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = ARPointCloud_get_Points_m7C7E2823BD9A4AF26DD6B23112750A071DE5FEAD(L_1, /*hidden argument*/NULL);
		__this->set_m_PointCloudData_7(L_2);
		return;
	}
}
// System.Void UnityPointCloudExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPointCloudExample_Update_m17378257B82327F087B521E4E4432699317EFA7C (UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPointCloudExample_Update_m17378257B82327F087B521E4E4432699317EFA7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0076;
		}
	}
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = __this->get_m_PointCloudData_7();
		if (!L_2)
		{
			goto IL_0076;
		}
	}
	{
		V_0 = 0;
		goto IL_005d;
	}

IL_001a:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = __this->get_m_PointCloudData_7();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_7 = Vector4_op_Implicit_m5BFA8D95F88CB2AEA6E02B200A61B718314A8495(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		List_1_t3D4152882C54B77C712688E910390D5C8E030463 * L_8 = __this->get_pointCloudObjects_6();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = List_1_get_Item_mF3CFF4FB71CEEDC038A8826D6AE1A226B7CF22A6_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_mF3CFF4FB71CEEDC038A8826D6AE1A226B7CF22A6_RuntimeMethod_var);
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_10, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_12 = V_1;
		float L_13 = L_12.get_x_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_14 = V_1;
		float L_15 = L_14.get_y_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_16 = V_1;
		float L_17 = L_16.get_z_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_18), L_13, L_15, L_17, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_11, L_18, /*hidden argument*/NULL);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_005d:
	{
		int32_t L_20 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_21 = __this->get_m_PointCloudData_7();
		NullCheck(L_21);
		uint32_t L_22 = __this->get_numPointsToShow_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int64_t L_23 = Math_Min_mA2FECF96DCE00528FBA2A3835BEB4B9B1E97CDD3((((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))), (((int64_t)((uint64_t)L_22))), /*hidden argument*/NULL);
		if ((((int64_t)(((int64_t)((int64_t)L_20)))) < ((int64_t)L_23)))
		{
			goto IL_001a;
		}
	}

IL_0076:
	{
		return;
	}
}
// System.Void UnityPointCloudExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPointCloudExample__ctor_m162E5F158FB153964E063235BB0ECCDD6A54DA73 (UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3 * __this, const RuntimeMethod* method)
{
	{
		__this->set_numPointsToShow_4(((int32_t)100));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UpdateWorldMappingStatus::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateWorldMappingStatus_Start_m2AD028A21B09490FC3373321AA23F9EA59F62703 (UpdateWorldMappingStatus_tA474863E7C7B2C743BB4109F5D84160177875FA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateWorldMappingStatus_Start_m2AD028A21B09490FC3373321AA23F9EA59F62703_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * L_0 = (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 *)il2cpp_codegen_object_new(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m6F45CC484332074A55C8E90A002E14881B72A68A(L_0, __this, (intptr_t)((intptr_t)UpdateWorldMappingStatus_CheckWorldMapStatus_m5DF114B471E5534D5B23B3BC83B3A168F0670DD5_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m220BDF5002999B98BCF2E6696125C105CB798461(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UpdateWorldMappingStatus::CheckWorldMapStatus(UnityEngine.XR.iOS.UnityARCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateWorldMappingStatus_CheckWorldMapStatus_m5DF114B471E5534D5B23B3BC83B3A168F0670DD5 (UpdateWorldMappingStatus_tA474863E7C7B2C743BB4109F5D84160177875FA8 * __this, UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___cam0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateWorldMappingStatus_CheckWorldMapStatus_m5DF114B471E5534D5B23B3BC83B3A168F0670DD5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_text_4();
		int32_t* L_1 = (&___cam0)->get_address_of_worldMappingStatus_8();
		RuntimeObject * L_2 = Box(ARWorldMappingStatus_t1924A56B168ED7DDAA8FB935E53E56E56A893834_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		*L_1 = *(int32_t*)UnBox(L_2);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_tracking_5();
		int32_t* L_5 = (&___cam0)->get_address_of_trackingState_2();
		RuntimeObject * L_6 = Box(ARTrackingState_t904937D92845C4D5954E4E16182F7BC33F5F744B_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		*L_5 = *(int32_t*)UnBox(L_6);
		int32_t* L_8 = (&___cam0)->get_address_of_trackingReason_3();
		RuntimeObject * L_9 = Box(ARTrackingStateReason_t4E957429E93991E43643D4C64AC81F488B71A17C_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		*L_8 = *(int32_t*)UnBox(L_9);
		String_t* L_11 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_7, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_10, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_11);
		return;
	}
}
// System.Void UpdateWorldMappingStatus::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateWorldMappingStatus_OnDestroy_m570EDDDAC3665FD6F0123423F22CC64C2105EFD0 (UpdateWorldMappingStatus_tA474863E7C7B2C743BB4109F5D84160177875FA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateWorldMappingStatus_OnDestroy_m570EDDDAC3665FD6F0123423F22CC64C2105EFD0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * L_0 = (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 *)il2cpp_codegen_object_new(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m6F45CC484332074A55C8E90A002E14881B72A68A(L_0, __this, (intptr_t)((intptr_t)UpdateWorldMappingStatus_CheckWorldMapStatus_m5DF114B471E5534D5B23B3BC83B3A168F0670DD5_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_mB19CB3DB613EA5AB905C1C946618F509607F8A3A(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UpdateWorldMappingStatus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateWorldMappingStatus__ctor_mE3661AC6CF2801C4681053F7027DB6DEA7E1C876 (UpdateWorldMappingStatus_tA474863E7C7B2C743BB4109F5D84160177875FA8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VideoFormatButton::add_FormatButtonPressedEvent(VideoFormatButton_VideoFormatButtonPressed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatButton_add_FormatButtonPressedEvent_m13791FB6B2E8E3F68B62B8AF97747151B5C183C3 (VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButton_add_FormatButtonPressedEvent_m13791FB6B2E8E3F68B62B8AF97747151B5C183C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * V_0 = NULL;
	VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * V_1 = NULL;
	VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * V_2 = NULL;
	{
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_0 = ((VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_il2cpp_TypeInfo_var))->get_FormatButtonPressedEvent_6();
		V_0 = L_0;
	}

IL_0006:
	{
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_1 = V_0;
		V_1 = L_1;
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_2 = V_1;
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC *)CastclassSealed((RuntimeObject*)L_4, VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC_il2cpp_TypeInfo_var));
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_5 = V_2;
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_6 = V_1;
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_7 = InterlockedCompareExchangeImpl<VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC *>((VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC **)(((VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_il2cpp_TypeInfo_var))->get_address_of_FormatButtonPressedEvent_6()), L_5, L_6);
		V_0 = L_7;
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_8 = V_0;
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_9 = V_1;
		if ((!(((RuntimeObject*)(VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC *)L_8) == ((RuntimeObject*)(VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void VideoFormatButton::remove_FormatButtonPressedEvent(VideoFormatButton_VideoFormatButtonPressed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatButton_remove_FormatButtonPressedEvent_mF7D22FC6DC84507C3D50BBE2512CB56318C4BB36 (VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButton_remove_FormatButtonPressedEvent_mF7D22FC6DC84507C3D50BBE2512CB56318C4BB36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * V_0 = NULL;
	VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * V_1 = NULL;
	VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * V_2 = NULL;
	{
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_0 = ((VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_il2cpp_TypeInfo_var))->get_FormatButtonPressedEvent_6();
		V_0 = L_0;
	}

IL_0006:
	{
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_1 = V_0;
		V_1 = L_1;
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_2 = V_1;
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC *)CastclassSealed((RuntimeObject*)L_4, VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC_il2cpp_TypeInfo_var));
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_5 = V_2;
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_6 = V_1;
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_7 = InterlockedCompareExchangeImpl<VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC *>((VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC **)(((VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_il2cpp_TypeInfo_var))->get_address_of_FormatButtonPressedEvent_6()), L_5, L_6);
		V_0 = L_7;
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_8 = V_0;
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_9 = V_1;
		if ((!(((RuntimeObject*)(VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC *)L_8) == ((RuntimeObject*)(VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void VideoFormatButton::Populate(UnityEngine.XR.iOS.UnityARVideoFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatButton_Populate_m440B794C3E2E292E99B5CD614FAE3DE3207D3087 (VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83 * __this, UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  ___videoFormat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButton_Populate_m440B794C3E2E292E99B5CD614FAE3DE3207D3087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  L_0 = ___videoFormat0;
		__this->set_arVideoFormat_5(L_0);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = __this->get_videoFormatDescription_4();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral13462B997C9C86B85C4A46CF050B8644B6563ACF);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral13462B997C9C86B85C4A46CF050B8644B6563ACF);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  L_5 = ___videoFormat0;
		float L_6 = L_5.get_imageResolutionWidth_1();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_4;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral11F6AD8EC52A2984ABAAFD7C3B516503785C2072);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_9;
		UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  L_11 = ___videoFormat0;
		float L_12 = L_11.get_imageResolutionHeight_2();
		float L_13 = L_12;
		RuntimeObject * L_14 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_14);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_10;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral40000C98ABC008AF8B7D859D811CF8101C06F210);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral40000C98ABC008AF8B7D859D811CF8101C06F210);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_15;
		UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  L_17 = ___videoFormat0;
		int32_t L_18 = L_17.get_framesPerSecond_3();
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_20);
		String_t* L_21 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_16, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_21);
		return;
	}
}
// System.Void VideoFormatButton::ButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatButton_ButtonPressed_m7BA63FD2D097010414DF7C0A2D42FDEB1AB80C43 (VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButton_ButtonPressed_m7BA63FD2D097010414DF7C0A2D42FDEB1AB80C43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_0 = ((VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_il2cpp_TypeInfo_var))->get_FormatButtonPressedEvent_6();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_1 = ((VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_il2cpp_TypeInfo_var))->get_FormatButtonPressedEvent_6();
		UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  L_2 = __this->get_arVideoFormat_5();
		NullCheck(L_1);
		VideoFormatButtonPressed_Invoke_m71D0D1AD5D2027FAE544C696B1F949CA6E30D68D(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void VideoFormatButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatButton__ctor_m121976E5AA7A3069D780F064E432A63A495AA3B2 (VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC (VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * __this, UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  ___videoFormat0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___videoFormat0);

}
// System.Void VideoFormatButton_VideoFormatButtonPressed::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatButtonPressed__ctor_m59244FE8EB45DADB40BD08C8F98507215DC45953 (VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void VideoFormatButton_VideoFormatButtonPressed::Invoke(UnityEngine.XR.iOS.UnityARVideoFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatButtonPressed_Invoke_m71D0D1AD5D2027FAE544C696B1F949CA6E30D68D (VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * __this, UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  ___videoFormat0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___videoFormat0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___videoFormat0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___videoFormat0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  >::Invoke(targetMethod, targetThis, ___videoFormat0);
					else
						GenericVirtActionInvoker1< UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  >::Invoke(targetMethod, targetThis, ___videoFormat0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___videoFormat0);
					else
						VirtActionInvoker1< UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___videoFormat0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___videoFormat0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult VideoFormatButton_VideoFormatButtonPressed::BeginInvoke(UnityEngine.XR.iOS.UnityARVideoFormat,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VideoFormatButtonPressed_BeginInvoke_m55D2AA471C3413047F17ECB7453E439B3ED8E9F6 (VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * __this, UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  ___videoFormat0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButtonPressed_BeginInvoke_m55D2AA471C3413047F17ECB7453E439B3ED8E9F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95_il2cpp_TypeInfo_var, &___videoFormat0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void VideoFormatButton_VideoFormatButtonPressed::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatButtonPressed_EndInvoke_m6B619457939A68318F3BFC48192FEF1E19C005D2 (VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VideoFormatsExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatsExample_Start_mF2BC62AA4127FA53E9A9E08CBC400671F3FA5613 (VideoFormatsExample_t33090EA342CA6D34540CD00BAB4D81FE5B8BE08B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatsExample_Start_mF2BC62AA4127FA53E9A9E08CBC400671F3FA5613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_0 = (VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC *)il2cpp_codegen_object_new(VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC_il2cpp_TypeInfo_var);
		VideoFormatButtonPressed__ctor_m59244FE8EB45DADB40BD08C8F98507215DC45953(L_0, __this, (intptr_t)((intptr_t)VideoFormatsExample_ExampletButtonPressed_m5084D6E2E72CB31C3059069692D8D8B4044F3626_RuntimeMethod_var), /*hidden argument*/NULL);
		VideoFormatButton_add_FormatButtonPressedEvent_m13791FB6B2E8E3F68B62B8AF97747151B5C183C3(L_0, /*hidden argument*/NULL);
		VideoFormatsExample_PopulateVideoFormatButtons_mB7448949BE86B5314C66D7C19C23AB6E4815E805(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoFormatsExample::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatsExample_OnDestroy_m3C90AAEE40F90FCD3C9CDED932A31FDA882E9C9F (VideoFormatsExample_t33090EA342CA6D34540CD00BAB4D81FE5B8BE08B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatsExample_OnDestroy_m3C90AAEE40F90FCD3C9CDED932A31FDA882E9C9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC * L_0 = (VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC *)il2cpp_codegen_object_new(VideoFormatButtonPressed_tE2EB379E3E66B4C8D84030EA0FE11BE4714820CC_il2cpp_TypeInfo_var);
		VideoFormatButtonPressed__ctor_m59244FE8EB45DADB40BD08C8F98507215DC45953(L_0, __this, (intptr_t)((intptr_t)VideoFormatsExample_ExampletButtonPressed_m5084D6E2E72CB31C3059069692D8D8B4044F3626_RuntimeMethod_var), /*hidden argument*/NULL);
		VideoFormatButton_remove_FormatButtonPressedEvent_mF7D22FC6DC84507C3D50BBE2512CB56318C4BB36(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoFormatsExample::PopulateVideoFormatButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatsExample_PopulateVideoFormatButtons_mB7448949BE86B5314C66D7C19C23AB6E4815E805 (VideoFormatsExample_t33090EA342CA6D34540CD00BAB4D81FE5B8BE08B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatsExample_PopulateVideoFormatButtons_mB7448949BE86B5314C66D7C19C23AB6E4815E805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t858BC997372412990A872C348DEFB6AFF271B588  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  V_1;
	memset((&V_1), 0, sizeof(V_1));
	VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_tCF4CFA50F2B730D7C5BBB9EEB7800C3B58380E71 * L_0 = UnityARVideoFormat_SupportedVideoFormats_m4017CB1068607654ADE02166974D4459B29BC9CF(/*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t858BC997372412990A872C348DEFB6AFF271B588  L_1 = List_1_GetEnumerator_mA2E730455476B54363C610767E79578F78E804D0(L_0, /*hidden argument*/List_1_GetEnumerator_mA2E730455476B54363C610767E79578F78E804D0_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003c;
		}

IL_000d:
		{
			UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  L_2 = Enumerator_get_Current_m01F086B16DE444EC3FA5E088F14FAAEF5A96CD79_inline((Enumerator_t858BC997372412990A872C348DEFB6AFF271B588 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m01F086B16DE444EC3FA5E088F14FAAEF5A96CD79_RuntimeMethod_var);
			V_1 = L_2;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_videoFormatButtonPrefab_5();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_formatsParent_4();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_3, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
			NullCheck(L_5);
			VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83 * L_6 = GameObject_GetComponent_TisVideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_m98E45280EB96DF176C3C1E881AD56000C52F92FA(L_5, /*hidden argument*/GameObject_GetComponent_TisVideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83_m98E45280EB96DF176C3C1E881AD56000C52F92FA_RuntimeMethod_var);
			V_2 = L_6;
			VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83 * L_7 = V_2;
			bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003c;
			}
		}

IL_0035:
		{
			VideoFormatButton_t5243961AFDF957A2BC12E0D28B3AFC0BE71D7B83 * L_9 = V_2;
			UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  L_10 = V_1;
			NullCheck(L_9);
			VideoFormatButton_Populate_m440B794C3E2E292E99B5CD614FAE3DE3207D3087(L_9, L_10, /*hidden argument*/NULL);
		}

IL_003c:
		{
			bool L_11 = Enumerator_MoveNext_m3664EDDE4BC67CE2EBC22692863FF89520217A79((Enumerator_t858BC997372412990A872C348DEFB6AFF271B588 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m3664EDDE4BC67CE2EBC22692863FF89520217A79_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_000d;
			}
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m30AEB9995CE97DE0080491C4DBA8176F9DB74CD7((Enumerator_t858BC997372412990A872C348DEFB6AFF271B588 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m30AEB9995CE97DE0080491C4DBA8176F9DB74CD7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0055:
	{
		return;
	}
}
// System.Void VideoFormatsExample::ExampletButtonPressed(UnityEngine.XR.iOS.UnityARVideoFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatsExample_ExampletButtonPressed_m5084D6E2E72CB31C3059069692D8D8B4044F3626 (VideoFormatsExample_t33090EA342CA6D34540CD00BAB4D81FE5B8BE08B * __this, UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  ___videoFormat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatsExample_ExampletButtonPressed_m5084D6E2E72CB31C3059069692D8D8B4044F3626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * V_0 = NULL;
	ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_0 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1BE99E7A463CFC435889D1AFEF569BB4E7F69E67(/*hidden argument*/NULL);
		V_0 = L_0;
		il2cpp_codegen_initobj((&V_1), sizeof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03 ));
		bool L_1 = ARKitWorldTrackingSessionConfiguration_get_IsSupported_m5ECF5336ED042DAF6C96DDAE32848AEC332F46F1((ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03 *)(&V_1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0061;
		}
	}
	{
		(&V_1)->set_planeDetection_1(3);
		(&V_1)->set_alignment_0(0);
		(&V_1)->set_getPointCloudData_2((bool)1);
		(&V_1)->set_enableLightEstimation_3((bool)1);
		(&V_1)->set_enableAutoFocus_4((bool)1);
		UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  L_2 = ___videoFormat0;
		intptr_t L_3 = L_2.get_videoFormatPtr_0();
		(&V_1)->set_videoFormat_7((intptr_t)L_3);
		UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  L_4 = ___videoFormat0;
		int32_t L_5 = L_4.get_framesPerSecond_3();
		Application_set_targetFrameRate_mC20C40E50BAB994B10DDAC0E3C26A851025337BC(L_5, /*hidden argument*/NULL);
		V_2 = 3;
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_6 = V_0;
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_6);
		UnityARSessionNativeInterface_RunWithConfigAndOptions_m205C48D0979F3D1DA96AA557AD29C171AD42FE22(L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0061:
	{
		return;
	}
}
// System.Void VideoFormatsExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoFormatsExample__ctor_m25A1D8809BDDF4CAC49E05DD9DB3A35F55EB6CB6 (VideoFormatsExample_t33090EA342CA6D34540CD00BAB4D81FE5B8BE08B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WorldMapManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldMapManager_Start_m77A456E8F7C00A342EE5E5AB179AC8EA895667E3 (WorldMapManager_t2E882FE3D5782FCC4EEE54E41A3A12CF64DEF7F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_Start_m77A456E8F7C00A342EE5E5AB179AC8EA895667E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * L_0 = (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 *)il2cpp_codegen_object_new(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m6F45CC484332074A55C8E90A002E14881B72A68A(L_0, __this, (intptr_t)((intptr_t)WorldMapManager_OnFrameUpdate_mBDC132061B68AE7315F22B25B0F634487C278CC1_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m220BDF5002999B98BCF2E6696125C105CB798461(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldMapManager::OnFrameUpdate(UnityEngine.XR.iOS.UnityARCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldMapManager_OnFrameUpdate_mBDC132061B68AE7315F22B25B0F634487C278CC1 (WorldMapManager_t2E882FE3D5782FCC4EEE54E41A3A12CF64DEF7F8 * __this, UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___arCamera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_OnFrameUpdate_mBDC132061B68AE7315F22B25B0F634487C278CC1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_0 = ___arCamera0;
		int32_t L_1 = L_0.get_trackingReason_3();
		int32_t L_2 = __this->get_m_LastReason_7();
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0070;
		}
	}
	{
		Application_SetStackTraceLogType_m0E7F71F07C77A92CD88DD0F4A0BFD881AE4F1692(3, 0, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_5 = ___arCamera0;
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_6 = L_5.get_worldTransform_0();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_7 = L_6.get_column3_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = L_7;
		RuntimeObject * L_9 = Box(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_9);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E(_stringLiteral6750FBAC3BDD831087716F82EDECD7C2D74E257B, L_4, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_12 = ___arCamera0;
		int32_t L_13 = L_12.get_trackingState_2();
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(ARTrackingState_t904937D92845C4D5954E4E16182F7BC33F5F744B_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_11;
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_17 = ___arCamera0;
		int32_t L_18 = L_17.get_trackingReason_3();
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(ARTrackingStateReason_t4E957429E93991E43643D4C64AC81F488B71A17C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_20);
		Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E(_stringLiteral909095BEB753BFB98465032D4A0A5A2E3E5D5826, L_16, /*hidden argument*/NULL);
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_21 = ___arCamera0;
		int32_t L_22 = L_21.get_trackingReason_3();
		__this->set_m_LastReason_7(L_22);
	}

IL_0070:
	{
		return;
	}
}
// UnityEngine.XR.iOS.UnityARSessionNativeInterface WorldMapManager::get_session()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * WorldMapManager_get_session_mF41AE66999D28361BF32CEB0984ED966BB6C622D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_get_session_mF41AE66999D28361BF32CEB0984ED966BB6C622D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_0 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1BE99E7A463CFC435889D1AFEF569BB4E7F69E67(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.String WorldMapManager::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WorldMapManager_get_path_m53218CEC7AAF9F8A86F49D46A9499E452252CEDC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_get_path_m53218CEC7AAF9F8A86F49D46A9499E452252CEDC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_1 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_0, _stringLiteral51F0411356A6493C85450718E57493CA2665F92B, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void WorldMapManager::OnWorldMap(UnityEngine.XR.iOS.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldMapManager_OnWorldMap_m91EF97042CE9769FED3515AC548332B898CD648A (WorldMapManager_t2E882FE3D5782FCC4EEE54E41A3A12CF64DEF7F8 * __this, ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * ___worldMap0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_OnWorldMap_m91EF97042CE9769FED3515AC548332B898CD648A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * L_0 = ___worldMap0;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * L_1 = ___worldMap0;
		String_t* L_2 = WorldMapManager_get_path_m53218CEC7AAF9F8A86F49D46A9499E452252CEDC(/*hidden argument*/NULL);
		NullCheck(L_1);
		ARWorldMap_Save_mD039CE26625B86C26856230E3A5238E2AF3DCF5E(L_1, L_2, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		String_t* L_5 = WorldMapManager_get_path_m53218CEC7AAF9F8A86F49D46A9499E452252CEDC(/*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E(_stringLiteral2D8B7735FD16AC780D318FD9F36F6FD17A43910A, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void WorldMapManager::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldMapManager_Save_mF9E1A2A689FB73FC9D2D57C607522D462143145C (WorldMapManager_t2E882FE3D5782FCC4EEE54E41A3A12CF64DEF7F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_Save_mF9E1A2A689FB73FC9D2D57C607522D462143145C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_0 = WorldMapManager_get_session_mF41AE66999D28361BF32CEB0984ED966BB6C622D(/*hidden argument*/NULL);
		Action_1_t3C39529EECE3FAE7BEC843DA89A2FA025136D52B * L_1 = (Action_1_t3C39529EECE3FAE7BEC843DA89A2FA025136D52B *)il2cpp_codegen_object_new(Action_1_t3C39529EECE3FAE7BEC843DA89A2FA025136D52B_il2cpp_TypeInfo_var);
		Action_1__ctor_mF93053DD6A32ACE4C6DC8EDFE0A9FDF28F23312A(L_1, __this, (intptr_t)((intptr_t)WorldMapManager_OnWorldMap_m91EF97042CE9769FED3515AC548332B898CD648A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mF93053DD6A32ACE4C6DC8EDFE0A9FDF28F23312A_RuntimeMethod_var);
		NullCheck(L_0);
		UnityARSessionNativeInterface_GetCurrentWorldMapAsync_mD6591FE76F0BC4AD296966F02071D8E0068EB955(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldMapManager::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldMapManager_Load_m7E083E944C2D6366D4A4EA62240747CEE15FAD02 (WorldMapManager_t2E882FE3D5782FCC4EEE54E41A3A12CF64DEF7F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_Load_m7E083E944C2D6366D4A4EA62240747CEE15FAD02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * V_0 = NULL;
	ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = WorldMapManager_get_path_m53218CEC7AAF9F8A86F49D46A9499E452252CEDC(/*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E(_stringLiteralE3AB937C51614F4C91ACDC23A25C5CDF20CE5A10, L_1, /*hidden argument*/NULL);
		String_t* L_3 = WorldMapManager_get_path_m53218CEC7AAF9F8A86F49D46A9499E452252CEDC(/*hidden argument*/NULL);
		ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * L_4 = ARWorldMap_Load_m4E49380E20AF7CCCC9A9B0CBA303EEA728A67DA3(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * L_5 = V_0;
		if (!L_5)
		{
			goto IL_008b;
		}
	}
	{
		ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * L_6 = V_0;
		__this->set_m_LoadedMap_5(L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * L_9 = V_0;
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ARWorldMap_get_center_m06DC20B2E216CF12BF25D75AB5D9EF98F7502581(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = L_10;
		RuntimeObject * L_12 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_8;
		ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * L_14 = V_0;
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = ARWorldMap_get_extent_mDA5CEA8C24C66341C9F554D366475CE6A6290118(L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = L_15;
		RuntimeObject * L_17 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_17);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E(_stringLiteralD6F5D3097D29CB2DC7AB5DEEB05FA4AB2ACEAB07, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_set_ARSessionShouldAttemptRelocalization_mC7419A0137CADDD2387503BF0701CD5624295CD5_inline((bool)1, /*hidden argument*/NULL);
		UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51 * L_18 = __this->get_m_ARCameraManager_4();
		NullCheck(L_18);
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_19 = UnityARCameraManager_get_sessionConfiguration_m780742DED19901F72EC03D10A4DBCA9B59FC2CE2(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * L_20 = V_0;
		ARKitWorldTrackingSessionConfiguration_set_worldMap_mC86AFE6C3F466CAD7967F6FF36AF1BC588ABDD0F((ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03 *)(&V_1), L_20, /*hidden argument*/NULL);
		V_2 = 3;
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralD9F218E4F5C608DD8F358F6B0507A9E7392929B8, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_21 = WorldMapManager_get_session_mF41AE66999D28361BF32CEB0984ED966BB6C622D(/*hidden argument*/NULL);
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_22 = V_1;
		int32_t L_23 = V_2;
		NullCheck(L_21);
		UnityARSessionNativeInterface_RunWithConfigAndOptions_m205C48D0979F3D1DA96AA557AD29C171AD42FE22(L_21, L_22, L_23, /*hidden argument*/NULL);
	}

IL_008b:
	{
		return;
	}
}
// System.Void WorldMapManager::OnWorldMapSerialized(UnityEngine.XR.iOS.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldMapManager_OnWorldMapSerialized_m7D0B5FDD3E57A6892A7DB973922EFB1D4AC8A831 (WorldMapManager_t2E882FE3D5782FCC4EEE54E41A3A12CF64DEF7F8 * __this, ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * ___worldMap0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_OnWorldMapSerialized_m7D0B5FDD3E57A6892A7DB973922EFB1D4AC8A831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * L_0 = ___worldMap0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * L_1 = ___worldMap0;
		serializableARWorldMap_t7E10ABE00B8AE4798879ED785B257CF12FDFFFCE * L_2 = serializableARWorldMap_op_Implicit_m02A1D4E28143EBCC9FF4D5D768DAA6E60B7B0F0F(L_1, /*hidden argument*/NULL);
		__this->set_serializedWorldMap_6(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral97C60DC984919315FF2E5589CAB4084B9CD7FBED, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void WorldMapManager::SaveSerialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldMapManager_SaveSerialized_m7B229C69A8D75C59C6FB7AF1435DD6C1EA73BDD3 (WorldMapManager_t2E882FE3D5782FCC4EEE54E41A3A12CF64DEF7F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_SaveSerialized_m7B229C69A8D75C59C6FB7AF1435DD6C1EA73BDD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_0 = WorldMapManager_get_session_mF41AE66999D28361BF32CEB0984ED966BB6C622D(/*hidden argument*/NULL);
		Action_1_t3C39529EECE3FAE7BEC843DA89A2FA025136D52B * L_1 = (Action_1_t3C39529EECE3FAE7BEC843DA89A2FA025136D52B *)il2cpp_codegen_object_new(Action_1_t3C39529EECE3FAE7BEC843DA89A2FA025136D52B_il2cpp_TypeInfo_var);
		Action_1__ctor_mF93053DD6A32ACE4C6DC8EDFE0A9FDF28F23312A(L_1, __this, (intptr_t)((intptr_t)WorldMapManager_OnWorldMapSerialized_m7D0B5FDD3E57A6892A7DB973922EFB1D4AC8A831_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mF93053DD6A32ACE4C6DC8EDFE0A9FDF28F23312A_RuntimeMethod_var);
		NullCheck(L_0);
		UnityARSessionNativeInterface_GetCurrentWorldMapAsync_mD6591FE76F0BC4AD296966F02071D8E0068EB955(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldMapManager::LoadSerialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldMapManager_LoadSerialized_m3DDB92B4EF4EADD8D0F9E7C93D7033F08723ED18 (WorldMapManager_t2E882FE3D5782FCC4EEE54E41A3A12CF64DEF7F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldMapManager_LoadSerialized_m3DDB92B4EF4EADD8D0F9E7C93D7033F08723ED18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * V_0 = NULL;
	ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral23AC544F0D26B2181F8595700714B2376AB76C14, /*hidden argument*/NULL);
		serializableARWorldMap_t7E10ABE00B8AE4798879ED785B257CF12FDFFFCE * L_0 = __this->get_serializedWorldMap_6();
		ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * L_1 = serializableARWorldMap_op_Implicit_mAC63AA57DF39039FC9A8C53F9933A1363C2541CC(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * L_2 = V_0;
		if (!L_2)
		{
			goto IL_007e;
		}
	}
	{
		ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * L_3 = V_0;
		__this->set_m_LoadedMap_5(L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * L_6 = V_0;
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ARWorldMap_get_center_m06DC20B2E216CF12BF25D75AB5D9EF98F7502581(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = L_7;
		RuntimeObject * L_9 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_5;
		ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * L_11 = V_0;
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = ARWorldMap_get_extent_mDA5CEA8C24C66341C9F554D366475CE6A6290118(L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = L_12;
		RuntimeObject * L_14 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_14);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E(_stringLiteralD6F5D3097D29CB2DC7AB5DEEB05FA4AB2ACEAB07, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_set_ARSessionShouldAttemptRelocalization_mC7419A0137CADDD2387503BF0701CD5624295CD5_inline((bool)1, /*hidden argument*/NULL);
		UnityARCameraManager_t96535CA92E04F266EF339990CAD77E0D6E93EC51 * L_15 = __this->get_m_ARCameraManager_4();
		NullCheck(L_15);
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_16 = UnityARCameraManager_get_sessionConfiguration_m780742DED19901F72EC03D10A4DBCA9B59FC2CE2(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		ARWorldMap_tA5B42053DEC105A7BDEB0AB2E6DB3200BC2C397A * L_17 = V_0;
		ARKitWorldTrackingSessionConfiguration_set_worldMap_mC86AFE6C3F466CAD7967F6FF36AF1BC588ABDD0F((ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03 *)(&V_1), L_17, /*hidden argument*/NULL);
		V_2 = 3;
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralD9F218E4F5C608DD8F358F6B0507A9E7392929B8, /*hidden argument*/NULL);
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_18 = WorldMapManager_get_session_mF41AE66999D28361BF32CEB0984ED966BB6C622D(/*hidden argument*/NULL);
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		UnityARSessionNativeInterface_RunWithConfigAndOptions_m205C48D0979F3D1DA96AA557AD29C171AD42FE22(L_18, L_19, L_20, /*hidden argument*/NULL);
	}

IL_007e:
	{
		return;
	}
}
// System.Void WorldMapManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldMapManager__ctor_m90D8FEAF102C8586AB0B541D3273A2FD516AFF95 (WorldMapManager_t2E882FE3D5782FCC4EEE54E41A3A12CF64DEF7F8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_set_ARSessionShouldAttemptRelocalization_mC7419A0137CADDD2387503BF0701CD5624295CD5_inline (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARSessionNativeInterface_set_ARSessionShouldAttemptRelocalization_mC7419A0137CADDD2387503BF0701CD5624295CD5AssemblyU2DCSharp2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		((UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields*)il2cpp_codegen_static_fields_for(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var))->set_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_23(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  Enumerator_get_Current_m01F086B16DE444EC3FA5E088F14FAAEF5A96CD79_gshared_inline (Enumerator_t858BC997372412990A872C348DEFB6AFF271B588 * __this, const RuntimeMethod* method)
{
	{
		UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  L_0 = (UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95 )__this->get_current_3();
		return L_0;
	}
}
