#include<iostream>
using namespace std;
class software
{
  string os;
  public:
  software(string a="window 7")
  {
      os=a;
      cout<<"software construction is calling \n";
  }
  ~software()
  {
      cout<<" software destructor is calling \n";
  }
};
class hardware
{
 int ram,hd;
 public:
 hardware(int a=2,int b=2)
 {
     ram=a;
     hd=b;
     cout<<"hardware construction is calling \n";
 }
 ~hardware()
 {
     cout<<"hardware destructor  is calling \n";
 }
};
class laptop:hardware,software
{
 string company_name;
 public:
 laptop(string a="hp")
 {
     company_name=a;
     cout<<"laptop constructiion is calling \n";
 }
 ~laptop()
 {
     cout<<"laptop destructor is calling \n";
 }
};
int main()
{
    laptop l;
    return 0;
}