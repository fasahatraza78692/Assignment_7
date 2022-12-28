#include<stdio.h>
int main()
{
	int a,count=0,b,d,i,e=1,f=0,ar;
	printf("Enter a number to check wether it is Armstrong or not\n");
	scanf("%d",&a);
	b=a;
	ar=a;
	while(a!=0)
	{
		count++;
		a/=10;
	}
	
	while(b!=0)
	{
		d=b%10;
		b/=10;
		   for(i=1;i<=count;i++)
		     e=e*d;
		f=f+e;
		e=1;
	}
	if(ar==f)
	   printf("Armstrong");
	else
	   printf("Not Armstrong");
	return 0;
}
