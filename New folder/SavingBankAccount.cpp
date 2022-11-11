
#include "../New folder/SavingBankAccount.h"

SavingBankAccount::SavingBankAccount(double x, double minBal)
{
    if (x >= minBal)
    {
        balance = x;
        minimumBalance = minBal;
        cout << "An account was created with ID " << accountID << " and Starting Balance " << balance << " L.E.\n";
        cout << "and minimum Balance " << minimumBalance << " L.E.";
    }
    else
        cout << "the amount you you entered is less than the minimum balance for this account which = " << minBal;

    accountType = "SAVING";
}

void SavingBankAccount::deposit(double x)
{
    if (x < 100)
    {
        cout << "You have to at least add 100 pounds\n";
        return;
    }

    balance += x;
    cout << x << " L.E. has been added to your account.";
}

void SavingBankAccount::withdraw(double x)
{
    if (x <= (balance - minimumBalance)){
        balance -= x;
        cout << x << " L.E. has been withdrawn from your account.";
    }
    else
    {
        cout << "You are balance isn't sufficient \n";
        return;
    }
}










