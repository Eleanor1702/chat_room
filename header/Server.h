#ifndef C_SERVER_H
#define C_SERVER_H

#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <iostream>

#define PORT_NUMBER 8000

class Server {
public:
    Server();       //constructor
    void run();

private:
    void new_message();

    boost::asio::io_service io_service;
    boost::asio::ip::tcp::acceptor acceptor;
    boost::asio::ip::tcp::socket socket;
};
#endif //C_SERVER_H
