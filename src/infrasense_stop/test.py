import socket
import time

with socket.create_connection(("0.0.0.0",5000)) as s:
	s.sendall(b'{"messageType":"EMERGENCY_')
	time.sleep(0.2)
	s.sendall(b'STOP"}\n')
