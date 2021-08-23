import socket

def serv_mag():
    HOST = '127.0.0.1'  # Local Address
    PORT = 52064        # Port to listen on for magnetic extrapolation method
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.bind((HOST, PORT))
        s.listen()
        conn, addr = s.accept()
        with conn:
            data = conn.recv(1024)
            return data[0]

def serv_disp():
    HOST = '127.0.0.1'  # Local Address
    PORT = 52063        # Port to listen on for display 
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.bind((HOST, PORT))
        s.listen()
        conn, addr = s.accept()
        with conn:
            data = conn.recv(1024)
            return data[0]