using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class PointCloudPositions : MonoBehaviour
{
    public ParticleSystem pointCloudParticlePrefab; //the particle system to render the points
    public int maxPointsToShow; //user defined, max number of points for particle system
    public float particleSize = 1.0f;
    Vector3[] m_PointCloudData;
    bool frameUpdated = false;
    ParticleSystem currentPS;
    ParticleSystem.Particle[] particles;

    private GUIStyle GStyle;

    // Use this for initialization
    void Start()
    {
        UnityARSessionNativeInterface.ARFrameUpdatedEvent += ARFrameUpdated;
        currentPS = Instantiate(pointCloudParticlePrefab); //make a clone of the particle system prefab to use in the scene
        m_PointCloudData = null;
        frameUpdated = false;

        //define a GUIStyle for the debug view rendering the text
        GStyle = new GUIStyle();
        GStyle.fontSize = 30;
    }

    public void ARFrameUpdated(UnityARCamera camera)
    {
        if (camera.pointCloud != null)
        {
            m_PointCloudData = camera.pointCloud.Points;
        }
        frameUpdated = true;
    }

    void OnGUI()
    {
        int seenThisFrame = (m_PointCloudData != null) ? m_PointCloudData.Length : 0;
        string formattedMessage = String.Format("{0} points total", seenThisFrame);
        GUI.Label(new Rect(100, 200, 200, 40), formattedMessage, GStyle);

        if (seenThisFrame >= 3)
        {
            string pointPositions = String.Format("{0}, {1}, {2}, ....", m_PointCloudData[0], m_PointCloudData[1], m_PointCloudData[2]);
            GUI.Label(new Rect(100, 300, 200, 40), pointPositions, GStyle);
        }

    }

    // Update is called once per frame
    void Update()
    {
        if (frameUpdated)
        {
            if (m_PointCloudData != null && m_PointCloudData.Length > 0 && maxPointsToShow > 0)
            {
                int numParticles = Mathf.Min(m_PointCloudData.Length, maxPointsToShow);
                ParticleSystem.Particle[] particles = new ParticleSystem.Particle[numParticles];
                int index = 0;
                foreach (Vector3 currentPoint in m_PointCloudData)
                {
                    particles[index].position = currentPoint;
                    particles[index].startColor = new Color(1.0f, 1.0f, 1.0f);
                    particles[index].startSize = particleSize;
                    index++;
                    if (index >= numParticles) break;
                }
                currentPS.SetParticles(particles, numParticles);
            }
            else
            {
                ParticleSystem.Particle[] particles = new ParticleSystem.Particle[1];
                particles[0].startSize = 0.0f;
                currentPS.SetParticles(particles, 1);
            }
            frameUpdated = false;
        }
    }
}
