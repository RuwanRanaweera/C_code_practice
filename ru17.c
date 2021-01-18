#include<stdio.h>

int main(){
	
	int x;
	float y;
	
	printf("input total distance in km : ");
	scanf("%d",&x);
	
	printf("Input total fuel spent in liters : ");
	scanf("%f",&y);
	
	printf("average consumption %.3f ", x/y);
}