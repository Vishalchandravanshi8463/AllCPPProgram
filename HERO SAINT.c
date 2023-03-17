#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	   int a1,a2,a3;
	   scanf("%d%d%d",&a1,&a2,&a3);
	   int b1,b2,b3;
	   scanf("%d%d%d",&b1,&b2,&b3);
	   if((a1+a2+a3)==(b1+b2+b3))
	   {
	      printf("Pass\n");
	      
	   }
	   else
	   {
	      printf("Fail\n");
	   }
	}
	return 0;
}

