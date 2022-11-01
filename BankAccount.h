#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>

class BankAccount
{
    std::string accountID;
    double balance;
public:
        
    Client* prtClient;
    bool vld = false;

    BankAccount();
    BankAccount(double);
    virtual void deposit(double balance);
    virtual void withdraw(double balance);
    void set();
    void getBankAccountInfo();
};

#endif // BANKACCOUNT_H
