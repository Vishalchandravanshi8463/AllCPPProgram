#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   int n;cin>>n;
	   vector<bool> isholiday(31,false) ;
	   while(n--)
	   {
	           int day ;
	           cin>>day;
	           isholiday[day]=true;
	           
	   }
	   isholiday[6]=isholiday[7]=true;
	   isholiday[13]=isholiday[14]=true;
	   isholiday[20]=isholiday[21]=true;
	   isholiday[27]=isholiday[28]=true;
	   cout<<count(isholiday.begin(),isholiday.end(),true)<<endl;
	   
	}
	return 0;}