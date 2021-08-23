using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateLine : MonoBehaviour
{
    void Start()
    {
        // draw a 5-unit white line from the origin for 2.5 seconds
        // Debug.DrawLine(Vector3.zero, new Vector3(5, 0, 0), Color.white, 2.5f);
        DrawLine(new Vector3(0, 0, 0), new Vector3(0, 0, 1), Color.blue);
    }

    private float q = 0.0f;

    void FixedUpdate()
    {
        
    }

    void DrawLine(Vector3 start, Vector3 end, Color color, float duration = 0.2f)
    {
        GameObject myLine = new GameObject();
        myLine.transform.position = start;
        myLine.AddComponent<LineRenderer>();
        LineRenderer lr = myLine.GetComponent<LineRenderer>();
        lr.material = new Material(Shader.Find("../Materials/KitchenColor"));
        lr.startColor = color;
        lr.endColor = color;
        //lr.SetWidth(0.01f, 0.01f);
        lr.startWidth = 0.1f;
        lr.endWidth = 0.1f;
        lr.SetPosition(0, start);
        lr.SetPosition(1, end);
        GameObject.Destroy(myLine, duration);

        //lr.gameObject.SetActive(true);
        //lr.positionCount=2;
        //lr.SetPosition(0, start);
        //lr.SetPosition(1, end);
    }
}
