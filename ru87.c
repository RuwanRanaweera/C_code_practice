#include<stdio.h>
void main()
{
	int a,i;
		
	printf("Enter the number: ");
	scanf("%d",&a);
	
	for(i=2;i<=a/2;i++ )
	{
		if(a%i==0)
		{
			printf("not a primr number\n");
			
			return;
		}
		
	}
	
	
	printf("Prime number");
	
}