#include<stdio.h>
void main()
{
	int n,i,c,a=0,b=1;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("0");
	}
	
	else if(n==1)
	{
		printf("0 , 1");
	}
	
	else
	{
		printf("0 , 1");
		for(i=2;i<=n+1;i++)
		{
			c=a+b;
			printf(" , %d",c);
			a=b;
			b=c;
			
		}
	}
	
	
}