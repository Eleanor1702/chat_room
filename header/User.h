#include <string>
#ifndef C_USER_H
#define C_USER_H

class User {
public:
    User();     //constructor
    void req_name();
private:
    std::string username;
};

#endif //C_USER_H
