using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class SetImageAnchor : MonoBehaviour
{

    [SerializeField]
    private ARReferenceImage referenceImage; //there is one of these scripts for each referenceImage

    [SerializeField]
    private GameObject prefabToGenerate; //the item to clone for this image

    private GameObject imageAnchorGO;

    // Use this for initialization
    void Start()
    {
        //add event handlers for when image anchors are detected
        UnityARSessionNativeInterface.ARImageAnchorAddedEvent += AddImageAnchor;
        UnityARSessionNativeInterface.ARImageAnchorUpdatedEvent += UpdateImageAnchor;
        UnityARSessionNativeInterface.ARImageAnchorRemovedEvent += RemoveImageAnchor;
    }

    void AddImageAnchor(ARImageAnchor arImageAnchor)
    {
        Debug.LogFormat("image anchor added[{0}] : tracked => {1}", arImageAnchor.identifier, arImageAnchor.isTracked);
        //check if the image anchor detected is the same one that we are checking for
        if (arImageAnchor.referenceImageName == referenceImage.imageName)
        {
            //if yes, we get the position and rotation of the anchor
            Vector3 position = UnityARMatrixOps.GetPosition(arImageAnchor.transform);
            Quaternion rotation = UnityARMatrixOps.GetRotation(arImageAnchor.transform);

            //then we clone the prefab using the position and rotation, and store the clone in imageAnchorGO
            imageAnchorGO = Instantiate<GameObject>(prefabToGenerate, position, rotation);
        }
    }

    void UpdateImageAnchor(ARImageAnchor arImageAnchor)
    {
        Debug.LogFormat("image anchor updated[{0}] : tracked => {1}", arImageAnchor.identifier, arImageAnchor.isTracked);
        if (arImageAnchor.referenceImageName == referenceImage.imageName)
        {
            if (arImageAnchor.isTracked)
            {
                if (!imageAnchorGO.activeSelf)
                {
                    imageAnchorGO.SetActive(true);
                }
                imageAnchorGO.transform.position = UnityARMatrixOps.GetPosition(arImageAnchor.transform);
                imageAnchorGO.transform.rotation = UnityARMatrixOps.GetRotation(arImageAnchor.transform);
            }
            else if (imageAnchorGO.activeSelf)
            {
                imageAnchorGO.SetActive(false);
            }
        }
    }

    void RemoveImageAnchor(ARImageAnchor arImageAnchor)
    {
        Debug.LogFormat("image anchor removed[{0}] : tracked => {1}", arImageAnchor.identifier, arImageAnchor.isTracked);
        if (imageAnchorGO)
        {
            GameObject.Destroy(imageAnchorGO);
        }
    }

    void OnDestroy()
    {
        UnityARSessionNativeInterface.ARImageAnchorAddedEvent -= AddImageAnchor;
        UnityARSessionNativeInterface.ARImageAnchorUpdatedEvent -= UpdateImageAnchor;
        UnityARSessionNativeInterface.ARImageAnchorRemovedEvent -= RemoveImageAnchor;
    }

    // Update is called once per frame
    void Update()
    {

    }
}
