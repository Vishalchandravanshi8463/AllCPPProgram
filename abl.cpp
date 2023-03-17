#include<iostream>
using namespace std;

int main()
{
    int t;
    cout<<"enter the value of t"<<endl;
    cin>>t;     //if we give input 5
    while(t--)   //4
    {
        int n,x;
        cout<< "enter the value nof n and x"<<endl;
        cin>>n>>x;
        int arr[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int ans=0;
        for (int i=0;i<n;i++)
        {
            if(arr[i]<x)
            {
                ans=i;
            }
        }
        if (ans!=0) ans++;
        if (ans ==0)
        if (arr[0]>x){ ans+1;}
        
        cout<<ans<<endl;
    }
    return 0;
}