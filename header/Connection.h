#ifndef C_CONNECTION_H
#define C_CONNECTION_H

#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <boost/asio.hpp>
#include <iostream>

class Connection : public boost::enable_shared_from_this<Connection> {
public:
    Connection(boost::asio::io_service& io_service);
    boost::asio::ip::tcp::socket& get_socket();
    void on_connect();

private:
    boost::asio::ip::tcp::socket socket;
};
#endif //C_CONNECTION_H
