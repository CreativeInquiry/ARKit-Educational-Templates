using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

/* Takes in information about the ARFaceGeometry, and then passes it to a Mesh Filter, which passes it to a Mesh Renderer to be rendered. 
* Also grabs vertex 9, which is a point on the nose out of the 1220 vertices given for the face, and places
* a red sphere at the position of vertex 9. */
public class MeshManager : MonoBehaviour
{

    [SerializeField]
    private MeshFilter meshFilter; //we pass vertex values to the mesh field of this

    [SerializeField]
    private Transform noseObject; //the nose object, which we move to the vertex 9 position because vertex 9 is on the nose.

    private UnityARSessionNativeInterface m_session;
    private Mesh faceMesh;

    // Use this for initialization
    void Start()
    {
        //set up Facetracking configurations	
        m_session = UnityARSessionNativeInterface.GetARSessionNativeInterface();

        Application.targetFrameRate = 60;
        ARKitFaceTrackingConfiguration config = new ARKitFaceTrackingConfiguration();
        config.alignment = UnityARAlignment.UnityARAlignmentGravity;
        config.enableLightEstimation = true;

        if (config.IsSupported && meshFilter != null)
        {

            m_session.RunWithConfig(config);
            /* This code subscribes our methods FaceAdded, FaceUpdated, & FaceRemoved to 
     		* ARKit's Events, meaning our functions will be called when these events occur. */
            UnityARSessionNativeInterface.ARFaceAnchorAddedEvent += FaceAdded;
            UnityARSessionNativeInterface.ARFaceAnchorUpdatedEvent += FaceUpdated;
            UnityARSessionNativeInterface.ARFaceAnchorRemovedEvent += FaceRemoved;

        }
    }

    void FaceAdded(ARFaceAnchor anchorData)
    {
        /* gameObject is the object that this script is attached to
		* this gameobject also contains the mesh renderer, so when we set the local position of the object,
		* the mesh is moved accordingly as well 
		* thus, changing the localPosition to anchorData.transform, which is the center of the face, 
		* moves the mesh to be centered where the face is*/
        gameObject.transform.localPosition = UnityARMatrixOps.GetPosition(anchorData.transform);
        gameObject.transform.localRotation = UnityARMatrixOps.GetRotation(anchorData.transform);

        //make new mesh from anchor geometry
        faceMesh = new Mesh();
        faceMesh.vertices = anchorData.faceGeometry.vertices;
        faceMesh.uv = anchorData.faceGeometry.textureCoordinates;
        faceMesh.triangles = anchorData.faceGeometry.triangleIndices;

        // Assign the mesh object and update it.
        faceMesh.RecalculateBounds();
        faceMesh.RecalculateNormals();
        meshFilter.mesh = faceMesh;

        // set nose position to the 9th vertex position, which lies on the nose
        // note that nose needs to be a child of the gameobject in order for the transform to work properly 
        // because vertex positions are relative to the center of the face
        noseObject.localPosition = anchorData.faceGeometry.vertices[9];
    }

    void FaceUpdated(ARFaceAnchor anchorData)
    {
        if (faceMesh != null)
        {
            /* gameObject is the object that this script is attached to
			* this gameobject also contains the mesh renderer, so when we set the local position of the object,
			* the mesh is moved accordingly as well 
			* thus, changing the localPosition to anchorData.transform, which is the center of the face, 
			* moves the mesh to be centered where the face is*/
            gameObject.transform.localPosition = UnityARMatrixOps.GetPosition(anchorData.transform);
            gameObject.transform.localRotation = UnityARMatrixOps.GetRotation(anchorData.transform);

            //make new mesh from anchor geometry
            faceMesh.vertices = anchorData.faceGeometry.vertices;
            faceMesh.uv = anchorData.faceGeometry.textureCoordinates;
            faceMesh.triangles = anchorData.faceGeometry.triangleIndices;

            // Assign the mesh object and update it.
            faceMesh.RecalculateBounds();
            faceMesh.RecalculateNormals();

            // set nose position to the 9th vertex position, which lies on the nose
            // note that nose needs to be a child of the gameobject in order for the transform to work properly 
            // because vertex positions are relative to the center of the face
            noseObject.localPosition = anchorData.faceGeometry.vertices[9];
        }
    }

    void FaceRemoved(ARFaceAnchor anchorData)
    {
        meshFilter.mesh = null;
        faceMesh = null;
    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnDestroy()
    {

    }
}
