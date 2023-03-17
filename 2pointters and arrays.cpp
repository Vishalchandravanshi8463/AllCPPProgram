#include<iostream>
using namespace std;

int main(){
    int a=3
;
cout<<a<<endl;
    int marks[5]={55, 67, 45, 23, 12};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    int* p= marks;
    // ()bracket is very important
    cout<<(*p)<<endl;
     return 0;
}