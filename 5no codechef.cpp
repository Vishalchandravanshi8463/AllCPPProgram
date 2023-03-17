#include<iostream>
using namespace std;

int main()
{
    int T,A,B,r;
    cin>>T;

    for(int i=0;i<T;i++)
    {
        cin>>A>>B;
        r=A%B;
        cout<<r<<endl;
    }
    return 0;
}