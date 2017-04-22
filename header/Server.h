#ifndef C_SERVER_H
#define C_SERVER_H

#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <iostream>
#include <boost/shared_ptr.hpp>

#include "../header/Connection.h"

#define PORT_NUMBER 8000

class Server {
public:
    Server();       //constructor
    void run();

private:
    void prepare_next_connection();
    void incoming_connection(boost::shared_ptr<Connection> conn_ptr, const boost::system::error_code& error);

    boost::asio::io_service io_service;
    boost::asio::ip::tcp::acceptor acceptor;
};
#endif //C_SERVER_H
