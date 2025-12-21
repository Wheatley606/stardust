import socket

HOST = '0.0.0.0'  # Adresse locale
PORT = 7332         # Port du serveur

while True:
    # Création du socket à chaque nouveau cycle
    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    server.bind((HOST, PORT))
    server.listen(1)
    print(f"Server awaiting on {HOST}:{PORT}...")

    try:
        conn, addr = server.accept()
        print(f"Connected to {addr}")

        # Boucle de communication avec le client
        while True:
            data = conn.recv(1024).decode("utf-8")
            if not data:
                print(f"Disconnected Client.")
                break

            print(data)
            #conn.sendall(b"ACK: " + data)

        conn.close()

    except KeyboardInterrupt:
        print("\nStop the Server.")
        break
    except Exception as e:
        print(f"Error : {e}")

    finally:
        server.close()
        print("Awaiting a new connection...\n")