#include<iostream>
using namespace std;
#include<chrono>
auto start=chrono::steady_clock::now();
int main()
{
   int a=15,b=10,c=9,d;
   //a=a^c;
 //  c=a^c;
  // a=c^a;
  
a=a+c;
c=a-c;
a=a-c;
      /* d=a;
        a=c;
        c=d;*/

    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;}