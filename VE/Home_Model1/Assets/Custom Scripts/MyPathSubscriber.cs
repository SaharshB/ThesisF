/*
 * Important script that subscribes to the path node, i.e. the accurate real-time pose 
 * of the Turtlebot. 
 */

using System.Collections;
using System.Collections.Generic;
using System.Threading;
using System.Net.Sockets;
using UnityEngine;
using System;
using System.Net;
using UnityEngine.UI;
using System.Text;
using UnityEngine.SceneManagement;


namespace RosSharp.RosBridgeClient
{
    public class MyPathSubscriber : UnitySubscriber<MessageTypes.Std.Int32MultiArray>
    {
        public TcpListener server;
        private LineRenderer line;
        private Vector3 mousePos;
        public Material material;
        private int currLines = 0;
        private double xc, yc, xp, yp;
        private bool isMessageReceived = false;
        private int x, y;
        private int[] dest;
        private int[] dest_t = new int[1];
        string host = "127.0.0.1";
        int portPathstatus = 52063;
        float pathstatusfromServer;

        Thread tcpListenerThread;

        protected override void Start()
        {
            base.Start();
            line = new GameObject("PathLine").AddComponent<LineRenderer>();
            tcpListenerThread = new Thread(() => ListenForMessages());
            tcpListenerThread.Start();
        }

        private void Update()
        {
            Debug.Log("pathstatus: " + pathstatusfromServer);
            if (isMessageReceived == true)
            {
                ShowLine();
            }
            if (pathstatusfromServer != 1)
            {
                line.enabled = false;
            }
            if (pathstatusfromServer == 1)
            {
                line.enabled = true;
            }
        }

        public void ListenForMessages()
        {

            try
            {
                // Set the TcpListener on port 13000.
                IPAddress localAddr = IPAddress.Parse(host);

                // TcpListener server = new TcpListener(port);
                server = new TcpListener(localAddr, portPathstatus);

                // Start listening for client requests.
                server.Start();


                Byte[] bytes = new Byte[1024];      //The byte array containing the sequence of bytes to decode.
                String data = null;

                while (true)
                {
                    using (TcpClient client = server.AcceptTcpClient())
                    {
                        data = null;

                        // Get a stream object for reading and writing
                        NetworkStream stream = client.GetStream();

                        int i;      //The number of bytes to decode

                        while ((i = stream.Read(bytes, 0, bytes.Length)) != 0)
                        {
                            data = System.Text.Encoding.ASCII.GetString(bytes, 0, i);  // 0 is The index of the first byte to decode.
                            float pathstatusfromRhapsody = (float)Convert.ToDouble(data);

                            pathstatusfromServer = pathstatusfromRhapsody;
                            data = data.ToUpper();

                            byte[] msg = System.Text.Encoding.ASCII.GetBytes(data);

                            stream.Write(msg, 0, msg.Length);
                        }
                        //client.Close();
                    }
                }
            }
            catch (SocketException e)
            {
                Debug.LogError(String.Format("SocketException: {0}", e));
            }
            finally
            {
                server.Stop();
            }
        }

        protected override void ReceiveMessage(MessageTypes.Std.Int32MultiArray message)
        {
            Debug.Log("Hello from path");
            GetPosition(message);//.Ros2Unity();
            isMessageReceived = true;
        }

        private void GetPosition(MessageTypes.Std.Int32MultiArray message)
        {
            Debug.Log("Received data " + message.data.Length);
            dest = message.data;
            if (dest == dest_t)
            {
                isMessageReceived = false;
            }
            else
            {
                dest_t = dest;
                isMessageReceived = true;
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
            line.material = material;
            line.positionCount = vertices + 1;
            line.startWidth = 0.05f;
            line.endWidth = 0.05f;
            line.useWorldSpace = false;
            line.numCapVertices = 50;
        }
    }
}