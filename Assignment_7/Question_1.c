#include<stdio.h>
int main()
{
	int i,x=-1,y=1,z,n;
	printf("Enter which term you want to find of Fibonnaci series\n");
	scanf("%d",&n); 
	for(i=1;i<=n;i++)
	{
		z=x+y;
		x=y;
		y=z;   
	}
	printf("%dth Term is %d",n,z);
	return 0;
}
