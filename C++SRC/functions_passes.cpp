//Pass by Reference and Pass by Value example:
//Pass by reference
#include <iostream>
#include<string>
#include<vector>

using namespace std;

void pass_by_ref(int&num);
void pass_by_ref(string&s);
void pass_by_ref(vector<string>&v);
void pass_by_ref(const vector<string>&v); //constat vector

void pass_by_ref(int&num){
    num=1000;
}
void pass_by_ref(string&s){
    s="changed";
}
void pass_by_ref(vector<string>&v){
    v.clear();
}
void pass_by_ref(const vector<string>&v){
    for(auto s:v)
    cout<<s<<"";
    cout<<endl;
}
int main(){
    int num{10};
    int another_num{20};
    cout<<"num before passing reference"<<num<<endl;
    pass_by_ref(num);
     cout<<"Another num after passing reference"<<num<<endl;
     //*********************************//

     cout<<"num before passing reference"<<another_num<<endl;
    pass_by_ref(another_num);
     cout<<"Another num after passing reference"<<another_num<<endl;
     cout<<"********************************\n";
     //*******************************//
     string name{"PRANESH"};
     cout<<"String before passing reference "<<name<<endl;
    pass_by_ref(name);
     cout<<"String after passing reference "<<name<<endl;
     cout<<"**********************************\n";
     //******************************//

     vector<string> stooges{"Pranesh","Adam","Lewis"};
     cout<<"Name List before passing by reference : ";
     print_vector(stooges);
     pass_by_ref(stooges);
     cout<<"Name list after passing by reference";
     print_vector(stooges);
     cout<<'\n';
     return 0;



}