#include<iostream>
#include<math.h>
using namespace std;
class triangle
{
  int a,b,c,s,area;
  public:
  void setdata()
  {
      cout<<"enter the sides of triangle"<<endl;
      cin>>a>>b>>c;
  }
  void getdata()
  {
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"area of triangle is   "<<area<<endl;

  }
};
int main()
{
    triangle area;
    area.setdata();
    area.getdata();

    return 0;
}