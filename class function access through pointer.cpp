#include<iostream>
using namespace std;
class prodetail
{
  int id;
  char name[23];
  float price;
  public:
  void setdata()
  {
      cout<<"enter the  id of product"<<endl;
      cin>>id;
      cout<<"enter the name of product "<<endl;
      cin>>name;
      cout<<"enter the price of product "<<endl;
      cin>>price;
  }
  void getdata()
  {
      cout<<"id of product is     :"<<id<<endl;
      cout<<"name of product is   :"<<name<<endl;
      cout<<"price of product is   :"<<price<<endl;
  }
};
int main()
{
    prodetail p;
    cout<<" address of p is  :"<<&p<<endl;
    prodetail *ptr;
   
   ptr=&p;
    cout<<"ptr ="<<ptr<<endl;
    ptr->setdata();
    ptr->getdata();
    p.setdata();
    p.getdata();
    return 0;
}