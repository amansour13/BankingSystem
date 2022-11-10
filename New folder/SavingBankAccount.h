#ifndef SAVINGSBANKACCOUNT_H
#define SAVINGSBANKACCOUNT_H

#include <iostream>
#include <string>
#include "../New folder/BankAccount.h"
using namespace std;

class SavingBankAccount : public BankAccount
{
private:
    double minimumBalance = 1000.0;
public:
    SavingBankAccount(double x);
    void deposit(double x);
    void withdraw(double x);
};

#endif // SAVINGSBANKACCOUNT_H
