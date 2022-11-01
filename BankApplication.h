#ifndef BANKAPPLICATION_H
#define BANKAPPLICATION_H
#include <iostream>
#include <string>
#include <map>
#include "BankAccount.h"
#include "SavingsBankAccount.h"
#include "Client.h"

class BankApplication
{
       
public:
    std::map<Client, BankAccount> listOfClients;
    BankApplication();
    bool add_new_account();
    void printList();
    void semiAssociation();
};


#endif // BANKAPPLICATION_H
