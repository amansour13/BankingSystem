#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
protected:
    string accountID;
    static int IDctr;
    double balance;
    string accountType = "BASIC";
public:
    BankAccount();
    BankAccount(double bal);
    virtual void deposit(double x);
    virtual void withdraw(double x);
    void getBankAccountInfo();
    void incID();
    string getID(){return accountID;}
};

#endif // BANKACCOUNT_H
