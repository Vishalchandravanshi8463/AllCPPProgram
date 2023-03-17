#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 string armstrongNumber(int n){
        // code here
        int z=0,p;
        p=n;
        while(p!=0)
        {
            
        int v=p%10;
        z=z+(v*v*v);
    
        p=p/10;
        }
        if(z==n)
        {
            return "Yes";
        }
        else 
        {
            return "No";
        }
    }
int main()
{
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;

 cout<<armstrongNumber(n);
}