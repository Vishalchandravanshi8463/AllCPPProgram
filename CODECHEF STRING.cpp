#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   int n;
	   cin>>n;
	   string s;
	  
	      cin>>s;
	      
	   
	     for(int i=0;i<n-1;i+2)
	   {
	     char temp;
	     temp=s[i];
	     s[i]=s[i+1];
	     s[i+1]=temp;
	      
	   }
	   for(int i=0;i<n;i++)
	  {
		s[i]='z'+'a'-s[i];
	  }
	  cout<<s<<endl;
	}
	
	return 0;
}