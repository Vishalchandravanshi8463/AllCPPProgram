#include<iostream>
using namespace std;
int main()
{
   /* int a=10,b=20;
   if(a>b)
    {
        cout<<"a is greater than b";
    }
    else{
        cout<<"b is greater than a";
    }
    (a>b)?cout<<"a is greater than b" :co*/
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    (a&1==1)?cout<<"number is odd" :cout<<"number is even";
    return 0;
}