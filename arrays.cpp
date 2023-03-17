#include<iostream>
using namespace std;

int main()
{
    int i=0;
    int marks_maths[8] ={45, 32, 23, 56, 89 , 34, 67, 56};
     cout<<"these are maths marks of student"<<endl; 

    do
    {
        cout<<"Roll no."<<i<<" has these marks"<<marks_maths[i]<<endl;
        ++i;}
      while(i<8);
    
 return 0; 
}