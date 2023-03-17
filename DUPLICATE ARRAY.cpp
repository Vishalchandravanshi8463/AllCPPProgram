#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number \n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
      int count=1;
    for(int i=0;i<n;i++)
    {
      
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
               ++count;
            }
            else
            {
                cout<<a[i]<<"occurs"<<count<<"times"<<endl;
                a[i]=a[j];
                count=1;
            } 
        }
      
    } // cout<<a[i] <<"occurs   "<<count<<"timer "<<endl;
    return 0;
}
