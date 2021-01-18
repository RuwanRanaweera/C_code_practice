#include<stdio.h>
void main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	int i,fac=1;
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
		
	}
	
	printf("Factorial value is %d\n",fac);
	
}