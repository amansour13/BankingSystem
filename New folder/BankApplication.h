#ifndef BANKAPPLICATION_H
#define BANKAPPLICATION_H
#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include "../New folder/BankAccount.h"
#include "../New folder/SavingBankAccount.h"
#include "../New folder/Client.h"

class BankApplication
{
private:
    vector<pair<Client, BankAccount>> listOfClients;
public:
    BankApplication();
    bool add_new_account();
    void printList();
    void run_application();
};


#endif // BANKAPPLICATION_H
