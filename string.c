#include<stdio.h>
#include<string.h>
//int countstring(char arr[]);
int main()
{
    /*char name[50];
    scanf("%s",name);
    printf("name is %s",name);
    return 0;*/
    char name[]="vishal";
   // fgets(fullname,100,stdin);
    int length=strlen(name);
    printf("%d",length);

   // puts(fullname);
 //  printf("%d \n",countstring(fullname));
return 0;
}
/*int countstring(char arr[])
{
    int  count =0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    return count-1;
}*/