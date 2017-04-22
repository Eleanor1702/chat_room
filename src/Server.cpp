#include "../header/Server.h"

Server::Server() : acceptor(io_service, boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(), PORT_NUMBER)), socket(io_service) {      //constructor
    acceptor.async_accept(socket, boost::bind(&Server::new_message, this));
}

void Server::run() {
    try {
	    io_service.run();
    }     
    catch(std::exception& e) {
        std::cerr << e.what() << std::endl; 
    }
}

void Server::new_message() {
    std::cout << "Received!!" << std::endl;
}
