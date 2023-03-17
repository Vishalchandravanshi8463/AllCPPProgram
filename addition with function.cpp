#include<iostream>
using namespace std;
 int add(int x,int y)
{
    
  //  cout<<"enter the value of a&b"<<endl;
  //  cin>>a>>b;
    int c=x+y;
    cout<<" addition of a&b is  :"<<c<<endl;
}
int main()
{
  
    cout<<"enter the value of x&y"<<endl;
    int x,y;
    cin>>x>>y;
    
      add(x, y);
    return 0;

}