#include<stdio.h>
void main()
{
		int Celsius;
		float Fahrenheit;
		
		printf("Enter the celsius value: ");
		scanf("%d",&Celsius);
		
		Fahrenheit=(Celsius*9/5)+32;
		
		printf("Fahrenheit value is %.2f",Fahrenheit);
}