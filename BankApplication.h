#ifndef BANKAPPLICATION_H
#define BANKAPPLICATION_H
#include <iostream>
#include <string>
#include <map>

class BankApplication
{

    private:
       map<BankAccount, Client> listOfClients;
    public:
        BankApplication();
        bool add_new_account();
        virtual ~BankApplication();


};


#endif // BANKAPPLICATION_H
