//multi level inheritance have one base class and more than one drive class
#include<iostream>
using namespace std ;
/*class base
{
protected:
int a,b;
public:
void setdata()
{
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b; 
}
/*void showdata()
{
    cout<<"a= "<<a<<"  b= "<<b<<endl;
}*/

/*};
class drive1:public base
{
protected:
int x,y;
public:
void setdata1()
{
    cout<<"enter the value of x and y "<<endl;
    cin>>x>>y; 
}
void showdata1()
{
    cout<<"x= "<<x<<"  y= "<<y<<endl;
    cout<<"a= "<<a<<"  b= "<<b<<endl;
}

};
class drive2:public drive1
{
private:
int v,s;
public:
void setdata2()
{
    cout<<"enter the value of v and s"<<endl;
    cin>>v>>s; 
}
void showdata2()
{
    cout<<"v= "<<v<<" s= "<<s<<endl;
}

};

int main()
{
   // base obj;
  //  obj.setdata();
//obj.showdata();
   // cout<<"#################################\n";
    
   // drive1 obj1;
  //  obj1.setdata1();
  //  obj1.showdata1();
   
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    drive2 obj2;
     obj2.setdata();
    obj2.setdata2();
    obj2.showdata2();
      cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";

    
    obj2.setdata1();
    obj2.showdata1();
      cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    
   // obj2.setdata();
    //obj2.showdata();*/

    class student 
    {
      protected:
      int roll_no;
      public:
      void setroll(int r);
      void getr(void);
    };
    void student::setroll(int r)
    {
        roll_no=r;
    }
    void student ::getr(void)
    {
        cout<<"roll_no is "<<roll_no<<endl;
    }
class exam :public student
{
  protected :
  float m1;
  float physics;
  public:
  void setmarks(float m,float ph);
  void getm(void);
};
void exam::setmarks(float m,float ph)
{
    m1=m;
    physics =ph;
}
void exam::getm(void)
{
    cout<<"marks in m2 is "<<m1<<endl;
     cout<<"marks in physics is "<<physics<<endl;
}
class result:public exam
{
  float percentage;
  public:
  void display()
  {
      getr();
      getm();
      cout<<"percentage obtained b=y student is  "<<(physics+m1)/2<<endl;
  }
};

int main()
{
    result vishal;
    vishal.setroll(220);
    vishal.setmarks(93.0,94.3);
    vishal.display();
    return 0;
}
