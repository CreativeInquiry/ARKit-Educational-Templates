using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.UI;

/* Checks the value of the feature we are watching; if it is past a threshold, it makes the red oval image visible. */
public class FeatureDetector : MonoBehaviour
{
    public GameObject indictator; //the gameobject that flashes on/off 
    bool shapeEnabled = false;
    Dictionary<string, float> currentBlendShapes; //dictionary of blendshapes

    // Use this for initialization
    void Start()
    {
        /* This code subscribes our methods FaceAdded, FaceUpdated, & FaceRemoved to 
		* ARKit's Events, meaning our functions will be called when these events occur. */
        UnityARSessionNativeInterface.ARFaceAnchorAddedEvent += FaceAdded;
        UnityARSessionNativeInterface.ARFaceAnchorUpdatedEvent += FaceUpdated;
        UnityARSessionNativeInterface.ARFaceAnchorRemovedEvent += FaceRemoved;
    }

    void OnGUI()
    {
        bool enableFeature = false;

        if (shapeEnabled)
        {
            //Try replacing TongueOut with another Blendshape property
            //https://developer.apple.com/documentation/arkit/arfaceanchor/blendshapelocation/
            //For example, MouthPucker, CheekPuff
            if (currentBlendShapes.ContainsKey(ARBlendShapeLocation.TongueOut))
            {
                enableFeature = (currentBlendShapes[ARBlendShapeLocation.TongueOut] > 0.3f);
            }
        }
        indictator.SetActive(enableFeature);
    }

    void FaceAdded(ARFaceAnchor anchorData)
    {
        shapeEnabled = true;
        currentBlendShapes = anchorData.blendShapes;
    }

    void FaceUpdated(ARFaceAnchor anchorData)
    {
        currentBlendShapes = anchorData.blendShapes;
    }

    void FaceRemoved(ARFaceAnchor anchorData)
    {
        shapeEnabled = false;
    }
    // Update is called once per frame
    void Update()
    {

    }
}
