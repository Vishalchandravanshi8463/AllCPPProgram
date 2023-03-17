#include<stdio.h>
void reversArr(int arr[],int n);
void printarr(int arr[],int n);
int main()
{
    int arr[]={1,2,3,4,5};
 reversArr(arr,5);
 printarr(arr,5);
 return 0;
}
void reversArr(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
      int firstvalue=arr[i];
      int secondvalue=arr[n-i-1];
      arr[i]=secondvalue;
      arr[n-i-1]=firstvalue;
  }
}
void printarr(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n");
}