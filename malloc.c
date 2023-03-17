#include<stdio.h>
#include<stdlib.h>
int main()
{
  /*  int *ptr;
    ptr=(int*) malloc(5*sizeof(int));
    ptr[0]=1;
    ptr[1]=2;
    ptr[3]=3;
    ptr[4]=4;
    for(int i=0;i<5;i++)
    {
        printf("%d\n",i);

    }*/
    float *ptr;
    ptr=(float*) malloc(5*sizeof(int));
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    for(int i=0;i<5;i++)
    {
        printf("%f\n",ptr[i]);

    }
    return 0;
}