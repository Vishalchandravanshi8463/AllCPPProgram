#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int v=-1,s=0;
       int z=a+b;
       for(int i=0;i<z;i++)
       {
           v=v+2;
           s=s+2;
            z=z-(v+s);
       }
       if(v>s)
       {
           cout<<"Limak\n";
       }
       else{
           cout<<"Bob\n";
       }
    }
    return 0;
}