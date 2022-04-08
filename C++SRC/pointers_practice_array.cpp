#include<iostream>
using namespace std;

// int manin(){
// int *int_ptr{nullptr};
// new int{10};

// int_ptr=new int;
// cout<<*int_ptr;


int main(){
int scores[]{100,200,300};
cout<<" the score is"<<scores<<endl;
cout<<endl;
//taking values out of memory using array subscript method
cout<<"the value of score one"<<scores[1]<<endl;
cout<<"the value of score two"<<scores[2]<<endl;
cout<<endl;

cout<<"what happens when i deference the scores"<<*scores<<endl;
int *scores_ptr{scores};
cout<<"without deferencing"<<scores_ptr<<endl;// address will come out
cout<<"after deferencing"<<*scores_ptr<<endl;//only first value will come out
cout<<endl;

//also another way to take values out[pointer subscript notation]
cout<<"taking values without deferencing"<<scores_ptr[0]<<endl;
cout<<"taking values without deferencing"<<scores_ptr[1]<<endl;
cout<<endl;

//next way to take out values[pointer offset Notation]
cout<<"trying pointer offset"<<endl;
cout<<*(scores_ptr+0)<<endl;
cout<<*(scores_ptr+1)<<endl;
cout<<*(scores_ptr+2)<<endl;
cout<<endl;

// similarly [array offset] can also be done
cout<<"trying array offset";
cout<<endl;
cout<<*(scores+0)<<endl;
cout<<*(scores+1)<<endl;
cout<<*(scores+2)<<endl;
return 0;
}
