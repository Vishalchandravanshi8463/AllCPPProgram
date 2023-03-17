#include<iostream>
using namespace std;
class quadrilateral
{
 protected:
 int width,height;
 public:
  quadrilateral(int a=0,int b=0)
  {
      width=a;
      height =b;
  }
 virtual void area()  //pure virtual function virtual void area()=0
 {
     cout<<"quadrilateral class is calling  "<<endl;
 }
};
class rectangle:public quadrilateral
{
  public:
  rectangle(int a,int b):quadrilateral(a,b)
    {

    }
    void area()
    {
        cout<<"the area of rectangle  is  "<<(width*height)<<endl;
    }
};
class triangle:public quadrilateral
{
    public:
    triangle (int a,int b):quadrilateral(a,b)
    {

    }
    void area()
    {
        cout<<"the area of triangle is  "<<(width*height)/2;
    }

};
int main()
{
    quadrilateral *q;
    rectangle r(5,6);
    q=&r;
    q->area();
    triangle t(8,9);
    q=&t;
    q->area();
    return 0;
}