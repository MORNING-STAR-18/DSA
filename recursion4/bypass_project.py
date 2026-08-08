import socket
import threading

LISTENING_PORT = 8888

def tunnel_data(source, destination):
    try:
        while True:
            data = source.recv(8192) # Buffer size badha diya
            if not data: break
            destination.sendall(data)
    except: pass

def handle_request(client_socket):
    try:
        request = client_socket.recv(4096)
        if not request: return
        
        first_line = request.decode('utf-8', 'ignore').split('\n')[0]
        print(f"[BYPASSING] --> {first_line}")

        if "CONNECT" in first_line:
            target = first_line.split(' ')[1]
            host, port = target.split(':')
            
            # Sophos bypass ke liye direct socket connection
            remote_socket = socket.create_connection((host, int(port)), timeout=10)
            client_socket.sendall(b"HTTP/1.1 200 Connection Established\r\n\r\n")
            
            # Dono taraf binary data forward karna (SSL Certificate check bypass)
            threading.Thread(target=tunnel_data, args=(client_socket, remote_socket)).start()
            threading.Thread(target=tunnel_data, args=(remote_socket, client_socket)).start()
    except: pass

def start_server():
    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    server.bind(('0.0.0.0', LISTENING_PORT))
    server.listen(100)
    print(f"=== COLLEGE BYPASS ACTIVE ON PORT {LISTENING_PORT} ===")
    while True:
        client_sock, addr = server.accept()
        threading.Thread(target=handle_request, args=(client_sock,)).start()

if __name__ == "__main__":
    start_server()