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
    //static int ID = 0;                      //---------------------------->>>>>>>>>>>>> dont care now
}


void BankAccount::set_accountID(string id) {              //**********************************************************  new update
    this->accountID = id;
}                                                         

string BankAccount::get_accountID() {
    return accountID;                                      //**********************************************************  new update
}

void BankAccount::set_balance(double bal) {                 //**********************************************************  new update    
    this->balance = bal;
}

double BankAccount::get_balance() {                        //**********************************************************  new update
    return balance;
}

//void BankAccount::getBankAccountInfo()
//{
//    std::cout << "Account ID: " << accountID << std::endl;          //**********************************************************  dont care
//    std::cout << "Balance: " << balance << std::endl;
//}


double BankAccount::deposit(double bal)
{
    balance += bal;
    cout << "Successfully *_*" << endl;
    return balance;
}

double BankAccount::withdraw(double bal)
{
    if (bal <= balance) {
        balance -= bal;
        cout << "Thank you *_*" << endl;
        return balance;
   }
    else {
        cout << "Sorry. This is more than what you can withdraw D:" << endl;
        return 0.0;
    }

}



