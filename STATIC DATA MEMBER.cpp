#include<iostream>
using namespace std;
class first
{
  int x=0;
  static int y;           //static data member       //      one copy of data member and all object share it 
  public:
   void callagain()
  {
     ++y;
     cout<<"call by static y=           "<<y<<endl;
  }
  void callnormal()
  {
      ++x;
      cout<<"x normal =                  "<<x<<endl;
  }
};
int first:: y=0;
int main()
{
    first f1,f2,f3,f4;
    f1.callagain();
    f2.callagain();
    f3.callagain();
    f4.callagain();
    cout<<"__________________________________\n";
    f1.callnormal();
    f2.callnormal();
    f3.callnormal();
    f4.callnormal();
    return 0;
}