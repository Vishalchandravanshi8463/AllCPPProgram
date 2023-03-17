#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    vec.reserve(100);             //already allocate memory;
    for(int i=0;i<32;i++)
    {
        vec.push_back(i);
        cout<<"size= "<<vec.size()<<" "<<"capacity= "<<vec.capacity()<<endl;
    }
    return 0;
}