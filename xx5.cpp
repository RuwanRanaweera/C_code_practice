#include<stdio.h>
#define PI 3.14159

int main(){
	
	float area,radius,circu;

	
	printf("Enter radious: ");
	scanf("%f",&radius);	
	
	area=PI*radius*radius;
	circu=2*PI*radius;
	
	printf("Area is %f\n ",area);
		printf("ciru is %f\n ",circu);
		
		
}
