#include<iostream>;
using namespace std;

int main(){
    int x,y,z;
    int t;
    cout<<"enter the value of t";
    cin>>t;
    while(t--)
    {
         cout<<" enter the value of x,y,z"<<endl;
         cin>>x>>y>>z;
         int purchase;
         purchase=x*y;
         int selling=x*z;
         int profit=selling-purchase;
         cout<<"profit = "<<selling<<"-"<<purchase<<"= "<<profit<<endl;
    }
     return 0;
}