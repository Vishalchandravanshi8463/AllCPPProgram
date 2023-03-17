 #include<iostream>
    using namespace std;
    class real
    {
       int x,y;
       
       class nested 
       {
           int a,b;
           public:
           void setdata()
           {
               
               cout<<"enter the number a and b \n";
               cin>>a>>b;

           }
           void getdata()
           {
               cout<<"a=  "<<a<<endl;
               cout<<"b=  "<<b<<endl;
           }
           
       };
       public:
       nested s1;
       void setdata()
           {
               s1.setdata();                    //also fine 
               cout<<"enter the number x and y \n";
               cin>>x>>y;

           }
           void getdata()
           {
               s1.getdata();                  //also fine 
               cout<<"x=  "<<x<<endl;
               cout<<"y=  "<<y<<endl;
           }
           
       
    };
    int main()
   {
     real f1;
     f1.setdata();
     f1.getdata();
     cout<<"_____________________________________________\n";
     f1.s1.setdata();
     f1.s1.getdata();
       return 0;
   }