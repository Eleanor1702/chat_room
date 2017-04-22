#include "../header/Connection.h"

Connection::Connection(boost::asio::io_service& io_service) : socket(io_service) {
}

boost::asio::ip::tcp::socket& Connection::get_socket() {
    return socket;
}

void Connection::on_connect() {
    std::cout << "Received" << std::endl;
}
