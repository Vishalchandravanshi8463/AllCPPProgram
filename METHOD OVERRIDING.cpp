#include <iostream>
using namespace std;
/*class Complex
{
 int a;
 public:
 void f1()
 {
    cout<<"i am complex 1 "<<endl;
 }
  void f2()
 {
   cout<<"i am complex 1 f2 "<<endl;
 }
};
class Complex2:public Complex{
 public :
 void f1()
 {
    cout<<"i am complex 2   "<<endl;
 }
 void f2(int v)
 {
   cout<<"v= "<<v<<endl;
 }
};
int main()
{
    Complex2 obj;
    obj.f1();
    obj.f2(4);
  //  obj.f2();               error 
    return 0;
}*/
#include <iostream>
using namespace std ;
class Car
{
 public:
 void gearChange()
 {
    cout<<" 1   2   3    4   5"<<endl;
 }
};
class SportCar:public Car
{
 public :
 void gearChange()
 {
    cout<<" 2   1    4   3    5   6"<<endl;
 }
};
int main ()
{
    SportCar obj;
    obj.gearChange();           //always run sportcar gearchange this is known as method overiding .
    return 0;
}