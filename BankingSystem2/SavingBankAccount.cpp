#include "SavingBankAccount.h"

SavingsBankAccount::SavingsBankAccount(double bal):BankAccount(bal)
{
    if (bal < 1000)
        cout << "The minimum about to open the account is 1000\n";
    else
    {
        this->balance = bal - 1000;                                     //**********************************************************  new update
        vld = true;
    }
}


double SavingsBankAccount::withdraw(double bal)                  //**********************************************************  new update
{
    if (bal >= balance) {
        balance -= bal;
        cout << "Thank you *_*" << endl;
        return balance;
   }
    else {
        cout << "Sorry. This is more than what you can withdraw D:" << endl;
        return 0.0;
    }
}

double SavingsBankAccount::debosit(double mount)               //**********************************************************  new update
{
    if (mount >= 100) {
        balance += mount;
        cout << "Successfully *_*" << endl;
        return balance;
    }
    else {
        cout << "Sorry, you should debosit an amount of money at least 100 L.E." << endl;
        return 0.0;
    }
}












