#include<stdio.h>
void main()
{
	float distance,fuel;
	float average;
	
	printf("Enter the distance: ");
	scanf("%f",&distance);
	
	printf("Enter the fuel liters: ");
	scanf("%f",&fuel);

	average=distance/fuel;
	
	printf("Average is %.3f",average);
	
	
}