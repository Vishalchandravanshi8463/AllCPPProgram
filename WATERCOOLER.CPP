#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--)
	{
	        cin>>x>>y;
	        int v=0;
	        if(x<y)
	        {
	                  v++;
	               for(int i=2;i<=y;i++) 
	               {
	                   if((x*i)<y)
	                   {
	                           v++;
	                   }
	               } cout<<v<<endl;
	       }
	        else
	        {
	                cout<<v<<endl;
	        }
	       
	}
	return 0;
}
