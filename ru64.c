#include<stdio.h>
void main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	
	switch(a)
	{
		case 11:
		printf("Delhi");
		break;
		
		case 22:
		printf("Mumbai");
		break;
		
		case 33:
		printf("Kolkata");
		break;
		
		case 40:
		printf("Chennai");
		break;
		
		default:
		printf("Area code is not recognized!!");
		
	}
}