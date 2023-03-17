#include<iostream>
using namespace std;

int main()
{
    int base,expo;
    cout<<"ENTER BASE AND POWER WITH SPACE BETWEEN THEM"<<endl;
    cin>>base>>expo;
    double power=1.0;
    int iteration=expo;
    if(expo>0)
    {
        while(iteration!=0)
        {
            power=power*base;
            iteration--;
        }
    }
    else
    {
        while(iteration!=0)
        {
            power=power*(1.0/base);
            iteration++;
        }
    }
    cout<<power<<endl;
    return 0;
}