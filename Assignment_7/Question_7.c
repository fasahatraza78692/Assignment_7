#include<stdio.h>
int main()
{
	int n,i,x,y;
	printf("Enter two numbers\n");
	scanf("%d%d",&x,&y);
		printf("Prime numbers between %d and %d\n",x,y);
	       for(n=x+1;n<y;n++)
         	{
	          for(i=2;i<=n/2;i++)
	            if(n%i==0) 
			       break;
	          if(i==n/2+1)
	              printf("%d ",n);
	        }
	return 0;
}
