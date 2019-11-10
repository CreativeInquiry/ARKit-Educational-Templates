using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.UI;

/* A modification to the original ARKit demo of adding/removing objects. 
 * Circumvents the AR Remote issue of not tracking the anchorIDs by tracking actual GameObjecs rather than their anchorID.
 *
 * See original Add/Remove demo code at this link:
 * https://bitbucket.org/Unity-Technologies/unity-arkit-plugin/src/default/Assets/UnityARKitPlugin/Examples/AddRemoveAnchorExample/UnityARUserAnchorExample.cs 
 */
public class AddAnchorsEverywhere : MonoBehaviour {

    public GameObject prefabObject;    // The game object being cloned upon tap
    public int distanceFromCamera = 1; // How far away the object is placed when cloned
    public Text textIndicator;         // Used to indicate how many seconds left until deletion
    public float timeUntilRemove = 10.0f; // Number of seconds of inactivity until deletion

    private ArrayList clones; //list to track the gameobjects that we've added to the scene
    private float originalTimeUntilRemove; //a number used to reset the time

    /* Update is called once per frame
     * If the user is tapping, we call AddObject()
     * Then, we call UpdateState to update our counter for deleting objects */
    void Update() {
        /* the below code checks, at compile time, if we are in the unity editor,
         * and if we are, we check for the mouse down button
         * otherwise, we are looking for finger touches instead, and then it compiles the code accordingly 
         * Google C# Preprocessor directives for more info if interested */
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

    /* Awake is called once upon the beginning
     * This code subscribes our methods ExampleAddAnchor and AnchorRemoved to 
     * ARKit's Events, meaning our functions will be called when these events occur.
     * It also initializes the clones list and sets the value of originalTimeUntilRemove */
    void Awake() {
        UnityARSessionNativeInterface.ARUserAnchorAddedEvent += ExampleAddAnchor;
        UnityARSessionNativeInterface.ARUserAnchorRemovedEvent += AnchorRemoved;
        clones = new ArrayList();
        originalTimeUntilRemove = timeUntilRemove;
    }

    /* Called in the Update functino
     * Clones the prefabObject using Instantiate
     * The new object position is projceted out forwards by distanceFromCamera amount
     * It also initializes the clones list and sets the value of originalTimeUntilRemove */
    void AddObject() {
        GameObject clone = Instantiate(prefabObject, Camera.main.transform.position + (this.distanceFromCamera * Camera.main.transform.forward), Quaternion.identity);
        clones.Add(clone);

        //UnityARUserAnchorComponent component = clone.GetComponent<UnityARUserAnchorComponent>();
        timeUntilRemove = originalTimeUntilRemove;
    }

    // Updates the state by updating the time counter, and deleting the first object in our clones list if time is up
    void UpdateState() {
        // Just remove anchors after a certain amount of time, for example's sake.
        timeUntilRemove -= Time.deltaTime;
        textIndicator.text = "Time until oldest anchor removed: " + (int)timeUntilRemove + "s";
        if (timeUntilRemove <= 0.0f && clones.Count > 0) {
            GameObject clone = (GameObject)clones[0];
            clones.RemoveAt(0);
            UnityARSessionNativeInterface.GetARSessionNativeInterface().RemoveUserAnchor(clone.GetComponent<UnityARUserAnchorComponent>().AnchorId);
            if (clone != null) {
                Debug.Log("still exists, so we delete it ourselves " + clones.Count);
                Destroy(clone);
            }
            timeUntilRemove = originalTimeUntilRemove;
        }
    }

    /* This is an example of how to tie a function to an AR event
     * ExampleAddAnchor is called after an anchor is added to the AR scene 
     * The subscribing to an event part happens in Awake() */
    public void ExampleAddAnchor(ARUserAnchor anchor) {
        Debug.Log("Our anchor was added!");
    }

    /* This is an example of how to tie a function to an AR event
     * AnchorRemoved is called after an anchor is removed from the AR scene 
     * The subscribing to an event part happens in Awake() */
    public void AnchorRemoved(ARUserAnchor anchor) {
        Debug.Log("AnchorRemovedExample: " + anchor.identifier);
    }
}
