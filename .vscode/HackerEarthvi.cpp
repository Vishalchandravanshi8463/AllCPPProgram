#include <iostream>
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
   // cout<<"enter the t"<<endl;
    cin>>t;
    while(t--)
    {

        int n;
      //  cout<<"enter the size "<<endl;
        cin>>n;
         //  cout<<"enter the key  "<<endl;
        int key;
        cin>>key;
        int arr[n];
      //  cout<<"enter the array elemnt"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int s=0;
        for(int i=0;i<key;i++)
        {
          s+=arr[i];
        }
        int m=s;
        for(int i=0;i<key-1;i++)
        {
             s=s-arr[key-i-1]+arr[n-1-i];
             if(s>=m)
             {
                m=s;
             }
        }
        cout<<m<<endl;
    }
}