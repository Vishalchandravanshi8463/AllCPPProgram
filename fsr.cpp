#include<bits/stdc++.h>
#include<chrono>
using namespace std;
auto start=chrono::steady_clock::now();
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int ans=(int)sqrt(n);
        cout<<ans<<endl;
    }
    return 0;
}