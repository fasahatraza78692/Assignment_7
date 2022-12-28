#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number\n");
	scanf("%d",&n);
	n++;
	while(n!=0)
	{
	    for(i=2;i<=n/2;i++)
	    if(n%i==0) 
			break;
	    if(i==n/2+1)
	     {
	       printf("Next prime number is = %d ",n);
	       break;
		 }
		 
		 n++;
	}
	return 0;
}
