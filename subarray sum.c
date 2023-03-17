#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);                            //subarray with c;;;;;;;;;;;;;;;;

    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=i;j<n;j++)
        {
            count=count+arr[j];
            printf("%d\n",count);
        }
    }
    return 0;
}