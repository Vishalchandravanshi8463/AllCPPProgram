#include<iostream>
using namespace std;
int main()
{
    int mx=-199999;
    int n;
    cout<<"enter the n\n";
    cin>>n;
    int arr[n];
    cout<<"enter the arr value \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
       

    }
     for(int i=0;i<n;i++)
    {
        
        mx=max(mx,arr[i]);
       
 
    }cout<<"*************************\n";
    cout<<mx<<endl;
    
    return 0;
}