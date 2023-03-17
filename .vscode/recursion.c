#include<stdio.h>
int fact(int n);
int sum(int k);
int main()
{
    printf("enter the number you want factorial\n");
    int p;
    scanf("%d",&p);
    printf("%d\n",fact(p));
    printf("enter the number which you want sum till number\n");
    int v;
    scanf("%d",&v);
    printf("%d\n",sum(v));
    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int factm1=fact(n-1);
    int factc=factm1*n;
    return factc;
}
int sum(int k)
{
    if(k==0)
    {
        return 0;
    }
    int prevsum=sum(k-1);
    return k+ prevsum;
}