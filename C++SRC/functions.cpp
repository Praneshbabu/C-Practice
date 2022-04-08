#include<iostream>
using namespace std;
const double pi{3.14159};
double calc_area_circle(double radius){
return pi*radius*radius;
}
double calc_cylinder_volume(double radius, double height){
  //  return pi*radius*radius*height;
  return calc_area_circle(radius)*height;
}
void area_circle(){
    double radius{};
    cout<<"Enter the radius of the circle \n";
    cin>>radius;
    cout<<"The Area of the Circle is :"<<calc_area_circle(radius)<<endl;
}
void volume_cylinder(){
    double radius{};
    double height{};
    cout<<"\n Enter the Radius of the Cylinder : ";
    cin>>radius;
    cout<<"\n Enter the Height of the Cylinder : ";
    cin>>height;
    cout<<"The Volume of the cylinder is : "<<calc_cylinder_volume(radius,height)<<endl;

}
int main(){
    area_circle();
    volume_cylinder();
}