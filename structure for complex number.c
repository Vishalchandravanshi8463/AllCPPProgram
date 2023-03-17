#include<stdio.h>
/*struct complex{
    int real;
    int img;

};*/
typedef struct bankaccount
{
    int accountno;
    char name[100];

}acc;
int main()
{
   /* struct complex number1={5,8};
    struct complex *ptr=&number1;
    printf("real part is equal to %d\n",ptr->real);
      printf("img part is equal to %d\n",ptr->img);
      return 0;*/
////////////////////////////////////////////////////
printf("***************************************************\n");

       acc acc1={12345,"vishal"};
       acc acc2={14689,"rohit"};
       printf("acc no is %d\n",acc1.accountno);
              printf(" name is %s\n",acc1.name);

         printf("name of student is %s\n",acc2.name);
                printf("acc no is %d\n",acc2.accountno);

}
