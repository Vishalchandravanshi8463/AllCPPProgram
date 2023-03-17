#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    float cgpa;
    char name[100];

};
void studentinfo(struct student s1);


int main()
{
   /* printf("********************************\n");
    struct student s1;
    s1.rollno=202;
    s1.cgpa=8.9;
    strcpy(s1.name,"vishal");
    printf("name of student is :%s\n",s1.name);
    printf("roll no of student is %d\n",s1.rollno);
     printf("cgpa of student is %f\n",s1.cgpa);
      printf("********************************\n");
    struct student s2;
    s2.rollno=203;
    s2.cgpa=9.9;
    strcpy(s2.name,"vicky");
    printf("name of student is :%s\n",s2.name);
    printf("roll no of student is %d\n",s2.rollno);
     printf("cgpa of student is %f\n",s2.cgpa);
       printf("********************************\n");
     struct student s3;
    s3.rollno=204;
    s3.cgpa=8.5;
    strcpy(s3.name,"shivam");
    printf("name of student is :%s\n",s3.name);
    printf("roll no of student is %d\n",s3.rollno);
     printf("cgpa of student is %f\n",s3.cgpa);*/
    
    ////////////////////////////////////////
     /*struct student ece[100];
     ece[0].rollno=123;
     ece[0].cgpa=9.7;
     strcpy(ece[0].name,"vishal");
     printf("name=%s\n",ece[0].name);
     printf("rollno=%d\n",ece[0].rollno);
     printf("name=%f\n",ece[0].cgpa);*/

     ///////////////////////////////////////////
     // also initilize structure in one line.
     struct student s1={1234,9.8,"vishal"};
     printf("roll no is=%d \n,cgpa is=%f \n,name of the student %s\n",s1.rollno,s1.cgpa,s1.name);

     // also with the help of pointer 
     // structure is also one type of data type
     struct student *ptr=&s1;
     printf("student rollno  with.. =%d\n",(*ptr).rollno);

      printf("student rollno with-> =%d\n",ptr->rollno);
       printf("student  with-> cgpa =%f\n",ptr->cgpa);
        printf("student  with-> name =%s\n",ptr->name);
printf("********************************\n");
         studentinfo(s1);


        ////////////////////////////////////////////////////
        printf("*********************\n");
     
        printf("student rollno with . =%d\n",s1.rollno);               //actual value is print because call by value call not call by refrence
     

     return 0;
}
void studentinfo(struct student s1)
     {
     printf("student rollno with . =%d\n",s1.rollno);
       printf("student  with .cgpa =%f\n",s1.cgpa);
        printf("student  with . name =%s\n",s1.name);
        s1.rollno=1664;                                   //call by value so no change in actual value
     } 
