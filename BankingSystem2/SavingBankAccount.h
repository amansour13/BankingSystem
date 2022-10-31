#pragma once
#include "BankAccount.h"

class SavingsBankAccount :public BankAccount
{
private:
    double minimumBalance = 1000;
public:
    SavingsBankAccount(double);

};