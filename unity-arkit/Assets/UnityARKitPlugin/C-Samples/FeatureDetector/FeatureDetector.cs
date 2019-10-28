using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.UI;

public class FeatureDetector : MonoBehaviour 
{
	public GameObject indictator;
	bool shapeEnabled = false;
	Dictionary<string, float> currentBlendShapes;

	// Use this for initialization
	void Start () 
	{
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
			if (currentBlendShapes.ContainsKey (ARBlendShapeLocation.NoseSneerLeft)) 
			{
				enableFeature = (currentBlendShapes [ARBlendShapeLocation.NoseSneerLeft] > 0.3f);

			}

		}

		indictator.SetActive (enableFeature);
	}

	void FaceAdded (ARFaceAnchor anchorData)
	{
		shapeEnabled = true;
		currentBlendShapes = anchorData.blendShapes;
	}

	void FaceUpdated (ARFaceAnchor anchorData)
	{
		currentBlendShapes = anchorData.blendShapes;
	}

	void FaceRemoved (ARFaceAnchor anchorData)
	{
		shapeEnabled = false;
	}
	// Update is called once per frame
	void Update () {
		
	}
}
