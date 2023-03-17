#include<iostream>
using namespace std;
class Car 
{
 public:
 virtual void gearChange()
 {
    cout<<"i am A simple gear change \n";//😊😊😊😊
 }
 virtual void staring()
 {
    cout<<"i am old model of staring  \n";
 }
};
class SportCar:public Car
{
 void gearChange()
 {
    cout<<"i am modern type gear change\n";
 }
 void staring()
 {
   cout<<"i am modern type  gear change \n";
 }
};
int main()
{
    Car *o1,obj1;
    SportCar o2;
    o1=&o2;
    o1->gearChange();
    
    o1->staring();
    cout<<"____________________________\n";
    obj1.gearChange();
    return  0;
}