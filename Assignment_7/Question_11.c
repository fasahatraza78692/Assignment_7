#include<stdio.h>
int main()
{
	int i=1,count=0,n;
	printf("Enter a number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		count++;
		if(n&i)
		 {
		 	printf("Position of first 1 is = %d",count);
		 	break;
		 }
		i=i*2;
	}
	return 0;
}
