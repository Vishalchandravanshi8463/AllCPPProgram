#include<iostream>
using namespace std;
class cfriend
{
    int physics=30;
    int m2=45;
    public:
    void display()
    {
       
        cout<< "marks of ph  "<<physics<<"\n "<<"marks of m2   "<<m2<<endl;
    }
    
     friend void update(cfriend &m);
};
    void update(cfriend &m)
    {
 m.m2=98;
 m.physics=91;
 //m.display();
    }

int main()
{  cfriend m;
  m.display();
   cout<<"############################################"<<endl;
 update(m);
 m.display();
  return 0;
}