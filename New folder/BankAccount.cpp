#include "../New folder/BankAccount.h"


int BankAccount::IDctr = 0;


BankAccount::BankAccount()
{
    accountID = "FCAI-" + to_string(IDctr);
    balance = 0;
    std::cout << "An account was created with ID " << accountID << " and Starting Balance " << balance << " L.E. (\"0\" if it is Saving account)";
}

BankAccount::BankAccount(double bal)
{
    accountID = "FCAI-" + to_string(IDctr);
    balance = bal;
    std::cout << "An account was created with ID " << accountID << " and Starting Balance " << balance << " L.E.";
}

void BankAccount::deposit(double x)
{
    balance += x;
    std::cout << x << " L.E. has been added to your account.";
}

void BankAccount::withdraw(double x)
{
    if (balance >= x){balance -= x; std::cout << x << " L.E. has been withdrawn from your account.";}
    else{std::cout << "You are balance isn't sufficient \n"; return;}
}

void BankAccount::getBankAccountInfo()
{
    std::cout << "Account ID: " << accountID << std::endl;
    std::cout << "Account Type: " << accountType << std::endl;
    std::cout << "Balance: " << balance << std::endl;
}

void BankAccount::incID()
{
    IDctr++;
}




