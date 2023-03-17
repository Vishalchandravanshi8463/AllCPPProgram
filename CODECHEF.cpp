#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include<climits>
int main() {
	// your code goes here
	
//	int s=95959554045;
	int t;
	cin>>t;
	
	while(t--){
	    int s=INT_MAX;
	    int n,l;
	    cin>>n;
	    int v[n];
	    int m[n];
	    string p;
	     
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }   
	    cin>>p;
	          for(int i=0;i<n;i++){
	          if(p[i]=='0'){
	           for(int j=0;j<n;j++){
	               m[j]=v[i];
	           }
	         }
	       }
	    
	    for(int i=0;i<n;i++)
	    {
	        s=(min(s,m[i]));
	    }
	    
	    cout<<s<<endl;
	 /*   for(int i=0;i<n;i++){
	        cin>>p;
	    }*/
	    
	}
	return 0;
}
