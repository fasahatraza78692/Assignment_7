#include<stdio.h>
int main()
{
	int i,x=-1,y=1,z,n;
	printf("Enter how many terms of Fibonnaci series you want to print\n");
	scanf("%d",&n);
     
	for(i=1;i<=n;i++)
	{
		z=x+y;
		printf("%d ",z);
		x=y;
		y=z;   
	}

	return 0;
}
