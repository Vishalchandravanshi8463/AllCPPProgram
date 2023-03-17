#include<iostream>
using namespace std;
class employee
{
 int employee_id;
 char employee_name[20];
 public:
 void getemployee_detail()
 {
     cout<<"enter your id and name "<<endl;
     cin>>employee_id>>employee_name;
 }
 void setdetail()
 {
     cout<<"id is "<<employee_id<<endl;
     cout<<"name is "<<employee_name<<endl;
 }
};
class permanent_employee:employee
{
 int basic,da,ta,pf,total_salary;
 public:
 void getpermanent_detail()
 {
     employee::getemployee_detail();
     cout<<"enter ur basic ,da,ta,pf\n";
     cin>>basic>>da>>ta>>pf;
 }
 void setpermanent_detail()
 {
     employee::setdetail();
     total_salary=basic+da+ta-pf;
     cout<<"total salary of employee is  "<<total_salary<<endl;
 }
};
class temporaryempyee:employee
{
  int attendance,perday_salary,bonus, totalsalary;
  public:
  void gettemporarydetail()
  {
      employee::getemployee_detail();
      cout<<"enter the attendence, perdaysalary ,bonusm \n";
      cin>>attendance>>perday_salary>>bonus;
  }
  void settemporarydetail()
  {
      employee::getemployee_detail();
      totalsalary=(attendance*perday_salary)+bonus;
      cout<<"salary of temporary employee "<<totalsalary<<endl;
  }
};
int main()
{
    permanent_employee p;
    p.getpermanent_detail();
    p.setpermanent_detail();
    cout<<"____________________________\n";
    temporaryempyee t;
    t.gettemporarydetail();
    t.settemporarydetail();
    return 0;
}
