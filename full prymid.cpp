#include<iostream>
using namespace std;

int main()
{
    int n=6;
  //  int d=0;
    for(int i=0;i<=n;i++)
    {
        for(int x=n-1;x>0;x--)
        {
            cout<<" ";
        }
        for(int j=0;j<=2*n-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        n=n-1;
    }
    return 0;
}