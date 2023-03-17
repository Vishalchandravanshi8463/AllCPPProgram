//unary operator overloading 
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
    void get ()
    {
        cout<<x<<" + "<<y<<"i"<<endl;
    }
    complex  operator ++()
{
  complex c;
  c.x=this->x+1;
  c.y=this->y+1;
  return c;
}
};

int main()
{
    complex c,c1;
    c.set();
    c.get();
  c1=++c;
    c1.get();
    return 0;
}