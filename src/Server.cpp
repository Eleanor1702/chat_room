#include "../header/Server.h"

Server::Server() : acceptor(io_service, boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(), PORT_NUMBER)) {
    prepare_next_connection();
}

void Server::run() {
    try {
	    io_service.run();
    }     
    catch(std::exception& e) {
        std::cerr << e.what() << std::endl; 
    }
}

void Server::prepare_next_connection() {
    boost::shared_ptr<Connection> conn_ptr = boost::shared_ptr<Connection>(new Connection(acceptor.get_io_service()));

    acceptor.async_accept(conn_ptr->get_socket(), boost::bind(&Server::incoming_connection, this, conn_ptr, boost::asio::placeholders::error));
}

void Server::incoming_connection(boost::shared_ptr<Connection> conn_ptr, const boost::system::error_code& error) {
    if (!error) {
        conn_ptr->on_connect();
    }

    prepare_next_connection();
}
