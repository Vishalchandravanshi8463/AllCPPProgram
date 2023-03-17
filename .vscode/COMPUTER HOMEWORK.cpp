//switch statement                        by VISHAL CHANDRAVANSHI

#include<iostream>
using namespace std ;
int main()
{
    int physics,chemistry,maths,biology,computer;
    int grade;
    cout<<"enter the marks of five subject"<<endl;
    cin>>physics>>chemistry>>maths>>biology>>computer;
    int  percentage;
    percentage=(physics+chemistry+maths+biology+computer)/5;
    
    // grade=percentage>=90?'1':(percentage>=80?'2':(percentage>=70?'3':(percentage>=60?'4':(percentage>=40?'5':'6'))));
    switch(percentage/10)
    {
        case 9:
        cout<<"GRADE A"<<endl;
        break;
         case 8:
        cout<<"GRADE B"<<endl;
        break;
       case 7:
        cout<<"GRADE C"<<endl;
        break;
       case 6:
        cout<<"GRADE D"<<endl;
        break;
       case 5:
        cout<<"GRADE E"<<endl;
        break;
       default:
        cout<<"FAIL"<<endl;
        break;
    
    }
return 0;
}
/*//check number is prime or composite     VISHAL CHANDRAVANSHI 

#include<iostream>
using namespace std ;
int main()
{
 int n,v=0;
 cout<<"enter the number "<<endl;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     if(n%i==0)
     {
         v++;
     }

 }
 if(v>2)
    {
     cout<<"number is composite ";
   }
   else
   {
       cout<<"number is prime"<<endl;
   }

return 0;
}/*

/*
//check triangle is an isosceles ,equilateral,or scalen using if else                by Vishal chandravanshi

#include<iostream>
using namespace std ;
int main()
{
    int a,b,c;
    cout<<"enter the side of triangle"<<endl;
    cin>>a>>b>>c;
    if(a==b&&b==c&&a==c)
    {
        cout<<"equilateral triangle"<<endl;
    }
    else if(a==b&&b!=c||b==c&&a!=c ||a==c&&a!=b)
    {
      cout<<"isoscales triangle"<<endl;
    }
    else 
    {
       cout<<"scalen triangle "<<endl;
    }
    return 0;
}*/

/*//convert cm to m and km using if else            by Vishal chandravanshi
#include<iostream>
using namespace std ;
int main()
{
    float cm,m,km;
    int choice;
    cout<<"enter the cm"<<endl;
    cin>>cm;
    cout<<"enter 1 for m and 2 for km"<<endl;
    cin>>choice;
    if(choice==1)
    {
        m=cm/100;
        cout<<"length in m is "<<m<<endl;
    }
    else if(choice==2)
    {
        km=cm/100000;
        cout<<"length in km is "<<km<<endl;
    }
    else 
    {
        cout<<"choose correct number"<<endl;
    }
    return 0;
}*/

/*//swaping of two variables with if else statement     by Vishal chandravanshi
#include<iostream>
using namespace std ;
int main()
{
  int a,b;
  cout<<"enter the two number"<<endl;
  cin>>a>>b;
  cout<<"before swaping "<<"a= "<<a<<" b= "<<b<<endl;
  if(a!=b)
  {
      a=a+b;
      b=a-b;
      a=a-b;
  }
  cout<<"after swaping "<<"a= "<<a<<" b= "<<b<<endl;
  return 0;
}*/

/*//check the character is alphabet or not 

#include<iostream>
using namespace std ;
int main()
{
    char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;
    if((ch>='a'&&ch<='z')||ch>='A'&&ch<='Z')
    {
        cout<<"character is alphabet "<<endl;
    }
    else
    {
        cout<<"character is not alphabet"<<endl;
    }
    return 0;
}*/

/*//leap year or not 

#include<iostream>
using namespace std ;
int main()
{
    int year;
    cout<<"enter the year"<<endl;
    cin>>year;
    if(year%4==0&&year%100!=0 || year%400==0 &&year%200==0 )
    {
        cout<<year <<" is leap year"<<endl;
    }
    else
    {
        cout<<year<<" is not leap year"<<endl;
    }
    return 0;
}*/

/*//check number is even or odd
#include<iostream>
using namespace std ;
int main()
{
    int a;
    cout<<"enter the number "<<endl;
    cin>>a;
    if(a%2==0)
    {
        cout<<"number is even"<<endl;
    }
    else 
    {
        cout<<"number is odd"<<endl;
    }
    return 0;
}/*
// program to find the greater number among three numbers in c++.
/*{
    int a,b,c;
    cout<<"enter the value of a,b,and c "<<endl;
    cin>>a>>b>>c;

    if(a>b&&a>c)
    {
        cout<<"a is greater "<< a<<endl;
    }
    else if(b>a&&b>c)
    {
        cout<<"b is greater "<< b<<endl;
    }
    else 
    {
          cout<<"c is greater "<< c<<endl;
    }
    return 0;
}*/