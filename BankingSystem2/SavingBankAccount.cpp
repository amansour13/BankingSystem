#include "SavingBankAccount.h"

SavingsBankAccount::SavingsBankAccount(double bal)
{
    if (bal < 1000)
        cout << "The minimum about to open the account is 1000\n";
    else
    {
        minimumBalance = bal;
        vld = true;
    }
}

