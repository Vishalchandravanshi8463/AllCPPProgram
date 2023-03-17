#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("studentoftit.c","w");
    char name[200];
    int age;
    float cgpa;
    printf("enter the name\n");
    scanf("%s",name);

     printf("enter the cgpa\n");
    scanf("%f",&cgpa);
     printf("enter the age\n");
    scanf("%d",&age);
    
    fprintf(fptr,"student name is :%s\n",name);
    fprintf(fptr,"student age is:%d\n",age);
    fprintf(fptr,"student cgpa is:%f\t",cgpa);


fclose(fptr);
return 0;
}