#include<iostream>
using namespace std;
int main(){
    int *value_ptr{nullptr};
    int shock[]{20};
    value_ptr=shock;
    cout<<*value_ptr<<endl;
    return 0;
}