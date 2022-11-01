#include "SavingsBankAccount.h"

SavingsBankAccount::SavingsBankAccount(double x) //I think it'll force to call the parent constructor if so we can just give the balance 0.
{
    if(x < minimumBalance)
            std::cout << "The minimum about to open the account is 1000\n";
        else
        {
            minimumBalance = x;
            vld = true;
        }
}

void SavingsBankAccount::deposit(double x)
{
    if( x < 100)
    {
        std::cout << "You have to atleast add 100 pounds\n";
        return;
    }

    minimumBalance += x;
}

void SavingsBankAccount::withdraw(double x)
{
    if(minimumBalance <= x)
        minimumBalance -= x;
    else
    {
        std::cout << "You are balance isn't sufficient \n";
        return;
    }
}
