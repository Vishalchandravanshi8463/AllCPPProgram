#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   int a,b,c,d,e;
	   cin>>a>>b>>c>>d>>e;
	   int v=min(a,min(b,c));
	   int s=(a+b+c)-v;
	   if(s<=d&&v<=e)
	   {
	      cout<<"YES"<<endl;
	   }
	   else
	   {
	      cout<<"no"<<endl;
	   }
	}
	return 0;
}