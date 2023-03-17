#include<iostream>
using namespace std ;
class First;                   //forward declaration
class Second
{
   int l,m;                   //by default private
   public:
   void  setdata()
   {
      cout<<"enter l,m  "<<endl;
      cin>>l>>m;
   }
   void getdata()
   {
       cout<<"l= "<<l<<" m= "<<m<<endl;
   }
               
       void myswap(First &f);              //signature/prototype/declaration
       void mysum(First &f);
       void mymultiply(First &f);
};

class First
{
    int x,y;
    public:
 void  setdata()
   {
      cout<<"enter x,y  "<<endl;
      cin>>x>>y;
   }
   void getdata()
   {
       cout<<"x= "<<x<<" y= "<<y<<endl;
   }
    friend void Second :: myswap(First &f);
    friend void Second::mysum(First &f);
    friend void Second ::mymultiply(First &f);
};  
void Second::myswap(First &f)
{
    int temp;
    temp=l;
    l=f.x;
    f.x=temp;
temp=m;
m=f.y;
f.y=temp;
    
}
void Second::mysum(First &f)
{
   cout<<"sum = "<< l+f.x+m+f.y<<endl;
}
void Second ::mymultiply(First &f)
{
    cout<<"multiply = "<<l*f.x*f.y*m;
}
  int main()
{
    First f1;
    Second s1;
   
    f1.setdata();
     f1.getdata();
    
    s1.setdata();
     s1.getdata();
     s1.myswap(f1);
     cout<<"__________________________________\n";
     cout<<"after swaping\n";
     s1.getdata();
     f1.getdata();
     cout<<"------------------------------------"<<endl;
     s1.mysum(f1);
      cout<<"------------------------------------"<<endl;
     s1.mymultiply(f1);
    return 0;
}