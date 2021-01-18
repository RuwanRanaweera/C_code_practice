#include<stdio.h>
void main()
{
	int i,a;
	float sum;
	printf("Enter the number: ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		sum=1/(float)(i*i);
		
	}
	
	printf("sumvalue is %f",sum);
	
	
	
}