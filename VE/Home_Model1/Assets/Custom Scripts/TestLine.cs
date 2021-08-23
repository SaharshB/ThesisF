using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class TestLine : MonoBehaviour
{
    private LineRenderer line;
    private Vector3 mousePos;
    public Material material;
    private int currLines = 0;
    private int[] dest = new int[6];
    private int x, y;
    private double xc, yc, xp, yp;

    void Start()
    {
        dest[0] = 3882;
        dest[1] = 3930;
        dest[2] = 4398;
        dest[3] = 4399;
        dest[4] = 6271;
        dest[5] = 6273;
        ShowLine();
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            //Destroy(line);
            line.enabled=false;
        }
        if (Input.GetMouseButtonDown(1))
        {
            line.enabled = true;
        }
    }

    void ShowLine()
    {
        createLine(dest.Length);
        line.SetPosition(0, new Vector3(0, 0.1f, 0));
        for (int i = 0; i < dest.Length; i++)
        {
            x = dest[i] / 117 + 1;
            y = dest[i] % 117;
            xc = (float)y / 20 - 1.05;
            yc = 1.7 - (float)x / 20;
            Debug.Log("Coordinates for " + i + " are: " + x + " " + y);

            line.SetPosition(i + 1, new Vector3(-(float)yc, 0.1f, (float)xc));
        }
    }

    void createLine(int vertices)
    {
        line = new GameObject("Line" + currLines).AddComponent<LineRenderer>();
        line.material = material;
        line.positionCount = vertices+1;
        line.startWidth = 0.05f;
        line.endWidth = 0.05f;
        line.useWorldSpace = false;
        line.numCapVertices = 50;
    }
}