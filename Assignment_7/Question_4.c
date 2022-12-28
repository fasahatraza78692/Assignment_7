#include<stdio.h>
int main()
{
	int i,a,b;
	printf("Enter two numbers to find HCF\n");
	scanf("%d%d",&a,&b);
	for(i=a<b?a:b;i>=1;i--)
	 {
	 	if(a%i==0&&b%i==0)
	 	 {
	 	   printf("HCF = %d",i);
		   break;
		 }
	 	    
	 }
	 return 0;
}
