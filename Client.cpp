#include<iostream>
#include<regex>

#include "Client.h"

Client::Client()
{
    //ctor
}

Client::~Client()
{
    //dtor
    // delete pointer of bankaccount
}

Client::Client()
{
    std::string name    = "";
    std::string address = "";
    std::string phone   = "";

    std::cout << "Enter your name ==> ";     getline(std::cin >> std::ws, name);   std::cout << std::endl;
    std::cout << "Enter your address ==>";   getline(std::cin >> std::ws, address);std::cout << std::endl;

    std::cout << "Enter you phone ==> ";     std::cin >> phone;               std::cout << std::endl;

    std::regex validPhone("[0][1][0-25][0-9]{8}");
    bool valid = regex_match(phone, validPhone);

    if(valid)
        vld = true;

    name = name;
    address = address;
    phone = phone;
}

void Client::getClientInfo()
{
    std::cout << "--------------------------" << name << "----------------------\n";
    std::cout << "Address: " << address <<"     Phone: " << phone << std::endl;
}