#include<iostream>
#include<fstream>
using namespace std;
int main()
/*{
    ofstream out("F SAMPLE FILE.cpp");
    string st;
    st="vishal";
    out<<st;
// read
ifstream in("F SAMPLE FILE.cpp");
string stv;
in>>stv;
}*/
/*{
    ofstream vout("F SAMPLE FILE.cpp");
    string name;
    cout<<"enter your name\n";
  //  cin>>name;
    getline(cin,name);
    vout<<name+"my name is";
    vout.close();
    ifstream vin("F SAMPLE FILE.cpp");
    string content;
    vin>>content;
    cout<<"the content of this file is  "<<content;
    vin.close();
    return 0;
}*/
{
  ofstream out;
  out.open("F SAMPLE FILE.cpp");
  
  out<<"this is me vishal chandravanshi";
  out.close();
  ifstream in;
  string st;
  in.open("F SAMPLE FILE.cpp");
  in>>st;
  cout<<st;
  in.close();
  

  return 0;
}