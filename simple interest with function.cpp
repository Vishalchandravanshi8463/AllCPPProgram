#include<iostream>
using namespace std;
int simple(int a,int b,int c)
{
    int interest=(a*b*c)/100;
    cout<<interest<<endl;

}
int main()
{
    int p,r,t;
    cout<<"enter the vlue of p,r,t"<<endl;
    cin>>p>>r>>t;
    simple(p,r,t);

        return 0;
}