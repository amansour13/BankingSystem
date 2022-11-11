#include "../New folder/BankApplication.h"


BankApplication::BankApplication()
{
    std::string choice;


}

bool BankApplication::add_new_account()
{
    Client client ;
    bool valid = client.vld;

    for (; ; )
    {
        std::string choice = "";
        std::cout << "Enter 1 to create a basic account and 2 to saving-type accound ==>";      std::cin >> choice;

        if (choice == "1")
        {
            double balance = 0;
            std::cout << "Enter the balance ==>";   std::cin >> balance;
            BankAccount BBA(balance);

            BBA.incID();
            listOfClientsBA.push_back(make_pair( client, BBA ));


            return true;
        }

        else if (choice == "2")
        {
            string opt;
            double balance, minBal = 1000;
            std::cout << "press 1 to enter your minimum balance or any other character to set the default to 1000 L.E. ==>"; std::cin >> opt;

            if (opt == "1")
            {
                std::cout << "Enter the minimum balance ==>"; std::cin >> minBal;

            }

            std::cout << "Enter the balance ==>"; std::cin >> balance;
            while (minBal > balance){
                std::cout << "invalid input: actual balance must be > minimum balance.\nEnter the minimum balance ==>"; std::cin >> balance;
            }

            SavingBankAccount SBA(balance, minBal);

            SBA.incID();
            listOfClientsSBA.push_back(make_pair( client, SBA ));


            return valid;
        }

    }
    return true;
}

void BankApplication::printList()
{
    // print list of all basic bank account
    for (int i = 0 ; i < listOfClientsBA.size(); i++)
    {
        listOfClientsBA[i].first.getClientInfo();
        listOfClientsBA[i].second.getBankAccountInfo();
        cout << '\n';
    }

    // print list of all saving bank accounts
    for (int i = 0 ; i < listOfClientsSBA.size(); i++)
    {
        listOfClientsSBA[i].first.getClientInfo();
        listOfClientsSBA[i].second.getBankAccountInfo();
        cout << '\n';
    }
}

void BankApplication:: run_application(){
    for (; ; )
    {
        std::string choice = "";

        std::cout << "\nWelcome to FCAI Banking System\n";
        std::cout << "1. Create a New Account\n";
        std::cout << "2. list of Clients and Accounts\n";
        std::cout << "3. Withdraw money\n";
        std::cout << "4. Deposit money\n";
        std::cout << "0. Exit\n";

        std::cin >> choice;

        if (choice == "1")
            add_new_account();

        else if (choice == "2")
            printList();
        // withdraw option
        else if (choice == "3")
        {
            //here I will just close the program cause I don't feel like doing a while loop till he enters the right id.
            string id;
            std::cout << "Enter you account ID : "; cin >> id;
            bool vld = false;
            // check for id in BA vector
            for (int i = 0 ; i < listOfClientsBA.size(); i++)
            {
                string chk = listOfClientsBA[i].second.getID();
                if (chk == id)
                {
                    vld = true;
                    double money;
                    std::cout << "Enter the money that you want to withdraw\n"; std::cin >> money; // we can also make a defense here but I want to work first.
                    listOfClientsBA[i].second.withdraw(money);
                }
            }
            // check for id in SBA vector if not found in BA
            if (!vld)
            {
                for (int i = 0 ; i < listOfClientsSBA.size(); i++)
                {
                    string chk = listOfClientsSBA[i].second.getID();
                    if (chk == id)
                    {
                        vld = true;
                        double money;
                        std::cout << "Enter the money that you want to withdraw\n"; std::cin >> money; // we can also make a defense here but I want to work first.
                        listOfClientsSBA[i].second.withdraw(money);
                    }
                }
            }
            // not found
            if (!vld)
            {
                std::cout << "Invalid ID";
                continue;
            }
        }
        // deposit option
        else if (choice == "4")
        {
            string id;
            std::cout << "Enter you account ID : "; cin >> id;
            bool vld = false;
            // check for id in BA vector
            for (int i = 0 ; i < listOfClientsBA.size(); i++)
            {
                string chk = listOfClientsBA[i].second.getID();
                if (chk == id)
                {
                    vld = true;
                    double money;
                    std::cout << "Enter the money that you want to deposit\n"; std::cin >> money;
                    listOfClientsBA[i].second.deposit(money);
                }
            }
            // check for id in SBA vector if not found in BA
            if (!vld)
            {
              for (int i = 0 ; i < listOfClientsSBA.size(); i++)
                {
                    string chk = listOfClientsSBA[i].second.getID();
                    if (chk == id)
                    {
                        vld = true;
                        double money;
                        std::cout << "Enter the money that you want to deposit\n"; std::cin >> money;
                        listOfClientsSBA[i].second.deposit(money);
                    }
                }
            }
            // not found
            if (!vld)
            {
                std::cout << "Invalid ID ";
                continue;
            }

        }

        else if (choice == "0")
            exit(1);

        else
            std::cout << "Enter a valid input \n";

    }

}
