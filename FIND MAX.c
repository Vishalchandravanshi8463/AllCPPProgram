#include<stdio.h>
//#include<climits>
int main()
{
    int mx=-1999999;
    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the arr value \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
           mx=max(mx,arr[i]);
           printf("%d",mx);

    }
     return 0;
}