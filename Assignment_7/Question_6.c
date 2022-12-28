#include<stdio.h>
int main()
{
	int n,i;
	printf("All prime numbers under 100\n");
	for(n=1;n<=100;n++)
	{
	  for(i=2;i<=n/2;i++)
	    if(n%i==0) 
			break;
	  if(i==n/2+1)
	       printf("%d ",n);
	}
	return 0;
}
