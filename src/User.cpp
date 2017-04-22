#include "../header/User.h"
#include <iostream>
#include <boost/algorithm/string.hpp>

User::User() {     //constructor

}

void User::req_name() {
    std::cout <<"Bitte Username eingeben maximal 20 Zeichen" << std::endl;
    std::cout << "Username: ";
    std::getline (std::cin, this->username);
    boost::trim(this->username);

    while(this->username.size() > 20 || this->username.size() == 0) {
        std::cout <<"Error! Bitte 20 Zeichen" << std::endl;
        std::cout <<"Bitte Username eingeben (maximal 20 Zeichen)" << std::endl;
        std::cout << "Username: ";
        std::getline (std::cin, this->username);
        boost::trim(this->username);
    }
}

void User::req_server_credentials() {
    std::cout <<"Bitte IP Adresse eingeben" << std::endl;
    std::cout <<"IP: ";
    std::getline (std::cin, this->server_ip);
    boost::trim(this->server_ip);

    while(this->server_ip.size() < 7 || this->server_ip.size() > 12 || this->server_ip.size() == 0) {
        std::cout <<"Error! Bitte eine gültige IP eingeben" << std::endl;
        std::cout <<"Bitte IP Adresse eingeben" << std::endl;
        std::cout << "IP: ";
        std::getline (std::cin, this->server_ip);
        boost::trim(this->server_ip);
    }

    std::cout <<"Bitte den Port eingeben" << std::endl;
    std::cout <<"Port: ";
    std::getline (std::cin, this->server_port);
    boost::trim(this->server_port);

    while(this->server_port.size() > 5 || this->server_port.size() == 0) {
        std::cout <<"Error! Bitte eine gültige Port eingeben" << std::endl;
        std::cout <<"Bitte den Port eingeben" << std::endl;
        std::cout << "Port: ";
        std::getline (std::cin, this->server_port);
        boost::trim(this->server_port);
    }
}

void User::chat() {
    std::cout <<"Welcome to ChatRoom..." << std::endl;
    std::getline (std::cin, this->msg);

    while(this->msg != ".exit") {
        std::getline(std::cin, this->msg);
    }

    exit(0);
    //IP,Port,username löschen von liste
}