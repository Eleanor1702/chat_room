compile : client server

client :
	g++ -o bin/client src/client_main.cpp src/User.cpp

server :
	g++ -o bin/server src/server_main.cpp src/Server.cpp src/Client.cpp

clean :
	rm bin/*

