# ARKit Educational Templates

## About
This repository contains a collection of simple template projects and tutorials for developing augmented reality (AR) iPhone apps using Unity and Apple's ARKit technology. These materials are intended for students with introductory programming experience, and introductory familiarity with Unity. 

**For a similar repository of ARCore templates and tutorials for Android devices, [please click here](https://github.com/CreativeInquiry/ARCore-Educational-Templates/).**

These projects and their documentation were developed in October 2019 by [Connie Ye](https://github.com/khanniie) ([@crabbage_](https://twitter.com/crabbage_)), with support from the [Frank-Ratchye STUDIO for Creative Inquiry](http://studioforcreativeinquiry), for undergraduate media arts courses taught by [Golan Levin](http://flong.com) at Carnegie Mellon University. Portions of these tutorials have been adapted from [the Arkit 2 plugin examples, which fall under the MIT license](https://bitbucket.org/Unity-Technologies/unity-arkit-plugin/src/default/LICENSES/MIT_LICENSE). We welcome your contributions and corrections. If you use these templates in your curriculum, please acknowledge this resource as: `Connie Ye, ARKit Educational Templates, (2019), GitHub repository, https://github.com/CreativeInquiry/ARKit-Educational-Templates`.

***IMPORTANT NOTE:*** As of November 11th, 2019, the Unity [AR remote](#arkit-remote) tool, which is highly recommended for development and debugging, is not working in iOS 13. For this reason, these tutorials are intended for iPhones running iOS 12. We recommend that you turn off automatic software updates, and *DO NOT* update to iOS 13, if you plan on using the AR Remote tool. This information is subject to change.   

## Table of Contents
1. [Downloading This Project](#downloading-this-project)
2. [Getting Started](#getting-started)
3. [Building to Xcode](#building-to-xcode) 
4. [Unity ARkit 2](#unity-arkit-2)
    - [General Notes](#general-notes)
    - [ARkit Remote](#arkit-remote)
    - [Demo: Add Anchors Everywhere](#demo-add-anchors-everywheres)
    - [Demo: Add Anchors to Plane](#demo-add-anchors-to-plane)
    - [Demo: Image Anchors](#demo-image-anchors)
    - [Demo: Change Based on Distance](#demo-change-based-on-distance-from-camera)
    - [Demo: Points of Interest](#demo-particles-on-points-of-interest)
    - [Demo: Plane Mesh](#demo-plane-mesh)
    - [Demo: Face Mesh](#demo-face-mesh)
    - [Demo: Face Anchors](#demo-face-anchors)
    - [Demo: Feature Detector](#demo-feature-detector)

# Downloading This Project #

Download this repository from Github by clicking on the green "Clone or Download" button above,

Or, in the terminal, run
```
git clone https://github.com/CreativeInquiry/ARKit-Educational-Templates
```
Then, **open the `unity-arkit` folder** within the downloaded folder using Unity Hub (these projects use **Unity 2019.2.3f1**, but any Unity v2017.4+ will probably work as well). You can open it in Unity Hub by selecting the "ADD" button and choosing the correct folder. Note that the folder to open is not the root directory! It is a folder called `unity-arkit` within the downloaded folder.

It might ask for iOS support, which you will have to install if you haven't already. You can install iOS support within Unity hub with `Installs->Add Modules`

# Getting Started #

Once you have the project downloaded, try building one of the scenes in the Examples folder to test that everything is working as expected.
1. Once the project is open in Unity, select any of the scenes in the Examples folder (you can see the folder structure under the Project tab, which is usually in the bottom left area). 
2. Click on the scene to open it (it will have a thumbnail that looks like the Unity logo). You will know it's open because the name of that scene will be shown in the Hierarchy tab.
3. If you'd like to learn more about that demo, please note that this README contains detailed descriptions of all of the scenes under the [Unity ARkit 2](#unity-arkit-2) section.
4. Once your scene is open, you can follow the steps in [Building to Xcode](#building-to-xcode) to build to your phone.
5. Once you've built to your phone and have confirmed that the app built runs, you can start developing your own apps!
6. It's highly recommended that you follow the steps in [building ARkit Remote](#building-the-app) to build the arkit remote app to your phone so that you can develop more efficiently.
7. Test out a few of the other example scenes using the remote tool, see what looks interesting and build your own AR app!

# Building to Xcode
There are two different workflows to test your app: 
* Use Unity to generate an Xcode project. Then use that project in Xcode to build and run your app onto your phone. **OR**
* In Unity, use your tethered phone's camera(s) to preview your app *on your laptop*. This requires the ARKit Remote tool, described later.

Let's start with the process for building the Xcode project. When you're done developing in Unity and want to build the app to your phone, you need to use Xcode to actually build the app on your phone. Xcode is Apple's development tool for their products. Unity can build you an Xcode project, and you can open the folder that is built, open the Xcode project, and build using Xcode, signing with your Apple account. 

These are the steps you will roughly follow:
1. Open the scene you want to build.
2. Open File->Build Settings, and navigate to the iOS panel.
3. Make sure your scene is checked (it should probably be the only one checked, unless you have some sort of navigation between scenes already built.) If you can't find it in the list, try clicking "Add Open Scenes."
4. Then, hit Build on the bottom right. It's advised to save this the resulting build folder in a preferred location somewhere outside of the Unity project, perhaps in a special folder called Build.
![remote button](tutorial_assets/buildpage.png)
5. Once your project has been built to a folder, open the file with the .xcodeproj extension.
6. Xcode should launch! At this point you can minimize Unity, because you won't need it for the rest of the building process.
7. If there's a blank view in Xcode, click on the `unity - iPhone` section on the top left (marked #1 in the figure below).
![xcode view](tutorial_assets/xcodeview.png)
8. Look for the Signing and Capabilities section (marked #2 in the figure above) of Xcode, and sign for your app by selecting Team->[your team]. You may need to register a developer team ("Add an Account") if you don't have one yet 
![remote button](tutorial_assets/signing.png)
9. If you encounter any "bundle identifier" errors while signing, try changing your bundle identifier to something more distinctive. It should be of the format com.[company name].[appname]. For example, com.crabbage.arkitdemo
10. Click on the run button to build, after selecting your USB connected device from the top left device menu. If you don't see your device, you may need to unlock it or "Trust this computer" before it shows up.
![remote button](tutorial_assets/build-button.png)
11. It should build, but if it's your first time building to a phone, it may not open until you Verify your developer team through `General->Device Management` on your phone's settings. If Xcode gives an error after it's built the app to your phone, but can't open it for security reasons, it's fine to hit the stop button - the app should still be built on your phone and you can fix the security settings and open it after without it being connected to Xcode. The benefit of running with a connection to Xcode is that you can see the debug statements and errors if it crashses.

Note: If you want to try the "Build and Run" option, you may be able to, but you need a team ID, which is typically only easy to find if you're using a paid account. There's a [supposed solution here](https://stackoverflow.com/questions/18727894/how-can-i-find-my-apple-developer-team-id-and-team-agent-apple-id), but I haven't verified that it works.

### Player Settings
1. You may want to change the App name and bundle identifier through the Unity Player Settings->Other Settings. These values can also be changed in Xcode on the general page (shown below), but changing it within Player Settings means your changes are preserved for every subsequent build.
![remote button](tutorial_assets/appsettings.png)

### Xcode troubleshooting
- When you first install your app to your phone, it may not open until you Verify your developer team through General->Device Management on your phone's settings.
- There's a maximum number of bundle names you can register weekly with a free account.

___________________

# Unity ARkit 2 

## General Notes

These demos are built with [Unity's Arkit2 Plugin. Their code repository](https://bitbucket.org/Unity-Technologies/unity-arkit-plugin/src/default/) contains detailed information about the API, which events you can subscribe to, and has more complicated demos. The demos presented in this repository are simple, isolated examples of one single functionality. See their repository for examples of other features not explored here, such as world mapping and 3d object tracking.

A lot of demos use anchors, which are defined by Apple's documentation as "A position and orientation of something of interest in the physical environment."

**These demos exist with the acknowledgement that the ARkit 2 Plugin was recently deprecated in favor of AR Foundation, which integrates ARKit 3 (there is no separate ARkit 3 plugin for Unity)**; however, Arkit 2 has a functional [AR Remote tool](#arkit-remote), and AR Foundation does not have a reliable one yet, so we are using ARkit 2 here for ease of development. See these slides for [a more complete analysis](https://docs.google.com/presentation/d/1n9gmlFR2trCwu9m41-IdlOhBGr88aBHQTgWS3Q7y8ZU/edit?usp=sharing).

### Requirements
- Unity v2017.4+
- Apple Xcode 10.0+ with latest iOS SDK that contains ARKit Framework
- Apple iOS device that supports ARKit (iPhone 6S or later, iPad (2017) or later)
- Apple iOS 12+ installed on device
- For iOS 13+, you will need the latest Xcode build. However, be warned that Arkit's remote tool breaks on iOS 13.1.3.

### Glossary of Common GameObjects
- **CameraParent:** A container for the main camera object.
    - **Main Camera:** The camera that renders the scene view, contains two AR scripts that work in the back.
- **ARCameraManager:** Contains the script Unity AR Camera Manager, which contains various AR settings, like Start Alignment, Plane Detection options, Get Point Cloud, Enable Light Estimation, Enable Auto Focus, Environment Texture, Image Tracking and Object Tracking. 
    - This is where you would specify your image targets or object targets.
    - This is also where you can Enable Light Estimation, which adds in a light positioned according to how it percieves the environment, so that your superimposed GameObjects can match the environment better.

### Troubleshooting
The [Issues section](https://bitbucket.org/Unity-Technologies/unity-arkit-plugin/issues?status=new&status=open) of the Unity AR plugin contains a lot of useful information that's useful to read through when you're troubleshooting.

___________________

## ARKit Remote

### What is ARKit Remote? 
ARKit remote allows you to test your AR code in the Unity editor, without having to build the entire app. Building an app might take a few minutes, so having a remote tool saves you a lot of time while developing! With Arkit remote, you build the app to your phone, and open the app to stream your phone's camera view to Unity. Then, the editor shows the AR view using the camera information. 

![remote button](tutorial_assets/remote.jpg)

### Building the app
1. Open the “Assets/UnityARKitPlugin/ARKitRemote/UnityARKitRemote” scene.
2. If you are using facetracking, make sure that "uses facetracking" is checked in the ARKit Settings. Select the “Assets/UnityARKitPlugin/Resources/UnityARKitPlugin/ARKitSettings” file and activate the “ARKit Uses Facetracking” check box.
3. Select PlayerSettings (in the menu: Edit/Project Settings/Player) and make sure you have some text in the entry “Camera Usage Description.”
4. Add this scene to the build.
5. Before building, in build settings, turn on development build. Select BuildSettings (in menu File/Build Settings…) and **check the Development Build checkbox** (only needed for building this specific scene).
6. Build for iOS as described in the [Building to Xcode](#building-to-xcode)! It's a good idea to change the bundle identifier to com.yourcompany.arkitremote rather than com.yourcompany.arkitdemo, so that when you do future builds of your actual app, it won't overwrite this one.
7. You should now have an app on your phone. When you open it, you will see a flashing black view and nothing else. 

There is more detailed information, along with videos, on the [Unity site](https://blogs.unity3d.com/2018/01/16/arkit-remote-now-with-face-tracking/), and [Unity forum](https://forum.unity.com/threads/arkit-support-for-ios-via-unity-arkit-plugin.474385/page-13?_ga=2.253381514.2001220102.1572149175-1852576001.1567539614#post-3153415).

### Using the remote tool
1. Open an example scene from the Examples folder.
2. Connect the iPhone to your Mac development machine via USB.
3. Start up the ARKit Remote app on the device.  You should see a “Waiting for connection..” screen.
![remote button](tutorial_assets/remote-start.png)
4. In the Unity Editor, connect to your iPhone X by going to your Console Window and selecting the iPhone X connected via USB. The option that works for me usually is iPhone Player, but on a different phone it was iPhone X, so try both and see which one works.
![remote button](tutorial_assets/remote-options.png)
5. Load up one of the examples in the project and press Play in the Editor.
6. In your editor, you should see a green screen with a button on top that says “Start ARKit Session.” 
![remote button](tutorial_assets/remote-button.png)
7. Press that button (in your Unity Editor!) and you should see your camera video feed in your Editor “Game” window.  If your face is in the view it will be sending ARKit Face Tracking data from the device to the Editor as well.
![remote button](tutorial_assets/remote-last.png)

There is more detailed information, along with videos, on the [Unity site](https://blogs.unity3d.com/2018/01/16/arkit-remote-now-with-face-tracking/) and [Unity Forum](https://forum.unity.com/threads/arkit-support-for-ios-via-unity-arkit-plugin.474385/page-13?_ga=2.253381514.2001220102.1572149175-1852576001.1567539614#post-3153415).

### Troubleshooting ARKit Remote
1. Sometimes if just selecting your iphone model doesn't work, you will need to look for the "iphone player" option. *It might help to turn off wifi/internet connection on your phone.* There's some more information [here](https://bitbucket.org/Unity-Technologies/unity-arkit-plugin/issues/73/when-trying-to-use-arkitremote-with-iphone).
2. It's a good idea to make sure your bundle identifier for the arkit remote build is something different than what your actual app will use; otherwise, when your build your actual app to your phone it will overwrite the ARkit remote app and vice versa. For example, you can set your bundle identifier for the Arkit remote app to **com.yourcompanyname.arkitremote** and then future builds of your app could be **com.yourcompanyname.arappdemo**
3. Arkit remote passes info from the ar camera on your phone back to the unity editor; however, IT DOES NOT PASS ALL OF THE INFORMATION to the editor. This means that something could look like it's broken when you're testing in the Unity editor with Arkit remote but not actually be broken. For example, the Image Anchors scene will not work in Arkit remote because image anchor information is not passed through the remote tool. If your app is mysteriously not working or AR objects from the interface have null values, I would build the app and see if it works built on the phone. 
4. I noticed that ARkit Remote broke on iOS 13.1.3, although it works on 13.1.2. If the remote tool is already working on the phone, if possible, I would avoid updating your phone for the duration of the project in case it breaks after you update.
5. When the ArKit remote app is connected, it acts only as a camera. **To interface with your app and see any of the AR, look the Unity Editor on your computer!** Specifically, your "tap" interactions will be click actions on your editor screen, and any gameobjects in your scene will also only show up on the editor screen.
6. Sometimes if I can't find the right device in the editor, I quit the Remote app on my phone and reopen it, repeating until it works.
7. If, after working fine for a while, your app crashes when you open it, it should fix the problem to rebuild it.
___________________

## [Demo: Add Anchors Everywhere](./unity-arkit/Assets/UnityARKitPlugin/Examples/AddAnchorsEverywhere)
![everywhere demo gif](./tutorial_assets/everywhere.gif)

Places a GameObject upon user click/touch. The oldest GameObject will be deleted after "timeuntilremove" number of seconds, which is set to 10 as the default.

### Scripts
- **[AddAnchorsEverywhere.cs:](./unity-arkit/Assets/UnityARKitPlugin/Examples/AddAnchorsEverywhere/AddAnchorsEverywhere.cs)** Clones the specified PrefabOject a distance of distanceFromCamera meters forwards, tracks existing objects, and then deletes the oldest one after 10 seconds of inactivity. See inline comments for more specific implementation details. Note that the tap on the screen does not affect the position of the result on the screen, it is merely a trigger. The clone's position is calculated based on the main camera.

### Scene Objects
- **Directional Light:** Adds light to the scene. This illuminates the GameObjects that you put in the scene.
- **CameraParent:** A container for the main camera object.
    - **Main Camera:** The camera that renders the scene view, contains two AR scripts that work in the back.
- **ARCameraManager:** Contains the script Unity AR Camera Manager, which contains various AR configurations.
- **GeneratePlanes:** A script that adds in a mesh where it sees planes. This is mostly for debugging, and you can deactivate this object if you don't want to see the planes.
- **AddAnchorsEverywhere:** Contains the sript, AddAnchorsEVerywhere.cs, that executes most of the game logic.
- **Canvas:** Container for UI elements.
    - **Countdown Indicator:** Text element used to show how many seconds left before an object is deleted.

### Possible Next Steps
- Try changing out the Prefab Object with your own 3d object in AddAnchorsEverywhere! [To make a prefab](https://docs.unity3d.com/Manual/CreatingPrefabs.html), drag and drop a scene gameobject into the project folder view.

___________________

## [Demo: Add Anchors to Plane](./unity-arkit/Assets/UnityARKitPlugin/Examples/AddAnchorToPlane)
![placeonplane demo gif](./tutorial_assets/placeonplane.gif)

Detects horizontal planes in the scene, draws those planes, and upon tap/click, uses [raycasting](https://docs.unity3d.com/ScriptReference/Physics.Raycast.html) to check if and where your tap collides with the AR planes. If there is a collision, it places a new GameObject at that point. 

### Scripts
- **[ArAddAnchorToPlane.cs:](./unity-arkit/Assets/UnityARKitPlugin/Examples/AddAnchorToPlane/ARAddAnchorToPlane.cs)** Upon tap/click, it shoots out a ray into the scene; if this ray colldies with an AR plane, it creates a new instance of the prefab object and places it upon the spot of collision.

### Scene Objects
- **Directional Light:** Adds light to the scene. This illuminates the GameObjects that you put in the scene.
- **CameraParent:** A container for the main camera object.
    - **Main Camera:** The camera that renders the scene view, contains two AR scripts that work in the back.
- **ARCameraManager:** Contains the script Unity AR Camera Manager, which contains various AR configurations.
- **GeneratePlanes:** A script that adds in a mesh where it sees planes. This is mostly for debugging, and you can deactivate this object if you don't want to see the planes.
- **AddAnchorToPlane:** Contains the sript, ARAddAnchorToPlane.cs, that executes most of the game logic.

### Possible Next Steps
- Try changing out the Prefab Object with your own 3d object in AddAnchorToPlane. [To make a prefab](https://docs.unity3d.com/Manual/CreatingPrefabs.html), drag and drop a scene gameobject into the project folder view.

___________________

## [Demo: Image Anchors](./unity-arkit/Assets/UnityARKitPlugin/Examples/ImageAnchor)
![imageanchors demo gif](./tutorial_assets/imageanchors.gif)

Watches for two the specific images below, and places game objects upon them if found in camera view.
IMPORTANT NOTE: This demo does not work in the remote tool! You will need to build it to see it work.

![image anchor 1](./tutorial_assets/imageanchor1.jpg)![anchor 2](./tutorial_assets/imageanchor2.jpg)

### Generating Custom Reference Image Objects
1. To generate reference images, go to Assets->Create->UnityArkitPlugin-> ArReferenceImage
![ref image path](tutorial_assets/pathtorefimage.png)
2. Set values for the new item. Image Texture should be your custom image.
![ref image path](tutorial_assets/refimage.png)
3. Create a reference image set, with Assets->Create->UnityArkitPlugin-> ArReferenceImagesSet
4. Put in the reference images you created.
![ref image path](tutorial_assets/refimagesset.png)
5. The reference images should then be used as values for SetImageAnchor.cs, while the reference image set is used in ARCameraManager.

### Scripts
- **[SetImageAnchor.cs:](./unity-arkit/Assets/UnityARKitPlugin/Examples/ImageAnchor/SetImageAnchor.cs)** Upon the AddImageAnchor event, it checks if the image anchor added is equal to referenceImage, and if so, it clones prefabToGenerate and puts the new object upon the image anchor.

### Scene Objects
- **Directional Light:** Adds light to the scene. This illuminates the GameObjects that you put in the scene.
- **Additional Light:** Adds more light to the scene. 
- **CameraParent:** A container for the main camera object.
    - **Main Camera:** The camera that renders the scene view, contains two AR scripts that work in the back.
- **ARCameraManager:** Contains the script Unity AR Camera Manager, which contains various AR configurations.
    - The important field in ARCameraManager is Image Tracking, where you can set which images to track and the maximum number of tracked images.
- **GenerateImageAnchorWhite:** Contains the script, SetImageAnchor.cs, that watches for referenceImage (in this case, WhiteOnBlackLogo), and sets the black cube object upon it when it detects it.
- **GenerateImageAnchorBlack:** Contains the script, SetImageAnchor.cs, that watches for referenceImage (in this case, BlackOnWhiteLogo), and sets the white cube object upon it when it detects it.

### Possible Next Steps
- Try changing out the Prefab Object with your own 3d object. [To make a prefab](https://docs.unity3d.com/Manual/CreatingPrefabs.html), drag and drop a scene gameobject into the project folder view.
- Make your own custom reference images, as described above.

___________________

## [Demo: Change Based on Distance from Camera](./unity-arkit/Assets/UnityARKitPlugin/Examples/ChangeBasedOnDistance)
![distance demo gif](./tutorial_assets/distance.gif) ![rotate demo gif](./tutorial_assets/rotate.gif)

The cube in the scene changes size, color and rotation (in the second gif) based on the distance between it and the camera.

### Scripts
- **[ChangeBasedOnDistance.cs:](./unity-arkit/Assets/UnityARKitPlugin/Examples/ChangeBasedOnDistance/ChangeBasedOnDistance.cs)** Calculates the distance between the cube and the main camera, and sets the cube's rotation/size/color according to that value.

### Scene Objects
- **Directional Light:** Adds light to the scene. This illuminates the GameObjects that you put in the scene.
- **Additional Light:** Adds more light to the scene. 
- **CameraParent:** A container for the main camera object.
    - **Main Camera:** The camera that renders the scene view, contains two AR scripts that work in the back.
- **ARCameraManager:** Contains the script Unity AR Camera Manager, which contains various AR configurations.
- **ChangeBasedOnDistance:** Contains the sript, ChangeBasedOnDistance.cs, that executes most of the game logic.
- **White Cube**: The cube in the scene, which changes during the game runtime based on the distance between it and the main camera.

### Possible Next Steps
- Consider remapping the values from distance to size/color/rotation differently.
- Change something other than size/color/rotation.
- Use a different object.
- Instead of using the distance as a gradient, set a threshold value at which an event is triggered.

___________________

## [Demo: Points of Interest](./unity-arkit/Assets/UnityARKitPlugin/Examples/PointCloud)
![points1 demo gif](./tutorial_assets/points1.gif)![points2 demo gif](./tutorial_assets/points2.gif)

Places glowing points on [points in the world space found through scene analysis during the AR Session](https://developer.apple.com/documentation/arkit/arpointcloud). 

### Scripts
- **[PointCloudIds.cs](./unity-arkit/Assets/UnityARKitPlugin/Examples/PointCloud/PointCloudIds.cs):** Displays the point information on the top left.
- **[PointCloudPositions.cs](./unity-arkit/Assets/UnityARKitPlugin/Examples/PointCloud/PointCloudPositions.cs):** Watches the AR Point Cloud data, and feeds it into Point Cloud Particle Prefab to be rendered.

### Scene Objects
- **Directional Light:** Adds light to the scene. This illuminates the GameObjects that you put in the scene.
- **CameraParent:** A container for the main camera object.
    - **Main Camera:** The camera that renders the scene view, contains two AR scripts that work in the back.
- **ARCameraManager:** Contains the script Unity AR Camera Manager, which contains various AR configurations.
- **PointCloudIdsExample:** Contains the script, PointCloudIds.cs, that displays point information in the top left.
- **PointCloudParticleExample**: Contains the script, PointCloudPositions.cs, that renders the point data.

### Possible Next Steps
- Use a different particle system to visualize the points.
- Use the raw position data for something else, rather than feeding the information into a particle system.

___________________

## [Demo: Plane Mesh](./unity-arkit/Assets/UnityARKitPlugin/Examples/PlaneMesh)
![planemesh demo gif](./tutorial_assets/planemesh.gif)

### Scene Objects
- **Directional Light:** Adds light to the scene. This illuminates the GameObjects that you put in the scene.
- **CameraParent:** A container for the main camera object.
    - **Main Camera:** The camera that renders the scene view, contains two AR scripts that work in the back.
- **ARCameraManager:** Contains the script Unity AR Camera Manager, which contains various AR configurations.
- **GeneratePlanes:** A script that adds in a mesh where it sees planes. See ARKitPlaneGeometry to see how the mesh is configured and as an example for creating your own plane mesh.

### Possible Next Steps
- Change the plane mesh, change the materials on it or modify it somehow with a vertex shader.
- Place items upon the plane, as demonstrated in the [Add Anchors to Plane demo](#demo-add-anchors-to-plane).

___________________

## [Demo: Face Mesh](./unity-arkit/Assets/UnityARKitPlugin/Examples/FaceMesh)
![facemesh demo gif](./tutorial_assets/facemesh.gif)

Places a mesh upon your face.
### Scripts
- **[MeshManager.cs:](./unity-arkit/Assets/UnityARKitPlugin/Examples/FaceMesh/MeshManager.cs)** Takes in information about the [ARFaceGeometry](https://developer.apple.com/documentation/arkit/arfacegeometry), and then passes it to a [Mesh Filter](https://docs.unity3d.com/Manual/class-MeshFilter.html), which passes it to a Mesh Renderer to be rendered. Also grabs vertex 9, which is a point on the nose out of the 1220 vertices given for the face, and places a red sphere at the position of vertex 9. (Some discussion about vertices and hardcoded values is found in this [article.](https://www.raywenderlich.com/5491-ar-face-tracking-tutorial-for-ios-getting-started))

### Scene Objects
- **Directional Light:** Adds light to the scene. This illuminates the GameObjects that you put in the scene.
- **CameraParent:** A container for the main camera object.
    - **Main Camera:** The camera that renders the scene view, contains two AR scripts that work in the back.
- **ARCameraTracker:** Contains the script Unity AR Camera Tracker.
- **MeshManager:** Contains the script, MeshManager.cs, which works as described above.
    - **Sphere:** The "clown nose" that the script MeshManager moves to the position of the user's nose.

### Possible Next Steps
- Change the face mesh somehow, perhaps with a vertex shader or by applying a different material to the mesh under FaceMeshManager->Mesh Renderer.
- Find other vertices of interest upon the face and use their positions for something.

___________________

## [Demo: Primitives On Face (Face Anchors)](./unity-arkit/Assets/UnityARKitPlugin/Examples/PrimitivesOnFace)
![faceanchors demo gif](./tutorial_assets/faceanchors.gif)

Places anchors upon the "center" of the face, and the eyes. 

IMPORTANT NOTE: The eye transforms will not work in the remote tool, so you will need to build to see that part of the app work.

### Scripts
- **[PrimitivesOnFace.cs:](./unity-arkit/Assets/UnityARKitPlugin/Examples/PrimitivesOnFace/PrimitivesOnFace.cs)** Uses face anchor data; grabs leftEyePose, rightEyePose, and the anchorData's transform value (representing the center of the face), and places anchors at those points.

### Scene Objects
- **Directional Light:** Adds light to the scene. This illuminates the GameObjects that you put in the scene.
- **CameraParent:** A container for the main camera object.
    - **Main Camera:** The camera that renders the scene view, contains two AR scripts that work in the back.
- **ARCameraTracker:** Contains the script Unity AR Camera Tracker.
- **PrimitivesOnFace:** Contains the script, PrimitivesOnFace.cs, which works as described above.

### Possible Next Steps
- Switch out the anchors for other objects.

___________________

## [Demo: Feature Detector](./unity-arkit/Assets/UnityARKitPlugin/Examples/FeatureDetector)

![cheek demo gif](./tutorial_assets/cheek.gif) ![pucker demo gif](./tutorial_assets/pucker.gif) ![tongue demo gif](./tutorial_assets/tongue.gif) ![nose demo gif](./tutorial_assets/nose.gif) 

*Above, Left to right: CheekPuff blendshape, MouthPucker blendshape, TongueOut blendshape, NoseSneerLeft blendshape*

If the [Blendshape](https://developer.apple.com/documentation/arkit/arfaceanchor/2928251-blendshapes) coefficient for the watched feature passes a threshold, a red oval shows up. For example, if the someone puffs their cheeks, and the app is watching the CheekPuff coefficient, a red oval will appear.

### Scripts
- **[FeatureDetector.cs](./unity-arkit/Assets/UnityARKitPlugin/Examples/FeatureDetector/FeatureDetector.cs):** Checks the value of the feature we are watching; if it is past a threshold, it makes the red oval image visible.
- **[BlendShapeGUI.cs:](./unity-arkit/Assets/UnityARKitPlugin/Examples/FeatureDetector/BlendShapeGUI.cs)** Prints out the current blendshape coefficients on the top left corner.
- **[ARAnchorManager.cs:](./unity-arkit/Assets/UnityARKitPlugin/Examples/FeatureDetector/ARAnchorManager.cs)** Uses the anchorData's transform value (representing the center of the face) to place an anchor object at that position.

### Scene Objects
- **FeatureDetector:** Adds light to the scene. This illuminates the GameObjects that you put in the scene.
- **CameraParent:** A container for the main camera object.
    - **Main Camera:** The camera that renders the scene view, contains two AR scripts that work in the back.
- **ARCameraTracker:** Contains the script Unity AR Camera Tracker.
- **Directional Light:** Adds light to the scene. This illuminates the GameObjects that you put in the scene.
- **Canvas:** Container for UI elements.
    - **Layout:** Layout container for UI elements.
        - **Image:** The red oval that shows up when the coefficient passes a threshold.
- **EventSystem:** Manages the event system for the UI (I'm not sure that it does anything in this case).
- **AnchorManager:** Contains the script ARAnchorManager.cs, which places the anchor at the center of the face.
- **BlendShape GUI:** Contains the script, BlendShapeGUI.cs, which shows the GUI on the top left listing the realtime coefficient values.

### Possible Next Steps
- Change which blendshape/shapes trigger the interaction: see a [complete list here](https://developer.apple.com/documentation/arkit/arfaceanchor/blendshapelocation).


