#include<stdio.h>
void array(int *arr,int n);//arr[]
int main()
{
  int arr[]={1,2,3,4,5};
   array(arr,6);
  return 0;
 
}
void array(int *arr,int n)//arr[]
{
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);

    }printf("\n");
}