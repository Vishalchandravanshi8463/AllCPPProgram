#include<iostream>
using namespace std;

int main(){
    int a=365528;
    int l=a%10;
    int f;
    while(a>0)
    {
      a=a/10;
      f=a%10;
      if(a<=9)
      {
        break;
      }
    }cout<<l+f<<endl;
     return 0;
}