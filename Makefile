BOOST_ROOT = /usr/local/include/boost_1_64_0
COMPILER_OPTS = -std=c++11 -lboost_system

compile : client server

client :
	g++ -o bin/client src/client_main.cpp src/User.cpp -I$(BOOST_ROOT) $(COMPILER_OPTS)

server :
	g++ -o bin/server src/server_main.cpp src/Server.cpp src/Client.cpp src/Connection.cpp -I$(BOOST_ROOT) $(COMPILER_OPTS)

clean :
	rm bin/*

