//#include "BankApplication.h"
//#include "BankAccount.h"
//#include "Client.h"
//#include "SavingsBankAccount.h"
#include <iostream>
#include <string>
#include <map>
#include <regex>
#include "BankApplication.h"

using namespace std;


int main()
{
    BankApplication test;
    for(; ; ) 
    {  
        std::string choice = "";

        std::cout << "Welcome to FCAI Banking System\n";
        std::cout << "1. Create a New Account\n";
        std::cout << "2. list of Clients and Accounts\n";
        std::cout << "3. Withdraw money\n";
        std::cout << "4. Deposit money\n";
        std::cout << "0. Exit\n";

        std::cin >> choice;

        if(choice == "1")
            test.add_new_account();
        else if(choice == "2")
            test.printList();
        else if(choice == "3")
        {
            double money;
            std::cout << "Enter the money that you want to withdraw\n"; std::cin >> money;
            /*
            I'm trying to access the last object cause there's nothing like a login so the last one will be the one that we currenly working at.
            */
            BankAccount acc = test.listOfClients[test.listOfClients.size() - 1];
            acc.withdraw(money);
        }
        else if(choice == "4")
        {
            double money;
            std::cout << "Enter the money that you want to withdraw\n"; std::cin >> money;

            BankAccount acc = test.listOfClients[test.listOfClients.size() - 1];
            acc.withdraw(money);
        }
        else if(choice == "0")
            break;
        else
            std::cout << "Enter a valid input \n";

    }
}
