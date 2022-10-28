#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
class Client
{

    private:
        string name;
        string address;
        string phone;
        BankAccount * ptrAccount;
    public:
        Client();
        virtual ~Client();

};

#endif // CLIENT_H
