#include<iostream>
using namespace std;
class base1
{
  protected:
  int base1int;
  public:
  void setbase1int(int a)
  {
      base1int=a;
  }
};
class base2
{
  protected:
  int base2int;
  public:
  void setbase2int(int a)
  {
      base2int=a;
  }
};
class base3
{
  protected:
  int base3int;
  public:
  void setbase3int(int a)
  {
      base3int=a;
  }
};
class derived: public base1,public base2,public base3
{
  public:
  void show()
  {
      cout<<"the value of base1int is  "<<base1int<<endl;
       cout<<"the value of base2int is  "<<base2int<<endl;
        cout<<"the value of base3int is  "<<base3int<<endl;
        cout<<"the sum  is base1int+base2int+base3int "<<base1int+base2int+base3int<<endl;
  }
};
int main()
{
  
   derived v1;
    v1.setbase1int(25);
    v1.setbase2int(5);
    v1.setbase3int(10);


    v1.show();
    return 0;
}