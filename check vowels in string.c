#include<stdio.h>
int voweles(char str[]);
int main()
{
    char str[]="helloworld";
printf("voweles is :%d",voweles(str));

}
int voweles(char str[])
{
    int count =0;
    for(int i=0;i!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
    }
    return count;
}