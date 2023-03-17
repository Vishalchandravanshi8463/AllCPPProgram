#include<iostream>
using namespace std;

int main()
{
    int n,j;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int x=0;x<i;x++)
        {
            cout<<" ";
        }
        for(int j=n;j>i;j--)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}