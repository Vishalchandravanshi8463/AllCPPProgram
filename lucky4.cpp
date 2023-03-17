#include<iostream>
using namespace std;

int main(){
    int t,l,numbers,digit,r,d;
    cin>>t;
    d=0;
    //l=t;
   // digit=4;
    while(t>0)
    {t--;
        cin>>numbers;
        //cout<<numbers<<endl;
        
        l=numbers%10;
        if(l==4){++d;}
        while(numbers>0){
        numbers=numbers/10;
        r=numbers%10;
        if(r==4)
        {++d;}
        }
    }cout<<d<<endl;
     return 0;
}