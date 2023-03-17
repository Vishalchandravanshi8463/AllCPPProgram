#include<iostream>
using namespace std;
void Namaste();
void bonjur();
int main()
{
    char ch;
    cout<<"i for indian and f for french :";
    cin>>ch;
    if(ch=='i')
    {
        Namaste();

    }
    else{
        bonjur();
    }
    return 0;
}
void Namaste()
{
    cout<<"Namaste"<<endl;
}
void bonjur()
{
    cout<<"bonjur"<<endl;
}