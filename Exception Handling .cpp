#include<iostream>
using namespace std;
int main()
{
    int numerator,denominator,result;
    cout<<"enter the numerator and denominator\n";
    cin>>numerator>>denominator;
    try
    {
        if(denominator==0)

        {throw denominator;}
    

    
    result=numerator/denominator;
    }
    catch(int ex)
    {
        cout<<"exception: divide by zero isnot allowed-"<<ex;
    }
    cout<<"division is = "<<result;
    return 0;
}