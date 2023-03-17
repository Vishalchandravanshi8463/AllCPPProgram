#include<iostream>
using namespace std;

int main(){
    int t,l,r;
    int numbers;
    cin>>t;
    while(t>=0)
    {
        cin>>numbers;
        t--;
        l=numbers%10;
        while(numbers>=9){
        numbers=numbers/10;
        r=numbers%10;
        if(numbers<=9){
        break;}
        }cout<<r+l<<endl;
//cout<<numbers<<endl;

    }
     return 0;
}