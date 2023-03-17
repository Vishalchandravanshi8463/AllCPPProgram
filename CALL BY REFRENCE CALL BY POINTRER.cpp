 #include<iostream>
    using namespace std;
    void call_by_value(int x,int y)
    {
      int z;
      z=x;
      x=y;
      y=z;
    }
    /*void call_by_refrence(int &x,int &y)
    {
      int z;
      z=x;
      x=y;
      y=z;

    }*/
    void call_by_pointer(int *x,int *y)
    {
      int z;
      z=*x;
      *x=*y;
      *y=z;
    }
    int main()
   {
     int a,b;
     cout<<"enter the value of a and b"<<endl;
     cin>>a>>b;
     cout<<"before swaping \n";
     cout<<"a=  "<<a<<endl;
     cout<<"b=  "<<b<<endl;
     cout<<"AFTER CALL BY VALUE "<<endl;
     call_by_value(a,b);
      cout<<"a=  "<<a<<endl;
     cout<<"b=  "<<b<<endl;
     cout<<"__________________________"<<endl;
    /* cout<<"AFTER CALL BY REFRENCE"<<endl;
     call_by_refrence(a,b);
      cout<<"a=  "<<a<<endl;
     cout<<"b=  "<<b<<endl;*/
     cout<<"__________________________"<<endl;
     cout<<"AFTER CALL BY POINTER "<<endl;
     call_by_pointer(&a,&b);
      cout<<"a=  "<<a<<endl;
     cout<<"b=  "<<b<<endl;

       return 0;
   }