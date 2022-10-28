#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>

class BankAccount
{
    private:
        string accountID;
        double balance;
    public:
        BankAccount();
        double deposit(double balance);
        double withdraw(double balance);
        virtual ~BankAccount();


};

#endif // BANKACCOUNT_H
