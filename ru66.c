#include<stdio.h>
//#define PI 3.14

int main()
{
	const float PI=3.14;
	int radius;
	printf("Enter the radius value: ");
	scanf("%d",&radius);
	
float area= PI*radius*radius;
	
float circumference=2*PI*radius;
	
	printf("Area is %.2f\n",area);
	
	printf("Circumference is %.2f\n",circumference);
	
	
	
	
}