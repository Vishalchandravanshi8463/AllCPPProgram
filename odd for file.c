#include<stdio.h>
int main()
{
   /* FILE *fptr;
    fptr=fopen("odd.txt","w");
    int n;
    printf("enter the n \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf(fptr,"%d\n",i);
        }
    }
    fclose(fptr);*/
    FILE *fptr;
    fptr=fopen("odd.txt","r");
    int a;
    //fprintf("enter the a \n);
    fscanf(fptr,"%d",&a);
 int b;
    fprintf("enter the b\n" );
    fscanf(fptr,"%d",&b);
    fclose(fptr);

    fptr = fopen("odd.txt","w");
    fprintf(fptr,"%d",a+b);
fclose(fptr);
    return 0;
}