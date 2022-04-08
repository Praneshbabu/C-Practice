#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> numbers{};
    char selection{};
    do{
        cout<<"\n*************************\n";
        cout<<"P--> Print Numbers\n";
        cout<<"A--> Add a Number\n";
        cout<<"M--> Display the mean value\n";
        cout<<"S--> Display the smallest number\n";
        cout<<"L--> Display the Largest Number\n";
        cout<<"Q--> Quit\n";
        cout<<"Please Enter your choice\n";
        cin>>selection;
    if (selection=='P'||selection=='p'){
         if(numbers.size()==0)
        cout<<"The numbers list is empty\n";
               else{
                cout<<"The Numbers are : [";
            for(auto num:numbers)
            cout<<num<<" ";
            cout<<"]";
        }
      }else if (selection=='A'||selection=='a'){
      int num_to_add{};
      cout<<"Please Enter the number you want to add :";
      cin>>num_to_add;
      numbers.push_back(num_to_add);
      cout<<num_to_add<<" is added to the list";
      }else if (selection=='m'||selection=='M'){
          if (numbers.size()==0)
          cout<<"The list is empty please add numbers to claculate the mean";
          else{
              double total{};
              double mean{};
              for(auto num:numbers)
              total+=num;
              mean=(total)/numbers.size();
              cout<<"The mean Value is :"<<mean<<endl;
          }
      }else if(selection=='s'||selection=='S'){
          if (numbers.size()==0)
          cout<<"The list is empty please enter the values first";
          else{
              int smallest=numbers.at(0);
              for (auto num:numbers)
              if (num<smallest)
              smallest= num;
              cout<<"The smallest number is : "<<smallest<<endl;
          }
      }else if(selection=='l'||selection=='L'){
            if (numbers.size()==0)
            cout<<"The list is empty, Please enter values to find the Largest number";
            else{
                int largest=numbers.at(0);
                for (auto num:numbers)
                if (num>largest)
                largest=num;
                cout<<"The largest number in the list is :"<<largest<<endl;

            }
      }else if(selection=='Q'||selection=='q'){
          cout<<"Good Bye!!!";
      }
    }while (selection!='q'&& selection!='Q');
    cout<< endl;
    return 0;
}
