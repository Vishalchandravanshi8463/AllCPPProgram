#include<stdio.h>
int main()
{
    /*char first[]="vishal";
    char second[]="chandravanshi";
    strcpy(first,second);
    puts(second);
    return 0;*/
    //char first[100]="vishal";
    //char second[]="chandravanshi";
    //strcat(first,second);                         //concatenates
    //puts(first);
    //printf("%c",first);
   /* char firststr[]="apple";
    char second[]="banana";
    printf("%d",strcmp(second,firststr)); //comparison os two string of first letter*/
    char str[100];
    char ch;
    int i=0;
    while(ch!='\n')
    {
        scanf("%c",&ch);
        str[i]=ch;
        i++;

    }
    str[i]='\0';
    puts(str);
    return 0;
}