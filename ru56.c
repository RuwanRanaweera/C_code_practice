#include<stdio.h>
void main(){
	
	float amount;
	
	printf("Enter the total value: ");
	scanf("%f",&amount);
	
	if(amount>5000)
	{
		amount = amount- (amount*15/100);
	}
	else
	{
	    amount = amount-(amount*10/100);	
	}
	
	printf("Pay bill %.2f",amount);
	
}