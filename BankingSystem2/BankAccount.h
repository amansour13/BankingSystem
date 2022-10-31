#pragma once
#include <string>
#include <iostream>
#include "Client.h"


using namespace std;
class BankAccount
{
protected:
    string accountID;
    double balance;
    Client ptrClient;
    // I don't really understand the association well so things are quite missy here.
public:
    bool vld = false;
    BankAccount();
    BankAccount(double bal);
    double deposit(double balance);
    double withdraw(double balance);
    void getBankAccountInfo();

};

