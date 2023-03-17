#include<iostream>
#include<string.h>
using namespace std;
class Product
{
   int id;
   char name[10];
   float price;
   public:
   void getdetail();                      //signature
   void setdetail();
   friend void modify(Product &f);
};
//offlinr=e of class Product ____________________________
void Product::getdetail()
   {
       cout<<"enter product id ,name price\n";
       cin>>id>>name>>price;
       
   }
   void Product ::setdetail()
   {
       cout<<"id is  :"<<id<<endl;
        cout<<"name is  :"<<name<<endl;
         cout<<"price is  :"<<price<<endl;

   }
   void modify(Product &a)
   {
       cout<<&a<<endl;
     a.id=20;
     a.price=90.3;
     strcpy(a.name,"Dabar");
     //a.setdetail();if not creat refrence object

   }
int main()
{
    Product p; 
    cout<<&p<<endl;
    p.getdetail();
    p.setdetail();
    cout<<"______________________________\n";
    modify(p);
    p.setdetail();
    return 0;
}
