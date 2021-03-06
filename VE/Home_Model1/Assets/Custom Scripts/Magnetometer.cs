/* 
 * Child class to draw the vector (arrow) of the IMU magnetometer sensor data
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Magnetometer : MagneticFieldHandle
{
    public float magnitudeScalar = 200.0f;

    // Start is called before the first frame update
    void Start()
    {
        InstantiateVector(transform);
        if (debugMode)
            InvokeRepeating("DebugMethod", 1, 1);
    }

    // Update is called once per frame
    void Update()
    {
        if (isMessageReceived)
        {
            DrawVector(magnitudeScalar);
            isMessageReceived = false;
        }
    }

    protected override void DebugMethod()
    {
        base.DebugMethod();
        DrawVector(magnitudeScalar);
    }
}
