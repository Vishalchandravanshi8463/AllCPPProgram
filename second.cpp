#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"table of your given no = "<<a<<endl;
    for (int i =1; i<=10; i++)
    {
        cout<<a<<"  *  "<<i<<"  = "<<a*i<<endl;
    }
    
    return 0;
} 

