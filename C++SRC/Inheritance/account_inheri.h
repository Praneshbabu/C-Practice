#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include<iostream>
#include<string>
#include<cstring>

class Accountt{

public:
double Balance;
std::string Name;

   void deposite(double amount);
    void withdraw(double amount);
    Accountt();
    ~Accountt();

};
//  //constructor
    Accountt::Accountt()
    :Balance{0.0}, Name{"Random Account"}{

      }           
//destructor
     Accountt::~Accountt(){

     }

//Implementing Functions
void Accountt::deposite(double amount){
    std::cout<<"Account deposition is called with"<<amount<<std::endl;

}
void Accountt::withdraw(double amount){
    std::cout<<"Account Withdrawal called for the amount"<<amount<<std::endl;
}
#endif // _ACCOUNT_H_
