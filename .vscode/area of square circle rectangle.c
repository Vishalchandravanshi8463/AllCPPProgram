#include<stdio.h>
int rect(int a,int b);
float circle(float rad);
int square(int side);
int main()
{
    int x,y;
    x=5;
    y=3;
    printf("enter the side of rectangle\n");
    
     printf("area of rectangle is%d\n",rect(x,y));

 
    float v;
   printf("enter the radi of circle\n");
    scanf("%f",&v);
   printf("area of circle is%f\n",circle(v));

    int s;
    printf("enter the side of square\n");
    scanf("%d",&s);
     printf("area of square is%d\n",square(s));

    return 0;
}
int rect(int a,int b)
{
    return a*b;

}
float circle(float f)
{
    return 3.14*f*f;
}
int square(int s)
{
    return s*s;
}
