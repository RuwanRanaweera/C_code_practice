#include<stdio.h>
void main()
{
	int speed;
	printf("Enter speed: ");
	scanf("%d",&speed);
	
	if(speed>31 && speed<40)
	{
		printf("50pounds");
		
	}
	
	else if(speed>41 && speed<50)
	{
		printf("75 pounds");
		
	}
	
	else if(speed>50)
	{
		printf("100 pounds");
		
	}
	
	else 
	{
		printf("invalid number");	
	}
	
	
}