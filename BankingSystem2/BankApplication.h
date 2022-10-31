#pragma once
#include "BankAccount.h"
#include "Client.h"
#include <map>


class BankApplication
{
private:
    map<BankAccount, Client> listOfClients;
public:
    BankApplication();
    bool add_new_account();
    void printList();
};

