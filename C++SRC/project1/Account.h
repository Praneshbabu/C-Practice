#include<string>
using namespace std;

class Account{
    private:
    //Attributes
    string name;
    double balance;

    public:
    //Methods or functions
    void set_balance(double bal){balance=bal;}
    double get_balance(){return balance;}
    
    // function will be declared outside the class
    // function prototype is declared here
    void set_name(string n);
    string get_name();

    bool deposite(double amount);
    bool withdraw(double amount);
    
};

void Account::set_name(string n){
    name =n;
}
string Account::get_name(){
    return name;
}
bool Account::deposite(double amount){
    balance+=amount;
    return true;
}
bool Account::withdraw(double amount){
    if (balance-amount>0){
    balance-=amount;
    return true;
    }else{
        return false;
    }

}

