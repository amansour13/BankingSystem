#pragma once
#include "BankAccount.h"

class SavingsBankAccount :public BankAccount
{
private:
    double const minimumBalance = 1000;
public:
    SavingsBankAccount(double bal);
    double withdraw(double bal);
    double debosit(double mount);
};