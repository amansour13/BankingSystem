#include<iostream>
#include<regex>

#include "../New folder/Client.h"
using namespace std;

Client::Client()
{
    string name;
    string address;
    string phone;

    cout << "\nEnter your name ==> ";
    getline(cin >> ws, name);
    cout << "\nEnter your address ==>";
    getline(cin >> ws, address);
    cout << "\nEnter you phone ==> ";
    cin >> phone;

    regex validPhone("[0][1][0-25][0-9]{8}");
    bool valid = regex_match(phone, validPhone);

    while (!valid){
        cout << "Invalid Phone...\nEnter you phone ==> ";
        cin >> phone;
        valid = regex_match(phone, validPhone);
    }

    vld = true;
    this -> name = name;
    this -> address = address;
    this -> phone = phone;
}

void Client::getClientInfo()
{
    cout << "-------------------------- " << name << " --------------------------\n";
    cout << "Address: " << address << "     Phone: " << phone << endl;
}
