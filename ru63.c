#include<stdio.h>
void main(){
	float a,b,sum;
	char d;
	
	printf("Enter Oparator sign: ");
	scanf("%c",&d);
	
	printf("Enter the two number: ");
	scanf("%f%f",&a,&b);
	
	switch(d)
	{
		case '+':
		sum=a+b;
		printf("Value is: %.2f",sum);
		break;
		
		case '-':
		sum=a-b;
		printf("Value is: %.2f",sum);
		break;
		
		case '*':
		sum=a*b;
		printf("Value is: %.2f",sum);
		break;
		
		case '/':
		sum=a/b;
		printf("Value is: %.2f",sum);
		break;
		
		default:
		printf("Invalid Number");
		
		
		
}
	
}