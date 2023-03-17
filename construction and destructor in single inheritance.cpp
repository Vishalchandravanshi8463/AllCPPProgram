  //constuctor and destructor by vishal chandravanshi

#include<iostream>
using namespace std;
class bank
{
 int amount,act_number;
 public:
 bank(int a=0,int b=0)
 {
   amount =a;
   act_number=b;
   cout<<"welcome to bank class\n";
 }
 ~bank()
 {
     cout<<"bye bye bank\n";
 }
};
class bankloan:bank
{
  int loan_amt;
  public:
  bankloan(int a=0)
  {
      loan_amt=a;
      cout<<"welcome to bankloan class\n";
  }
  ~bankloan()
  {
      cout<<"pay instalment on time\n";
  }
};
int main()
{
    bankloan b;
    return 0;
}