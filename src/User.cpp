#include "../header/User.h"
#include <iostream>
#include <boost/algorithm/string.hpp>

User::User() {     //constructor

}

void User::req_name() {
    std::cout <<"Bitte Username eingeben maximal 20 Zeichen" << std::endl;
    std::cout << "Username: ";
    std::getline (std::cin,this->username);
    boost::trim(this->username);

    while(this->username.size() > 20 || this->username.size() == 0) {
        std::cout <<"Error! Bitte 20 Zeichen" <<std::endl;
        std::cout <<"Bitte Username eingeben (maximal 20 Zeichen)" << std::endl;
        std::cout << "Username: ";
        std::getline (std::cin,this->username);
        boost::trim(this->username);
    }

    std::cout << this-> username << std::endl;
}