#include "Client.h"
#include <regex>

Client::Client()
{
    string name = "";
    string address = "";
    string phone = "";

    cout << "Enter your name ==> ";     getline(cin >> ws, name);    cout <<  endl;
     cout << "Enter your address ==>";   getline(cin >> ws, address);  cout <<  endl;

     cout << "Enter you phone ==> ";      cin >> phone;                cout <<  endl;

     regex validPhone("[0][1][0-25][0-9]{8}");
    bool valid = regex_match(phone, validPhone);

    if (valid)
        vld = true;

    name = name;
    address = address;
    phone = phone;
}


//BankAccount Client::getPointer()
//{
//    return this->bankAccount;
//}

void Client::getClientInfo()
{
     cout << "--------------------------" << name << "----------------------\n";
     cout << "Address: " << address << "     Phone: " << phone << endl;
}
