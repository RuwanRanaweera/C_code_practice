#include<stdio.h>
int main(){
	
	float a,b,c;
	
	printf("Enter 1st angle:\n");
	scanf("%f",&a);
	
	printf("Enter 2st angle:\n");
	scanf("%f",&b);
	
	c=180-(a+b);
	
	printf("3rd angle is %.2f",c);
	
	
	
}
