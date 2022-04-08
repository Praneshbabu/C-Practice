#include<iostream>
#include<string>
#include<cstring>
#include"account_inheri.h"

class Savings_Account:public Accountt
{
    public:
    double int_rate;

    //Functions
    void deposite(double amount);
    void withdraw(double amount);
Savings_Account();
~Savings_Account();
};
// //constructor
    Savings_Account::Savings_Account():int_rate{3.0}{

    }
//Destructor
    Savings_Account::~Savings_Account()
    {

    }

//Implementing functions
void Savings_Account::deposite(double amount){
    std::cout<<"Saving Account deposition is called with"<<amount<<std::endl;

}
void Savings_Account::withdraw(double amount){
    std::cout<<"Saving Withdrawal called for the amount"<<amount<<std::endl;
}