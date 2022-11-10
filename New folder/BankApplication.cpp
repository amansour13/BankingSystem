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
            listOfClients.push_back(make_pair( client, BBA ));


            return true;
        }

        else if (choice == "2")
        {
            double balance;
            std::cout << "Enter the balance ==>"; std::cin >> balance;
            SavingBankAccount SBA(balance);

            SBA.incID();
            listOfClients.push_back(make_pair( client, SBA ));


            return valid;
        }

    }
    return true;
}

void BankApplication::printList()
{
    for (int i = 0 ; i < listOfClients.size(); i++)
    {
        listOfClients[i].first.getClientInfo();
        listOfClients[i].second.getBankAccountInfo();
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

        else if (choice == "3")
        {
            //here I will just close the program cause I don't feel like doing a while loop till he enters the right id.
            string id;
            std::cout << "Enter you account ID : "; cin >> id;
            bool vld = false;
            for (int i = 0 ; i < listOfClients.size(); i++)
            {
                string chk = listOfClients[i].second.getID();
                if (chk == id)
                {
                    vld = true;
                    double money;
                    std::cout << "Enter the money that you want to withdraw\n"; std::cin >> money; // we can also make a defense here but I want to work first.
                    listOfClients[i].second.withdraw(money);
                }
            }
            if (!vld)
            {
                std::cout << "Invalid ID";
                continue;
            }
        }

        else if (choice == "4")
        {
            string id;
            std::cout << "Enter you account ID : "; cin >> id;
            bool vld = false;

            for (int i = 0 ; i < listOfClients.size(); i++)
            {
                string chk = listOfClients[i].second.getID();
                if (chk == id)
                {
                    vld = true;
                    double money;
                    std::cout << "Enter the money that you want to deposit\n"; std::cin >> money;
                    listOfClients[i].second.deposit(money);
                }
            }
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
