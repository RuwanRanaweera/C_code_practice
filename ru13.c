#include<stdio.h>
int main(){
	
	int radius;
	float area,perimeter;
	radius = 6;
	
	perimeter = 2*3.14*radius;
	
	printf("perimeter of the circle=  %f inches\n",perimeter);
	
	area = 3.14*radius*radius;
	printf("Area of the circle =%f cm \n",area);
}