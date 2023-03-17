#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()

{
        // code here
      int p,n,z=0;
        cin>>n;
        p=n;
        while(p!=0)
        {
            
        int v=p%10;
        z+=(v)^3;
    
        p=p/10;
        }
        if(z==n)
        {
          cout<<"yes\n";
        }
        else 
        {
            cout<<"No\n";
        }
    }