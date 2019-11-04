using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.XR.iOS;

/* The prefab in the scene changes size, color and rotation based on the distance between it and the camera. */
public class ChangeBasedOnDistance : MonoBehaviour
{

    public GameObject prefabToChange;
    private Transform mainCamera;
    private Quaternion originalRotation;
    private Quaternion maxRotation;

    // Start is called before the first frame update
    void Start()
    {
        mainCamera = Camera.main.gameObject.transform;
        originalRotation = prefabToChange.transform.rotation; //we save the original rotation to interpolate rotation correctly
        maxRotation = Quaternion.identity; //make new rotation object
        maxRotation.eulerAngles = new Vector3(180f, 0f, 0f); //set new rotation object's rotation to 180
    }

    // Update is called once per frame
    void Update()
    {
        //get distance between main camera and prefab
        float dist = Vector3.Distance(mainCamera.position, prefabToChange.transform.position);
        //Debug.Log("This is the distance : " + dist);

        //below is code to change the color of the cube from red to blue
        float newRedValue = map(dist, 0.5f, 0.1f, 0f, 1f); //note that the "start" of the original values is larger than the "stop" - this inverts the lerping
        float newBlueValue = map(dist, 0.1f, 0.5f, 0f, 1f);
        prefabToChange.GetComponent<Renderer>().material.color = new Color(newRedValue, 0f, newBlueValue);

        //below is code to change the rotation of the cube based on distance; it is commented out so the demo scene will be more clear, but try uncommenting it!
        // float newRotation = map(dist, 0.5f, 0.1f, 0f, 1f);
        // Quaternion newQuat = Quaternion.Slerp(originalRotation, maxRotation, newRotation);
        // prefabToChange.transform.rotation = newQuat;

        //below is the code to change the size of the cube 
        float newScale = map(dist, 0.5f, 0.05f, 0.05f, 0.5f);
        prefabToChange.transform.localScale = new Vector3(prefabToChange.transform.localScale.x, newScale, prefabToChange.transform.localScale.z);
    }

    // simple value mapping function 
    private float map(float value, float start1, float stop1, float start2, float stop2)
    {
        //map the value
        float res = start2 + (stop2 - start2) * ((value - start1) / (stop1 - start1));

        //below we clamp the return value to be within the new start and stop
        //start2 isn't necessarily less than stop2 
        float new_min = Mathf.Min(start2, stop2);
        float new_max = Mathf.Max(start2, stop2);
        res = Mathf.Max(new_min, res);
        res = Mathf.Min(new_max, res);
        return res;
    }
}
