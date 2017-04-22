#ifndef C_SERVER_H
#define C_SERVER_H

#include <boost/asio/io_service.hpp>
#include <iostream>

class Server {
public:
    Server();       //constructor
    void run();

private:
    boost::asio::io_service io_service;
};
#endif //C_SERVER_H
