#include<iostream>
using namespace std;


void print(const int *const array,size_t size){
    cout<<"[";
    for(size_t i{0};i<size;++i)
    cout<<array[i]<<" ";
    cout<<"]";
    cout<<endl;
}
int *apply_all(const int*const array1,size_t size1,const int *const array2, size_t size2){
int *new_array{};
new_array=new int[size1*size2];
int position{0};
for (size_t i{0};i<size2;++i){
    for(size_t j{0};j<size1;++j){
        new_array[position]=array1[j]*array2[i];
        ++position;
    }
}
return new_array;

}

int main(){
    const size_t array1_size1{10};
    const size_t array2_size2{3};
    int array1[]{1,2,3,4,5,6,7,8,9,0};
    int array2[]{10,20,30};
    
    print(array1,array1_size1);
    
    print(array2,array2_size2);
    
int*result=apply_all(array1,array1_size1,array2,array2_size2);
constexpr size_t result_size{array1_size1*array2_size2};
cout<<"Results"<<endl;
print(result, result_size);
delete[]result;
cout<<endl;
      
    return 0;
}