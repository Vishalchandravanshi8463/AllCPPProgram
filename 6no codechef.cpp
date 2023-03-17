#include<iostream>
using namespace std;

int main()
{
    int T,N,l,r,s;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        l=N%10;
        
       while(N>0)
        {
            r=N%10;
            N=N/10;
            
 //           if(N<=9){break;}
            
        }cout<<l+r<<endl;
      
        
    }
    return 0;
}