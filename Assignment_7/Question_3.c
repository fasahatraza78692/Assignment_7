#include<stdio.h>
int main()
{
	int i,x=-1,y=1,z,n,flag=0,N;
	printf("Enter in how many terms of Fibonnaci series you want to find the number\n");
	scanf("%d",&n);
    printf("Enter a number to find\n");
    scanf("%d",&N);
	for(i=1;i<=n;i++)
	{
		z=x+y;
		if(z==N)
		  {
		  	flag=1;
		  	break;
		  }
		x=y;
		y=z;   
	}
	if(flag==1)
	  printf("Number is present");
	else
	  printf("Number is not present");
	
	return 0;
}
