#include<iostream>
using namespace std;
class area
{
  int r;
  float area;
  public:
  void setdata()
  {
      cout<<"enter the radius of circle"<<endl;
      cin>>r;
  }
  void getdata()
  {
      area=3.14*r*r;
      cout<<"area of circle  "<<area<<endl;
  }
};
int main()
{
  area circle;
  circle.setdata();
  circle.getdata();
  return 0;
}