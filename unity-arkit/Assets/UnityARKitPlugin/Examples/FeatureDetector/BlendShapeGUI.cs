using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class BlendShapeGUI : MonoBehaviour
{

    bool shapeEnabled = false;
    Dictionary<string, float> currentBlendShapes; //dictionary object of string - coefficient pairs 

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
        if (shapeEnabled)
        {
            //formats and then places the blendshape values into the top left UI box
            string blendshapes = "";
            string shapeNames = "";
            string valueNames = "";
            foreach (KeyValuePair<string, float> kvp in currentBlendShapes)
            {
                blendshapes += " [";
                blendshapes += kvp.Key.ToString();
                blendshapes += ":";
                blendshapes += kvp.Value.ToString();
                blendshapes += "]\n";
                shapeNames += "\"";
                shapeNames += kvp.Key.ToString();
                shapeNames += "\",\n";
                valueNames += kvp.Value.ToString();
                valueNames += "\n";
            }

            GUILayout.BeginHorizontal(GUILayout.ExpandHeight(true));
            GUILayout.Box(blendshapes);
            GUILayout.EndHorizontal();

            Debug.Log(shapeNames);
            Debug.Log(valueNames);
        }
    }

    void FaceAdded(ARFaceAnchor anchorData)
    {
        shapeEnabled = true;
        currentBlendShapes = anchorData.blendShapes;
    }

    void FaceUpdated(ARFaceAnchor anchorData)
    {
        //on update, we update the old dictionary of values with the current one
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
