#pragma once
#include <string>
#include "BankAccount.h"
#include "BankApplication.h"

using namespace std;

class Client
{
private:
    string name;
    string address;
    string phone;
    //BankAccount* bankAccount;
    BankApplication bankApp;
public:
    bool vld = false;
    Client();
    //Client* clientInfo(const string& name, const string& address, const string& phone);
    //BankAccount getPointer();
    void getClientInfo();

};

