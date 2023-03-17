#include<stdio.h>
int doWork(int a,int b,int *add,int *prod,int *aver);
int main()
{
    int a=3,b=5;
    int add,prod,aver;
    doWork(a,b,&add,&prod,&aver);
    printf("add=%d,prod=%d,aver=%d \n",add,prod,aver);
    return 0;

}
int doWork(int a,int b,int *add,int *prod,int *aver)
 
 {   *add=a+b;
     *prod=a*b;
     *aver=(a+b)/2;

}