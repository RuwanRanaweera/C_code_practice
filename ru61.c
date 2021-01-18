#include<stdio.h>
void main(){
	char a;
	float b;
	
	
	printf("Enter the character: ");
	scanf("%c",&a);
	
	printf("Enter the amount: ");
	scanf("%f",&b);
	
	switch(a){
	case 'm':
	if(5000>b)
	{
	b=b-b*15/100;	
	}
	else
	{
		b=b-b*10/100;
	}	
	break;
	case 'n':
	if(5000>b)
	{
	b=b-b*7/100;	
	}
	break;
	default:
	printf("Not valid ");
	
	}
	printf("Total value is : %.2f",b);
}