﻿#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

class bank
{
    char name[100],add[100],y;
    int balance, amount;
public:
    void open_account ();
    void deposit_money();
    void withdraw_money ();
    void display_account();
};
void bank::open_account()
{
    system("cls");
    cout<<"Enter your full name ::";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your address ::";
    cin.ignore();
    cin.getline(add,100);
    cout<<"What type of account would you like to open, Saving (s) or Current (c)?";
    cin>>y;
    cout<<"Enter amount for deposit ::";
    cin>>balance;
    cout<<"Your account is created ";

}
void bank::deposit_money()
{
    int a ;
    cout<<"Enter how much money you want to deposit::";
    cin >> a;
    balance += a;
    cout << "Your updated balance: " << balance << endl;
}
void bank::display_account()
{
    cout<<"Enter the name ::"<<name<<endl;
    cout<<"Enter your address ::"<<add<<endl;
    cout<<"Type of account that you want to open ::"<<y<<endl;
    cout<<"Amount you deposit ::"<<balance<<endl;

}
void bank::withdraw_money()
{
    cout<<"Withdraw ::";
    cout<<"Enter your amount for withdrawing ";
    cin>>amount;
    if (amount > balance) {
        std::cout << "Insufficient funds. You currently have " << balance << std::endl;
    } else {
    balance=balance-amount;
    cout<<"Total amount left ::"<<balance;
    }
}

int main()
{
    int ch,x,n;
    bank obj;
    system("cls");
    system("color 0A");
    do
    {
    cout<<"01)Open account \n";
    cout<<"02)Deposit money \n";
    cout<<"03)Withdraw money \n";
    cout<<"04)Display account\n";
    cout<<"05)Exit\n";
    cout<<"Please select an option ";
    cin>>ch;

    switch(ch)
    {
        case 1:"01)Open account \n";
        obj.open_account ();
        break;
        case 2:"02)Deposit money \n";
        obj.deposit_money();
        break;
        case 3:"03)Withdraw money \n";
        obj.withdraw_money ();
        break;
        case 4:"04)Display account\n";
        obj.display_account();
        break;
        case 5:
            if(ch==5)
            {
               cout<< "exit";
            }
        default:
            cout<<"Please try again ";

    }
    cout<<"\n If you want to move on, please press::y\n";
    cout<<"If you want to exit then please press:: N ";
    x=getch();
    if(x=='n' || x=='N')
    cout<<"exit";
    }
    while (x=='y' || x=='Y');


 getch();
 return 0;




}