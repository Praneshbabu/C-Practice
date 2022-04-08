#include<iostream>
#include"account_inheri.h"
#include"savings_acc.h"
int main(){
    std::cout<<std::endl;
    std::cout<<"************Acc Account************"<<std::endl;
    Accountt acc{};
    acc.deposite(1000.0);
    acc.withdraw(500.0);
    std::cout<<std::endl;
std::cout<<"************p_Acc Account************"<<std::endl;
Accountt*p_acc{nullptr};
    p_acc=new Accountt();
    p_acc->deposite(3000);
    p_acc->withdraw(1500);
    std::cout<<std::endl;
std::cout<<"************Savings_Acc Account************"<<std::endl;
    Savings_Account sav_acc{};
    sav_acc.deposite(2000.0);
    sav_acc.withdraw(1500.0);
}