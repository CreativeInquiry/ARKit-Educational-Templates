using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.XR.iOS;

/* Upon tap/click, it shoots out a ray into the scene; 
 * if this ray colldies with an AR plane, it creates a new instance of the prefab object and places it upon the spot of collision. */
public class ARAddAnchorToPlane : MonoBehaviour {

    public GameObject prefabObject; //the object that will be cloned and placed
    public float maxRayDistance = 30.0f;
    public LayerMask collisionLayerMask; //the AR planes to test against

    private void RaycastAddObject() {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        // We'll try to hit one of the plane collider gameobjects that were generated by the plugin.
        // Effectively similar to calling HitTest with ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent
        if (Physics.Raycast(ray, out hit, maxRayDistance, collisionLayerMask)) {
            // We're going to get the position from the contact point and clone the prefab at that position & rotation
            GameObject clone = Instantiate(prefabObject, hit.point, hit.transform.rotation);
        }
    }

/* the below code checks, at compile time, if we are in the unity editor,
 * and if we are, we have update check for the mouse down button
 * otherwise, we are looking for finger touches instead, and then it compiles the code accordingly 
 * Look up C# Preprocessor directives for more info if interested */
#if UNITY_EDITOR
    void Update () {
        if (Input.GetMouseButtonDown (0)) {
            RaycastAddObject();
        }
    }
#else
    void Update() {
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began) {
            RaycastAddObject();
        }
    }
#endif
}
