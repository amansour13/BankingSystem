//#include "BankApplication.h"
//#include "BankAccount.h"
//#include "Client.h"
//#include "SavingsBankAccount.h"
#include <iostream>
#include <string>
#include <map>
#include <regex>

using namespace std;


class BankAccount
{
    private:
        string accountID;
        double balance;
        Client ptrClient;
    public:
        bool vld = false;
        BankAccount();
        double deposit(double balance);
        double withdraw(double balance);
        void getBankAccountInfo();

};

BankAccount::BankAccount()
{
    //here we will make the random ID and then we return that this was a valid or not cause in the bankapplication both the client and the 
    // bank account has to be valid.
    // but at the same time here we need to check if it was saving cause if saving we'll do the minimum condition.
}
void BankAccount::getBankAccountInfo()
{
    std::cout << "Account ID: " << accountID << std::endl;
    std::cout << "Balance: "    << balance   << std::endl;
}

class Client
{

    private:
        string name;
        string address;
        string phone;
        BankAccount bankAccount;
    public:
        bool vld = false;
        Client();
        BankAccount getPointer();
        void getClientInfo();

};

Client::Client()
{
    string name    = "";
    string address = "";
    string phone   = "";

    std::cout << "Enter your name ==> ";     getline(cin >> ws, name);   std::cout << std::endl;
    std::cout << "Enter your address ==>";   getline(cin >> ws, address);std::cout << std::endl;

    std::cout << "Enter you phone ==> ";     std::cin >> phone;               std::cout << std::endl;

    std::regex validPhone("[0][1][0-25][0-9]{8}");
    bool valid = regex_match(phone, validPhone);

    if(valid)
        vld = true;

    name = name;
    address = address;
    phone = phone;
}

BankAccount Client::getPointer()
{
    return this->bankAccount;
}

void Client::getClientInfo()
{
    std::cout << "--------------------------" << name << "----------------------\n";
    std::cout << "Address: " << address <<"     Phone: " << phone << std::endl;
}

class SavingsBankAccount:BankAccount
{
    private:
        double minimumBalance;
    public:
        SavingsBankAccount();

};

class BankApplication
{

    private:
       map<BankAccount, Client> listOfClients;
    public:
        BankApplication();
        bool add_new_account();
        void printList();
};

bool BankApplication::add_new_account()
{
    Client client = Client(); // else if I say client() I can't access anything.
    bool valid = client.vld;

    if(!valid)
        return false;
    //cause if something is wrong with the input of client then we won't make a new one and we'll do the same for the bank account.
    BankAccount bankAcc();
}
void BankApplication::printList()
{
    for(auto it : listOfClients)
    {
        Client cl = it.second;
        BankAccount bankAcc = it.first;

        cl.getClientInfo();
        bankAcc.getBankAccountInfo();
        
        std::cout << std::endl;
    }
}


int main()
{
    BankApplication test;
    return 0;
}


BankApplication::BankApplication()
{
    string choice;
    for(; ; ) 
    {  
        cout << "Welcome to FCAI Banking System\n";
        cout << "1. Create a New Account\n";
        cout << "2. list of Clients and Accounts\n";
        cout << "3. Withdraw money\n";
        cout << "4. Deposit money\n";
        cout << "0. Exit\n";

        cin >> choice;

        if(choice == "1")
            createNew();
        else if(choice == "2")
            printList();
        else if(choice == "3")
            withdrawMoney();
        else if(choice == "4")
            depositMoney();=
        else if(choice == "0")
            break;
        else
            cout << "why are you stupid enter a valid input this app is not for dumb people\n";

    }


}


//5 and 2 for me the alpha.
            //0 and 3 for mansour the clown.
            //1 and 4 for the last one that passed the interview.