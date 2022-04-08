#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Team{
public:
    string names;
    int player_num;
    int health;

    void talk(string text_to_say){cout<<names<<"says"<<text_to_say<<endl;}
    bool is_dest();
};
int main(){
    Team blue;
    blue.names="john";
    Team ravi;

    ravi.health=25;
    blue.health=75;
    
    ravi.player_num =19;
    blue.player_num =99;
    blue.talk("Hello People");
    Team*red=new Team;
    (*red).names="pranesh";
    (*red).health=151;
    (*red).player_num=35
    ;
    red->talk("Whats up");
    
    return 0;
}