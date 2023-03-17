#include<iostream>
using namespace std;
class vishal
{
private :             //not access  
int x=10;
protected:             //access only derived class
int y=20;
public:               //access by any function
int z=30;
};
int main()
{
    vishal vicky;
    cout<<"size of int   "<<sizeof(int)<<endl;
    cout<<"size of vishal  "<<sizeof(vishal)<<endl;
    cout<<vicky.z;
    return 0;
}