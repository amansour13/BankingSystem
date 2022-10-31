#pragma once
#include <string>
#include "BankAccount.h"
using namespace std;

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
    //BankAccount getPointer();
    void getClientInfo();

};

