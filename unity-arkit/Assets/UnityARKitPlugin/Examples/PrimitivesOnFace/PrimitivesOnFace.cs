using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class PrimitivesOnFace : MonoBehaviour {

    [SerializeField]
    private GameObject faceCenterPrefab;

    [SerializeField]
    private GameObject eyePrefab;
    private GameObject leftEyeGo;
    private GameObject rightEyeGo;
    private GameObject faceCenterGo;

    private UnityARSessionNativeInterface m_session;

    // Use this for initialization
    void Start() {
        m_session = UnityARSessionNativeInterface.GetARSessionNativeInterface();

        Application.targetFrameRate = 60;
        ARKitFaceTrackingConfiguration config = new ARKitFaceTrackingConfiguration();
        config.alignment = UnityARAlignment.UnityARAlignmentGravity;
        config.enableLightEstimation = true;

        if (config.IsSupported) {
            m_session.RunWithConfig(config);
            UnityARSessionNativeInterface.ARFaceAnchorAddedEvent   += FaceAdded;
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

    void FaceAdded(ARFaceAnchor anchorData) {
        // Set the left eye gameobject transform position to the current position
        leftEyeGo.transform.position = anchorData.leftEyePose.position;
        leftEyeGo.transform.rotation = anchorData.leftEyePose.rotation;

        // Set the right eye gameobject transform position to the current position
        rightEyeGo.transform.position = anchorData.rightEyePose.position;
        rightEyeGo.transform.rotation = anchorData.rightEyePose.rotation;

        // Activate them so you can see them
        leftEyeGo.SetActive(true);
        rightEyeGo.SetActive(true);

        // Set the center face gameobject to the current position
        faceCenterGo.transform.position = UnityARMatrixOps.GetPosition(anchorData.transform);
        faceCenterGo.transform.rotation = UnityARMatrixOps.GetRotation(anchorData.transform);
        
        // Activate so you can see it
        faceCenterGo.SetActive(true);
    }

    void FaceUpdated(ARFaceAnchor anchorData) {
        if (faceCenterGo.activeSelf != anchorData.isTracked) {
            faceCenterGo.SetActive(anchorData.isTracked);
        }

        if (anchorData.isTracked) {
            // Set the center face gameobject to the current position
            faceCenterGo.transform.position = UnityARMatrixOps.GetPosition(anchorData.transform);
            faceCenterGo.transform.rotation = UnityARMatrixOps.GetRotation(anchorData.transform);

            // Set the eye gameobjects transform positions to the current positions
            leftEyeGo.transform.position = anchorData.leftEyePose.position;
            leftEyeGo.transform.rotation = anchorData.leftEyePose.rotation;
            rightEyeGo.transform.position = anchorData.rightEyePose.position;
            rightEyeGo.transform.rotation = anchorData.rightEyePose.rotation;
        }
    }

    void FaceRemoved(ARFaceAnchor anchorData) {
        // Deactivate when the face anchor is gone
        faceCenterGo.SetActive(false);
        leftEyeGo.SetActive(false);
        rightEyeGo.SetActive(false);
    }

    // Update is called once per frame
    void Update() {
    }

    void OnDestroy() {
    }
}
