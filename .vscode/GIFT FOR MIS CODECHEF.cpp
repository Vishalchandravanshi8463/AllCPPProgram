#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*int t;
    cin>>t;
    while(t--)
    {
    int x;
    cin>>x;
   
     int v=x-x/5;
      
cout<<v<<endl;
    }*/
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<x;i++)
    {
        sort(a,a+x);
    }
     for(int i=0;i<x;i++)
    {
        cout<<a[i]<<ends;
    }
    

return 0;
}