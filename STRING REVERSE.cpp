#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
   cout<<"enter the character \n";
   cin>>str;
   string str_rev;
   for(int i=str.size()-1;i>=0;--i)
   {
       str_rev.push_back(str[i]);

   }
   cout<<str_rev<<endl;
}