#include <iostream>
using namespace std;

void boxes(int n,int k)
{
    if(n>=k){
    if(n==1&&k==1)
    {
        cout<<"YES"<<endl;
    }
    else if (n==k)
    {
        cout<<"NO"<<endl;
    }
   else
   cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
  
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    boxes(n,k);
	}
	return 0;
}
