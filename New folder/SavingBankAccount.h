#ifndef SAVINGSBANKACCOUNT_H
#define SAVINGSBANKACCOUNT_H

#include <iostream>
#include <string>
#include "../New folder/BankAccount.h"
using namespace std;

class SavingBankAccount : public BankAccount
{
private:
    double minimumBalance;
public:
    SavingBankAccount(double x, double minBal = 1000);
    void deposit(double x);
    void withdraw(double x);
};

#endif // SAVINGSBANKACCOUNT_H
