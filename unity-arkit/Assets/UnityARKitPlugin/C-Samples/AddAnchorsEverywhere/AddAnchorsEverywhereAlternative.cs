 using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.UI;


/* a slightly hacky fix to the issue of ar remote being insufficient and not tracking the anchorIDs. 
instead of relying upon those to manage our existing gameobjects we just store references to those objects directly. */
public class AddAnchorsEverywhereAlternative : MonoBehaviour {


	public GameObject prefabObject;
    public int distanceFromCamera = 1;
    public Text textIndicator;
    public float timeUntilRemove = 10.0f;

    private ArrayList clones;
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
		clones = new ArrayList();
        originalTimeUntilRemove = timeUntilRemove;
	}
	
    void AddObject()
    {
        GameObject clone = Instantiate(prefabObject, Camera.main.transform.position + (this.distanceFromCamera * Camera.main.transform.forward), Quaternion.identity);
        clones.Add(clone);

        //UnityARUserAnchorComponent component = clone.GetComponent<UnityARUserAnchorComponent>();
        timeUntilRemove = originalTimeUntilRemove;
    }

	// Update is called once per frame
	void UpdateState () 
    {
		// just remove anchors afte a certain amount of time for example's sake.
		timeUntilRemove -= Time.deltaTime;
        textIndicator.text = "Time until oldest anchor removed: " + (int)timeUntilRemove + "s";
		if (timeUntilRemove <= 0.0f && clones.Count > 0)
		{   
            GameObject clone = (GameObject)clones[0];
            clones.RemoveAt(0);
            UnityARSessionNativeInterface.GetARSessionNativeInterface().RemoveUserAnchor(clone.GetComponent<UnityARUserAnchorComponent>().AnchorId);
            if(clone != null){
                Debug.Log("still exists, so we delete it ourselves " + clones.Count);
                Destroy(clone);
            }
            timeUntilRemove = originalTimeUntilRemove;
		}
	}

    public void ExampleAddAnchor(ARUserAnchor anchor)
	{
        Debug.Log("Our anchor was added!");
	}

	public void AnchorRemoved(ARUserAnchor anchor)
	{
        Debug.Log("AnchorRemovedExample: " + anchor.identifier);
	}
}
