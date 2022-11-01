#include "BankApplication.h"

BankApplication::BankApplication()
{
    std::string choice;

    
}


bool BankApplication::add_new_account()
{
    Client client = Client();
    bool valid = client.vld;

    if(!valid)
        return false;

    for(; ; )
    {
        std::string choice = "";
        std::cout << "Enter 1 to create a basic account and 2 to saving-type accound ==>";      std::cin >> choice;

        if(choice == "1")
        {
            double balance =0;
            BankAccount BBA;
            std::cout << "Enter the balance ==>";   std::cin >> balance;
            
            if(balance >= 0)
                BBA = BankAccount(balance);
            else 
            {
                BBA = BankAccount();
            }
                
            valid = BBA.vld;
            if(valid)
            {
                BBA.prtClient = &client;
                client.ptrBankAccount = &BBA;
                listOfClients.insert({client, BBA});
            }

            return valid;
        }

        else if (choice == "2")
        {
            double balance;
            std::cout << "Enter the balance ==>"; std::cin >> balance;
            SavingsBankAccount SBA(balance);

            valid = SBA.vld;

            if(valid)
            {
                SBA.prtClient = &client;
                client.ptrBankAccount = &SBA;
                listOfClients.insert({client, SBA});
            }

            return valid;
        }
    
    }
}

void BankApplication::printList()
{
    for(auto it : listOfClients)
    {
        Client cl = it.first;
        BankAccount bankAcc = it.second;

        cl.getClientInfo();
        bankAcc.getBankAccountInfo();
        
        std::cout << std::endl;
    }
}
