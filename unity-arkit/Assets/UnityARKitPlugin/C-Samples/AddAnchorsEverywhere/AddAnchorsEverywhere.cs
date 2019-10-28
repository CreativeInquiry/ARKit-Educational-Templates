using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.UI;


public class AddAnchorsEverywhere : MonoBehaviour {


	public GameObject prefabObject;
    public int distanceFromCamera = 1;
    public Text textIndicator;
    public float timeUntilRemove = 10.0f;

    private HashSet<string> clones;
    private float originalTimeUntilRemove;

	// Update is called once per frame

    void Update () 
    {
        #if UNITY_EDITOR 
            if (Input.GetMouseButtonDown (0)) 
        #else
            if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        #endif
		{
            AddObject();
        }
        UpdateState();
    }

    void  Awake() 
    {
		UnityARSessionNativeInterface.ARUserAnchorAddedEvent += ExampleAddAnchor;
		UnityARSessionNativeInterface.ARUserAnchorRemovedEvent += AnchorRemoved;
		clones = new HashSet<string>();
        originalTimeUntilRemove = timeUntilRemove;
	}
	
    void AddObject()
    {
        GameObject clone = Instantiate(prefabObject, Camera.main.transform.position + (this.distanceFromCamera * Camera.main.transform.forward), Quaternion.identity);
        UnityARUserAnchorComponent component = clone.GetComponent<UnityARUserAnchorComponent>();
        Debug.Log("adding anchor with id: " + component.AnchorId + "-----");
        clones.Add(component.AnchorId);
        timeUntilRemove = originalTimeUntilRemove;
    }

	// Update is called once per frame
	void UpdateState () 
    {
		// just remove anchors afte a certain amount of time for example's sake.
		timeUntilRemove -= Time.deltaTime;
        textIndicator.text = "Time until all anchors removed: " + (int)timeUntilRemove + "s";
		if (timeUntilRemove <= 0.0f)
		{   
            //Debug.Log("contents of clone: " + clones. );
            //for some unfortunate reason, anchorid is only non-null when it's actually running on the device and not in remote
            //if this is an issue, see AddAnchorsEverywhereAlternative.cs, which stores references to the gameobjects directly, although this method seems to be preferred by the Unity Devs.
            foreach (string id in clones)
            {
                Debug.Log("Removing anchor with id: " + id);
                UnityARSessionNativeInterface.GetARSessionNativeInterface().RemoveUserAnchor(id);
                break;
            }
            timeUntilRemove = originalTimeUntilRemove;
		}
	}

    public void ExampleAddAnchor(ARUserAnchor anchor)
	{
		if (clones.Contains(anchor.identifier))
		{
            Debug.Log("Our anchor was added!");
		}
	}

	public void AnchorRemoved(ARUserAnchor anchor)
	{
		if (clones.Contains(anchor.identifier))
		{
            clones.Remove(anchor.identifier);
            Debug.Log("AnchorRemovedExample: " + anchor.identifier);
		}
	}
}
