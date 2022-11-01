#ifndef SAVINGSBANKACCOUNT_H
#define SAVINGSBANKACCOUNT_H

#include <iostream>
#include <string>
#include "SavingsBankAccount.h"
#include "BankAccount.h"

class SavingsBankAccount: public BankAccount
{
    private:
        double minimumBalance = 1000.0;
    public:
        SavingsBankAccount(double);
        virtual ~SavingsBankAccount();
        void deposit(double){}
        void withdraw(double){}
    //Will the constructor call the parent constructor I don't want that cause I want to make a new attribute here which is the minbalance.


};

#endif // SAVINGSBANKACCOUNT_H
