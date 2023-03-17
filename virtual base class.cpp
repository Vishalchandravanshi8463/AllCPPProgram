#include<iostream>
using namespace std;
class student
{
    protected :
    int rollno;
    public:
    void setroo(int a)
    {
        rollno=a;
    }
    void printroll()
    {
        cout<<"roll no is  "<<rollno<<endl;
    }
};
class test :virtual public student
{
    protected:
    float maths,physics;
    public:
    void setmarks(float a,float b)
    {
        maths=a;
        physics=b;
    }
    void showmarks()
    {
        cout<<"your marks in maths is "<<maths<<endl;
         cout<<"your marks in physics is "<<physics<<endl;
    }
};
class sports :virtual public student
{
 protected:
 float score;
 public:
 void setscore(int sc)
 {
     score=sc;
 }
 void printscore()
 {
     cout<<"your score is "<<score<<endl;
 }
};
class result :public sports,public test{
    private:
    float total;
    public:
    void display()
    {
        total=maths+physics+score;
        printroll();
        showmarks();
        printscore();
        cout<<"your total score is "<<total<<endl;
    }
};
int main()
{
    result vishal;
    vishal.setroo(187);
    vishal.setmarks(79.02,89.02);
    vishal.setscore(9);
    vishal.display();
    return 0;
}