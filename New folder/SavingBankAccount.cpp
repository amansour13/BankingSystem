
#include "../New folder/SavingBankAccount.h"

SavingBankAccount::SavingBankAccount(double x)
{
    if (x >= minimumBalance)
    {
        balance = x;
    }
    else
        balance = minimumBalance;

    accountType = "SAVING";
}

void SavingBankAccount::deposit(double x)
{
    if (x < 100)
    {
        cout << "You have to at least add 100 pounds\n";
        return;
    }

    minimumBalance += x;
}

void SavingBankAccount::withdraw(double x)
{
    if (minimumBalance >= x)
        minimumBalance -= x;
    else
    {
        cout << "You are balance isn't sufficient \n";
        return;
    }
}










