#include<iostream>
using namespace std;
//int fact(int n){
//    if(n==1){
 //       return 1;
 //       }
//        return n*fact(n-1);
//}
int main()
{
    int t,s;
    cout<<"enter the value of t"<<endl;
    cin>>t;
    while(t-->0)
    {
        int n;
        cout<<"enter the value of n"<<endl;
        cin>>n;s=1;
       while(n>0){
           s=s*n;
           n--;
       }cout<<s<<endl;
    }
    return 0;
}