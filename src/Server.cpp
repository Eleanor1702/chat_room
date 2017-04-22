#include "../header/Server.h"

Server::Server() {      //constructor

}

void Server::run() {
    try {
	    io_service.run();
    }     
    catch(std::exception& e) {
        std::cerr << e.what() << std::endl; 
    }
}
