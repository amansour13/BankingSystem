#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
class Client
{
    std::string name;
    std::string address; 
    std::string phone;
    
public:
    BankAccount* ptrBankAccount;
    bool vld = false;
    Client();
    void getClientInfo();

};

#endif // CLIENT_H
