#include "BankApplication.h"
#include "SavingBankAccount.h"



BankApplication::BankApplication()
{
    string choice;
    for (; ; )
    {
        cout << "Welcome to FCAI Banking System\n";
        cout << "1. Create a New Account\n";
        cout << "2. list of Clients and Accounts\n";
        cout << "3. Withdraw money\n";
        cout << "4. Deposit money\n";
        cout << "0. Exit\n";

        cin >> choice;

        if (choice == "1")
            add_new_account();
        else if (choice == "2")
            printList();
        // else if(choice == "3")
        //     withdrawMoney();
        // else if(choice == "4")
        //     depositMoney();=
        else if (choice == "0")
            break;
        else
            cout << "why are you stupid enter a valid input this app is not for dumb people\n";

    }


}



bool BankApplication::add_new_account()
{
    Client client = Client(); // else if I say client() I can't access anything.
    bool valid1 = client.vld;
    if (!valid1)
        return false;
    for (; ; )
    {
        string choice = "";
        cout << "Enter 1 to create a basic account and 2 to saving-type accound ==>";
        cin >> choice;
        if (choice == "1")
        {
            double balance = 0;
            BankAccount BBA;
             cout << "Enter the balance ==>";    cin >> balance;

            if (balance >= 0)
                BBA = BankAccount(balance);
            else
            {
                BBA = BankAccount();
            }

            valid1 = BBA.vld;
            break;
        }
        else if (choice == "2")
        {
            double balance;
             cout << "Enter the balance ==>";  cin >> balance;
            SavingsBankAccount SBA(balance);
            valid1 = SBA.vld;
            break;
        }

        return valid1;

    }
    BankAccount bankAcc();
}
void BankApplication::printList()
{
    for (auto it : listOfClients)
    {
        Client cl = it.second;
        BankAccount bankAcc = it.first;

        cl.getClientInfo();
        bankAcc.getBankAccountInfo();

         cout <<  endl;
    }
}
