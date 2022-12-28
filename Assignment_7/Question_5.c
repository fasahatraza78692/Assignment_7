#include<stdio.h>
int main()
{
	int i,a,b;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	for(i=a<b?a:b;i>=1;i--)
	 {
	 	if(a%i==0&&b%i==0)
	 	    break;
	 }
	 if(i==1)
	   printf("Numbers are co-prime\n");
	else
	   printf("Numbers are not co-prime\n");
	return 0;
}
