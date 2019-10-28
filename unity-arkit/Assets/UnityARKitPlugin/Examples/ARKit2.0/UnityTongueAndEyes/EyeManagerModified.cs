using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class EyeManagerModified : MonoBehaviour 
{
	[SerializeField]
	private GameObject eyePrefab;

    [SerializeField]
	private GameObject number;

	private UnityARSessionNativeInterface m_session;
	private GameObject leftEyeGo;
	private GameObject rightEyeGo;

    public int maxVertices = 50;
    private int vertexIncrement = 1;
    private int vertexCount = 0;

    private List<Transform> dots;

	// Use this for initialization
	void Start () {
		m_session = UnityARSessionNativeInterface.GetARSessionNativeInterface();

        dots = new List<Transform>();

		Application.targetFrameRate = 60;
		ARKitFaceTrackingConfiguration config = new ARKitFaceTrackingConfiguration();
		config.alignment = UnityARAlignment.UnityARAlignmentGravity;
		config.enableLightEstimation = true;

		if (config.IsSupported )
		{

			m_session.RunWithConfig (config);

			UnityARSessionNativeInterface.ARFaceAnchorAddedEvent += FaceAdded;
			UnityARSessionNativeInterface.ARFaceAnchorUpdatedEvent += FaceUpdated;
			UnityARSessionNativeInterface.ARFaceAnchorRemovedEvent += FaceRemoved;

		}

		leftEyeGo = GameObject.Instantiate (eyePrefab);
		rightEyeGo = GameObject.Instantiate (eyePrefab);

		leftEyeGo.SetActive (false);
		rightEyeGo.SetActive (false);

        for(int i = 0; i < maxVertices + 1; i++){
            GameObject newNumber = GameObject.Instantiate(number);
            //Debug.Log(newNumber + ", " + newNumber.transform);
            dots.Add(newNumber.transform);
        }

	}

	void FaceAdded (ARFaceAnchor anchorData)
	{
        //I don't think this data is passed through remote, unfortunately.
		leftEyeGo.transform.position = anchorData.leftEyePose.position;
		leftEyeGo.transform.rotation = anchorData.leftEyePose.rotation;

		rightEyeGo.transform.position = anchorData.rightEyePose.position;
		rightEyeGo.transform.rotation = anchorData.rightEyePose.rotation;

		leftEyeGo.SetActive (true);
		rightEyeGo.SetActive (true);

        vertexCount = anchorData.faceGeometry.vertexCount;
        vertexIncrement = vertexCount / maxVertices;

	}

	void FaceUpdated (ARFaceAnchor anchorData)
	{
		leftEyeGo.transform.position = anchorData.leftEyePose.position;
		leftEyeGo.transform.rotation = anchorData.leftEyePose.rotation;

		rightEyeGo.transform.position = anchorData.rightEyePose.position;
		rightEyeGo.transform.rotation = anchorData.rightEyePose.rotation;
        
        Vector3 newPos = UnityARMatrixOps.GetPosition (anchorData.transform);

        Debug.Log(anchorData.faceGeometry.vertexCount + "___________");

        for(int i = 0; i < vertexCount; i += vertexIncrement){
            Debug.Log(i/vertexIncrement + ", " + dots.Count);
            dots[i/vertexIncrement].position = anchorData.faceGeometry.vertices[i] + newPos;
        }
    
	}

	void FaceRemoved (ARFaceAnchor anchorData)
	{
		leftEyeGo.SetActive (false);
		rightEyeGo.SetActive (false);

	}

	// Update is called once per frame
	void Update () {
		
	}
}
