// single inheritance by  vishal chandravanshi
#include<iostream>
using namespace std;
class base
{
  protected:
  int a,b;
  public:
  void setdata()
  {
      cout<<"enter the number of a& b\n";
      cin>>a>>b;
  }
  //void getdata()
 // {
 //     cout<<"a= "<<a<<"\t"<<"b= "<<b<<endl;
 // }
};
class derive:public base
{
  int x,y;
  public:
  void setdata1()
  {
    cout<<"enter the value of x and y\n";
    cin>>x>>y;
  }
  void getdata1()
  {
    cout<<"x= "<<x<<" y= "<<y<<endl;
    cout<<"a= "<<a<<"\t"<<"b= "<<b<<endl;
  }

};
int main()
{
//  base obj;
  derive obj1;
 // obj.setdata();
//obj.getdata();
obj1.setdata();
//obj1.getdata();
  cout<<"######################################################\n";
  obj1.setdata1();
  obj1.getdata1();

return 0;
}