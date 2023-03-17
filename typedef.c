#include<stdio.h>
typedef struct computerengineeringstudent
{
    int roll;

    float cgpa;
    char name[100];
}coe;       
int main()
{
    coe s1;
    s1.roll=1234;
    s1.cgpa=9.9;
    strcpy(s1.name,"vishal");
    printf("roll is=%d\n",s1.roll);
      printf("cgpa is=%f\n",s1.cgpa);
      printf("name is=%s\n",s1.name);
    

return 0;
}