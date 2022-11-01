#include "BankAccount.h"

BankAccount::BankAccount()
{
    balance = 0;   
}

BankAccount::BankAccount(double bal)
{
    balance = bal;   
}

 void BankAccount::deposit(double x)
{
    balance +=x;
}

void BankAccount::withdraw(double x)
{
    if(balance <= x)
        balance -= x;
    else
    {
        std::cout << "You are balance isn't sufficient \n";
        return;
    }
}

void BankAccount::getBankAccountInfo()
{
    std::cout << "Account ID: " << accountID << std::endl;
    std::cout << "Balance: "    << balance   << std::endl;
}