#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int k=-1;
	    int piovt=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]<piovt)
	        {
	            k++;
	           swap( a[k],a[i]);
	        }
	        
	    }
          for(int i=0;i<n;i++)
	          cout<<a[i]<<" ";
	}	
    	return 0;
}