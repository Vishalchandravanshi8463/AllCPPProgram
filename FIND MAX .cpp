#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    int mx=(max(x,y,z));
        cout<<mx<<endl;
	}
	return 0;
}
