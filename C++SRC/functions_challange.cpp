#include<iostream>
#include<vector>
using namespace std;

//****************Function Prototypes****************
void display_menu();
char get_selection();


//****Handling function prototypes****
void the_number_list(const vector<int>&v);
void adding_number(vector<int>&v);
void finding_mean(const vector<int>&v);
void smallest_number(const vector<int> &v);
void largest_number(const vector<int>&v);
void quit();
void unknown();



void display_menu(){
     cout<<"\n*************************\n";
        cout<<"P--> Print Numbers\n";
        cout<<"A--> Add a Number\n";
        cout<<"M--> Display the mean value\n";
        cout<<"S--> Display the smallest number\n";
        cout<<"L--> Display the Largest Number\n";
        cout<<"Q--> Quit\n";
        cout<<"Please Enter your choice\n";
    
}

char get_selection(){
    char selection{};
    cin>>selection;
    return toupper(selection);
}

void the_number_list(const vector<int>&v){
if(v.size()==0)
        cout<<"The numbers list is empty\n";
               else{
                cout<<"The Numbers are : [";
            for(auto num:v)
            cout<<num<<" ";
            cout<<"]";
}
}
void adding_number(vector<int>&v){
    int num_to_add{};
      cout<<"Please Enter the number you want to add :";
      cin>>num_to_add;
      v.push_back(num_to_add);
      cout<<num_to_add<<" is added to the list";
}
void finding_mean(const vector<int>&v){
    if (v.size()==0)
          cout<<"The list is empty please add numbers to claculate the mean";
          else{
              double total{};
              double mean{};
              for(auto num:v)
              total+=num;
              mean=(total)/v.size();
              cout<<"The mean Value is :"<<mean<<endl;
            }
}
void smallest_number(const vector<int> &v){
    if (v.size()==0)
          cout<<"The list is empty please enter the values first";
          else{
              int smallest=v.at(0);
              for (auto num:v)
              if (num<smallest)
              smallest= num;
              cout<<"The smallest number is : "<<smallest<<endl;
            }
}
void largest_number(const vector<int>&v){
    if (v.size()==0)
            cout<<"The list is empty, Please enter values to find the Largest number";
            else{
                int largest=v.at(0);
                for (auto num:v)
                if (num>largest)
                largest=num;
                cout<<"The largest number in the list is :"<<largest<<endl;
            }
}
void quit(){
    cout<<"Good Bye!!!";
}
void unknown(){
    cout<< "unknown selection, Please Try again"<<endl;
}

int main(){
    vector <int> numbers;
    char selection{};
    do{
    display_menu();
    selection=get_selection();
    switch (selection){
        case 'P':
        the_number_list(numbers);
        break;
        case 'A':
        adding_number(numbers);
        break;
        case 'M':
        finding_mean(numbers);
        break;
        case 'S':
        smallest_number(numbers);
        break;
        case 'L':
        largest_number(numbers);
        break;
        case 'Q':
        quit();
        break;
        default:
        unknown();

    }
    }while(selection!='Q');
    cout<<endl;
    return 0;
}


