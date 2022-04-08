#include<iostream>
#include<string>
using namespace std;
int main(){
    string alpahbet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"ijklmnopabcdxyzqrstuvefghzEFGHLMOPQRABCDIJKWXYZSTUVN"};
    string secret_message{};
    string encrypted_message{};
    cout<<"Please Enter Your Secret Message to be Delivered\n";
    getline(cin,secret_message);
    cout<<"Processing Please Wait...\n";
    for (char c:secret_message){
        size_t position = alpahbet.find(c);
        if (position != string::npos){
            char new_char{key.at(position)  };
            encrypted_message +=new_char;
        }else{
            encrypted_message +=c;
        }
    }

    cout<<"\n Your Encrypted Message is "<<encrypted_message<<'\n';
    cout<<endl;
    return 0;
}