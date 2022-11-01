#pragma once
#include <string>
#include <iostream>
#include "Client.h"
#include "BankApplication.h"


using namespace std;
class BankAccount
{
protected:
    string accountID;
    double balance;
    Client client;             //**********************************************************  new update
    BankApplication app;        //**********************************************************  new update
   
public:
    bool vld = false;  
    BankAccount();
    BankAccount(double bal);
    double deposit(double bal);
    virtual double withdraw(double bal);         //**********************************************************  new update (virtual)
    //void getBankAccountInfo();    //---------------------------------------->>>>>>>>>>>>>>>>>>>>>>>> dont care

    void set_accountID(string id);     //**********************************************************  new update
    void set_balance(double bal);      //**********************************************************  new update
    string get_accountID();            //**********************************************************  new update
    double get_balance();              //**********************************************************  new update
};

