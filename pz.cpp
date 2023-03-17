#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int m,p,b;
        cin>>m>>p>>b;
        if(p<=m)
        {
            cout<<"PIZZA"<<endl;
        }else if(b<=m)
        {
            cout<<"BURGER"<<endl;
        }else// if(b<m)
        {
            cout<<"NOTHING"<<endl;
        }

    }
    return 0;
}