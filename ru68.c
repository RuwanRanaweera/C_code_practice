#include<stdio.h>
void main()
{
	float a , b;
	printf("Enter the length: ");
	scanf("%f",&a);
	
	b=a/100;
	printf("Length in m: %.2f\n",b);
	
	b= a/100000;
	
	printf("Length in Km: %.4f",b);
	
	
	
}