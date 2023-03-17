#include<iostream>
using namespace std;

int main()
{
    long long int x;
    int weight;
    cout<<"ENTER THE BINARY NUMBER"<<endl;
    cin>>x;
    weight=1;
    int d=0;
    while(x!=0)
    {
        int rem=x%10;
        d=d+rem*weight;
        x=x/10;
        weight*=2;
    }
    cout<<"BINARY CONVERSION :: "<<d<<endl;
    return 0;
}