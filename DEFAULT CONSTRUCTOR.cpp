#include<iostream>
using namespace std;
class constructor
{
  int x,y;
  static int count ;
  public:
  constructor()
  {
      x=5;
      y=6;
      count ++;
      cout<<"constructor calling "<<count<<"\n";
  }
  ~constructor()
  {
    // -- count;
      cout<<"destructor calling "<<count--<<endl;
  }
  void display()
  {

      cout<<"x=  "<<x<<endl;
      cout<<"y=  "<<y<<endl;

  }
};
int constructor::count=0;
int main()
{
    cout<<"________________________________\n";
    constructor f1,f2,f3,f4;
    
    cout<<"________________________________\n";
    f2.display();
    
    cout<<"________________________________\n";
    constructor();
    
    cout<<"________________________________\n";

    f1.display();
    
    cout<<"________________________________\n";
    return 0;
}
