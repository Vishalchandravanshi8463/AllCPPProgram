#include<iostream>
using namespace std ;
class First 
{
  int x=0;              //non static data member 
  static int y;
  public:
  static void setdata()
  {
     // ++x;           error bcoz non static data member 
      ++y;
      cout<<"y = "<<y<<endl;
  }
};
int First::y=0;
int main()
{
    First::setdata();
     First::setdata();
      First::setdata();
       First::setdata(); 
       First f1;
       f1.setdata();

   return 0;

}