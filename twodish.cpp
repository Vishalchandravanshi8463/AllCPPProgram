#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int reqdishes,fruits,veggies,fish;
    cin>>reqdishes>>fruits>>veggies>>fish;
    int a ,b;
    int y=reqdishes;
    int x=0;
    while(reqdishes--)
    {
        if(fruits>0 && veggies>0)
        {
            x++;
            fruits--;
            veggies--;
        }
        else if(veggies>0 && fish>0)
        {
            x++;
            veggies--;
            fish--;
        }
    }
    if (x>=y)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;}
    return 0;
    
}