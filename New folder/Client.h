#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
//#include "Client.h"

class Client
{
private:
    std::string name;
    std::string address;
    std::string phone;

public:
    bool vld = false;
    Client();
    void getClientInfo();
};

#endif // CLIENT_H
