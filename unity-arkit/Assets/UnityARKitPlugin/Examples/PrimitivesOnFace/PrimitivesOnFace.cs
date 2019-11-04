using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class PrimitivesOnFace : MonoBehaviour
{

    [SerializeField]
    private GameObject faceCenterPrefab;

    [SerializeField]
    private GameObject eyePrefab;

    private GameObject leftEyeGo;
    private GameObject rightEyeGo;
    private GameObject faceCenterGo;

    private UnityARSessionNativeInterface m_session;

    // Use this for initialization
    void Start()
    {
        m_session = UnityARSessionNativeInterface.GetARSessionNativeInterface();

        Application.targetFrameRate = 60;
        ARKitFaceTrackingConfiguration config = new ARKitFaceTrackingConfiguration();
        config.alignment = UnityARAlignment.UnityARAlignmentGravity;
        config.enableLightEstimation = true;

        if (config.IsSupported)
        {
            m_session.RunWithConfig(config);

            UnityARSessionNativeInterface.ARFaceAnchorAddedEvent += FaceAdded;
            UnityARSessionNativeInterface.ARFaceAnchorUpdatedEvent += FaceUpdated;
            UnityARSessionNativeInterface.ARFaceAnchorRemovedEvent += FaceRemoved;
        }

        leftEyeGo = GameObject.Instantiate(eyePrefab);
        rightEyeGo = GameObject.Instantiate(eyePrefab);
        faceCenterGo = GameObject.Instantiate(faceCenterPrefab);

        leftEyeGo.SetActive(false);
        rightEyeGo.SetActive(false);
        faceCenterGo.SetActive(false);
    }

    void FaceAdded(ARFaceAnchor anchorData)
    {
        leftEyeGo.transform.position = anchorData.leftEyePose.position;
        leftEyeGo.transform.rotation = anchorData.leftEyePose.rotation;

        rightEyeGo.transform.position = anchorData.rightEyePose.position;
        rightEyeGo.transform.rotation = anchorData.rightEyePose.rotation;

        leftEyeGo.SetActive(true);
        rightEyeGo.SetActive(true);

        faceCenterGo.transform.position = UnityARMatrixOps.GetPosition(anchorData.transform);
        faceCenterGo.transform.rotation = UnityARMatrixOps.GetRotation(anchorData.transform);
        faceCenterGo.SetActive(true);
    }

    void FaceUpdated(ARFaceAnchor anchorData)
    {
        if (faceCenterGo.activeSelf != anchorData.isTracked)
        {
            faceCenterGo.SetActive(anchorData.isTracked);
        }

        if (anchorData.isTracked)
        {
            faceCenterGo.transform.position = UnityARMatrixOps.GetPosition(anchorData.transform);
            faceCenterGo.transform.rotation = UnityARMatrixOps.GetRotation(anchorData.transform);

            //eyes
            leftEyeGo.transform.position = anchorData.leftEyePose.position;
            leftEyeGo.transform.rotation = anchorData.leftEyePose.rotation;
            rightEyeGo.transform.position = anchorData.rightEyePose.position;
            rightEyeGo.transform.rotation = anchorData.rightEyePose.rotation;
        }
    }

    void FaceRemoved(ARFaceAnchor anchorData)
    {
        faceCenterGo.SetActive(false);
        leftEyeGo.SetActive(false);
        rightEyeGo.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnDestroy()
    {

    }
}
