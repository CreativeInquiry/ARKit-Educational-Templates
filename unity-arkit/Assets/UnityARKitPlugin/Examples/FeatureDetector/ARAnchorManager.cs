using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

/* Gets the anchorData's transform value (representing the center of the face), and places an anchor there.*/
public class ARAnchorManager : MonoBehaviour {

    [SerializeField]
    private GameObject anchorPrefab;
    private GameObject anchorGo;
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

            /* This code subscribes our methods FaceAdded, FaceUpdated, & FaceRemoved to 
             * ARKit's Events, meaning our functions will be called when these events occur. */
            UnityARSessionNativeInterface.ARFaceAnchorAddedEvent += FaceAdded;
            UnityARSessionNativeInterface.ARFaceAnchorUpdatedEvent += FaceUpdated;
            UnityARSessionNativeInterface.ARFaceAnchorRemovedEvent += FaceRemoved;
        }

        anchorGo = GameObject.Instantiate(anchorPrefab);
    }

    void FaceAdded(ARFaceAnchor anchorData) {
        /* anchorData contains the transform position for the center of the face. We set anchorGo's transform to be the same.
         * Then, we activate the anchor gameobject so it is visible. */
        anchorGo.transform.position = UnityARMatrixOps.GetPosition(anchorData.transform);
        anchorGo.transform.rotation = UnityARMatrixOps.GetRotation(anchorData.transform);
        anchorGo.SetActive(true);
    }

    void FaceUpdated(ARFaceAnchor anchorData) {
        if (anchorGo.activeSelf != anchorData.isTracked) {
            anchorGo.SetActive(anchorData.isTracked);
        }

        if (anchorData.isTracked) {
            /* anchorData contains the transform position for the center of the face. We set anchorGo's transform to be the same. */
            anchorGo.transform.position = UnityARMatrixOps.GetPosition(anchorData.transform);
            anchorGo.transform.rotation = UnityARMatrixOps.GetRotation(anchorData.transform);
        }
    }

    void FaceRemoved(ARFaceAnchor anchorData) {
        anchorGo.SetActive(false);
    }

    // Update is called once per frame
    void Update() {
    }

    void OnDestroy() {
    }
}
