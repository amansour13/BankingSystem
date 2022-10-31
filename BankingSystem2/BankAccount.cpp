#include "BankAccount.h"
BankAccount::BankAccount()
{
    //here we will make the random ID and then we return that this was a valid or not cause in the bankapplication both the client and the 
    // bank account has to be valid.
    // but at the same time here we need to check if it was saving cause if saving we'll do the minimum condition.
    //Here as  I can see we should ask for the random id when he decide whether it's a saving account or a basic.
    balance = 0;


}
BankAccount::BankAccount(double bal)
{
    balance = bal;
    static int ID = 0;
}
void BankAccount::getBankAccountInfo()
{
    std::cout << "Account ID: " << accountID << std::endl;
    std::cout << "Balance: " << balance << std::endl;
}
