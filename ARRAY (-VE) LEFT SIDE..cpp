#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the arry size\n";
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
       
       cout<<"enter  a["<<i<<"] "<<endl;
        cin>>a[i];
        
    }
    int i=-1;
    int z=0;
        for(int j=0;j<n;j++)
    {
        int temp;
       
        if(a[j]<z)          //-2<0   true
        {
            i++;    //i=0
            cout<<"i= "<<i<<endl;
            temp=a[i];          //temp=a[0]=-2
            a[i]=a[j];          //a[0]=a[1]
            a[j]=temp;            //a[1]=
          
        }
       
          
    }
     for(int i=0;i<n;i++)
    {
    
        cout<<a[i]<<" ";}

    return 0;
}