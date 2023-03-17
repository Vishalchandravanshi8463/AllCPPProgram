#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int tot,h;
        cin>>tot>>h;
        int i=tot-h;
        if(i>=h)
        {
            cout<<h<<endl;
        }else
        {
            cout<<i<<endl;
        }
    }
    return 0;
}