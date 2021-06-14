import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((socket.gethostname(),1234))
s.listen(5)

while true:
    clientsocket, adress - s.accept()
    print(f"Conexão com {endereço} foi estabelecida!")
    clientsocket.send(bytes("Bem-vindo ao servidor","utf-8"))