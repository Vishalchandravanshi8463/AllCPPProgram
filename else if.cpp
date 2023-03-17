#include<iostream>
using namespace std ;
int main ()
{
  /*  int a,b;
    cout<<"enter the value of a,b"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        cout<<a<<" is greater than"<<b<<endl;
    }
    else if(a<b)
    {
        cout<<b<<" is greater than "<<a<<endl;
    }
    else
    {
        cout<<a<<"="<<b;
    }*/
    //second program::
    int a,b,c ;
    cout<<"enter the value of a,b,c"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<a<<" is greater than "<<b<<" and "<<c<<endl;
    }
    else if (b>c&&c>a)
    {
        cout<<b<<" is greater than "<<a<<" and "<<c<<endl;
    }
    else
    {
        cout<<c<<" is greater than "<<b<<" and "<<a<<endl;
    }
    return 0;
}