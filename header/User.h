#include <string>
#ifndef C_USER_H
#define C_USER_H

class User {
public:
    User();     //constructor
    void req_name();
    void req_server_credentials();
private:
    std::string username;
    std::string server_ip;
    std::string server_port;
};

#endif //C_USER_H
