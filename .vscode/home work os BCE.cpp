#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v=1;
    for(int i=1;i<=n;i++)
    {
      v=v*i;
    }
    cout<<v<<endl;
    return 0;

}
/*{
    int n;
    cin>>n;
    int a[n];
    a[0]=0;
    a[1]=1;
    for(int i=0;i<n;i++)
    {
       a[i+2] =a[i]+a[i+1];
    }
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }
}*/