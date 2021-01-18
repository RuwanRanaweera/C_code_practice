#include<stdio.h>
void main()
{
	int i,j,k,p=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<5-i;j++)
		{
			
			printf(" ");
			
		}
		
		for(k=1;k<=p;k++)
		{
			printf("*");
		}
		p=p+2;
		
		printf("\n");
	}
	
	
}