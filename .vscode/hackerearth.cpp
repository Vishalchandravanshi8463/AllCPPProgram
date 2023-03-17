#include <stdio.h>
#include <iostream>
#include<bits/stdc++.h>
int main(){
int n,m;
cin>>n>>m;
int mAx=INT_MIN;
int v[m];
int p[n];
int a=0,b=0,c=0;
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		cin>>v[j];
	}
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
     if(p[i][j]>=mAx)
	 {
      if(i==0)
	  {
		  a++;
	  }
	  else if(i==1)
	  {
		  b++;
	  }
	  else 
	  {
		  c++;
	  }
	 }
	}
}
cout<<a<<" " <<b<<" "<<c;
}


