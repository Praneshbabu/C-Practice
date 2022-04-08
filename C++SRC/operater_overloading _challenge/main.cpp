#include<iostream>
#include"operator_overloading.h"
using namespace std;

int main(){
    cout<<boolalpha<<endl;
    Mystring a {"frank"};
    Mystring b {"frank"};
    
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    b="george";
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a>b)<<endl;
    Mystring s1{"FRANK"};
    s1=-s1;
    cout<<s1<<endl;
    s1=s1 + "******";
    cout<<s1<<endl;

    s1+= "-------";
    cout<<s1<<endl;
    


}