#include<iostream>
using namespace std;
class complex{

    int x,y;
    public:
    void set()
    {
        cout<<"enter the x,y \n";
        cin>>x>>y;
    }
    void get()
    {
        cout<<x<<" + "<<y<<"i"<<endl;
    }
    friend complex  operator +(complex a,complex b);
};
complex  operator +(complex a,complex b)
{
  complex c;
  c.x=a.x+b.x;
  c.y=a.y+b.y;
  return c;
}
int main()
{
    complex c,c1,c2;
    c.set();
    c.get();
    c1.set();
    c1.get();
    c2=c+c1;
   // c2.set();
    c2.get();
    return 0;
}