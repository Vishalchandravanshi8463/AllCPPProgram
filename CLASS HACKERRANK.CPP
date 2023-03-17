#include <iostream>
#include <sstream>
#include<string.h>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class student
{
  int age,standard;
  string first_name,last_name;
  public:
  void set_age(int a)
  {
      age=a;
  }  
  void set_standard(int s)
  {
      standard=s;
  }
    void set_first_name(string f)
    {
        first_name=f;
    }
    void set_last_name(string l)
    {
        last_name=l;
    }
    int get_age()
    {
        return age;
    }
    int get_standard()
    {
        return standard;
    }
    string get_first_name()
    {
        return first_name;
    }
    string get_last_name()
    {
        return last_name;
    }
    string to_string()
    {
      stringstream ss;
        cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
        return ss.str();
    }
    
    
};
int main() {
     int age,standard;
  string first_name,last_name;
  cin>>age>>first_name>>last_name>>standard;
    student s1;
    s1.set_age(age);
    
     s1.set_first_name(first_name);
     
      s1.set_last_name(last_name);
    
    s1.set_standard(standard);
    
   
  cout<<  s1.get_age()<<"\n";
 cout<< s1.get_last_name()<<","<<  s1.get_first_name()<<"\n";
    
    cout<<s1.get_standard()<<"\n";
    cout<<"\n";
  cout<<  s1.to_string();
    return 0;
}
