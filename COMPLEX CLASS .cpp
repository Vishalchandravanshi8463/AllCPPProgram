#include<iostream>
using namespace std;
class Complex
{
  int x,y;
  public:
  //default constructor
  Complex()
  {
    x=0;
    y=1;
    cout<<"default constructor is calling :"<<endl;
    cout<<this <<endl;
  }                      
  //parametrized constructor
  Complex(int a,int b)
  {
    //  x=a;
      this->x=a;
    //  y=b;
      this->y=b;
      cout<<"parametrized constructor"<<endl;
      cout<<this<<endl;
  }                          
                                                  //this is hold current invoking object address
  ~Complex()                                      //tilld sign 
  {
    cout<<"destructor is calling \n";
    cout<<this<<endl;
  }
};
int main()
{
    Complex c1,c2,c3,c4(4,5),c5(7,5);        //c1=current invoking object                        //implicit call
    Complex c6=Complex();                                 //explicit call
cout<<"size of "<<sizeof(c1)<<endl;
 return 0;
}