#include<iostream>
#include"Account.h"


using namespace std;
int main(){

    Account pranesh_account;
    pranesh_account.set_name("Pranesh's Account");
    pranesh_account.set_balance(1000.0);

    if (pranesh_account.deposite(200.0))
    cout<< "Deposite ok"<<endl; 
    else
    cout<<"Deposite not allower"<<endl;
    if (pranesh_account.withdraw(500))
    cout<<"withdral Ok"<<endl;
    else
    cout<<"withdrawal not possible"<<endl;

    return 0;
}