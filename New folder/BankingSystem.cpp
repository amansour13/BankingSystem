#include <iostream>
#include <string>
#include <map>
#include <regex>
#include "BankApplication.h"

using namespace std;


int main()
{
    BankApplication test;
    for (; ; )
    {
        std::string choice = "";

        std::cout << "Welcome to FCAI Banking System\n";
        std::cout << "1. Create a New Account\n";
        std::cout << "2. list of Clients and Accounts\n";
        std::cout << "3. Withdraw money\n";
        std::cout << "4. Deposit money\n";
        std::cout << "0. Exit\n";

        std::cin >> choice;

        if (choice == "1")
            test.add_new_account();

        else if (choice == "2")
            test.printList();

        else if (choice == "3")
        {
            //here I will just close the program cause I don't feel like doing a while loop till he enters the right id.
            std::string id;
            std::cout << "Enter you account ID : "; cin >> id;
            bool vld = false;
            for (auto it : test.listOfClients)
            {
                std::string chk = it.second.getID();
                if (chk == id)
                {
                    vld = true;
                    double money;
                    std::cout << "Enter the money that you want to withdraw\n"; std::cin >> money; // we can also make a defense here but I want to work first.
                    it.second.withdraw(money);
                }
            }
            if (!vld)
            {
                std::cout << "Invalid ID";
                exit(1);  // we can modify this one to return it to the main list I guess that would happne if I just remove the exit.
            }
        }

        else if (choice == "4")
        {
            std::string id;
            std::cout << "Enter you account ID : "; cin >> id;
            bool vld = false;
            for (auto it : test.listOfClients)
            {
                std::string chk = it.second.getID();
                if (chk == id)
                {
                    vld = true;
                    double money;
                    std::cout << "Enter the money that you want to deposit\n"; std::cin >> money;
                    it.second.deposit(money);
                }
            }
            if (!vld)
            {
                std::cout << "Invalid ID ";
                exit(1);
            }

        }

        else if (choice == "0")
            exit(1);

        else
            std::cout << "Enter a valid input \n";

    }
}

/*
I'm thinking about this idea where if he already entered the id before and since this is not a closed loop till he enters the 0
so we able to till him continue you've already been registered.
but I guess it just a waste of time
*/
