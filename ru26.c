#include<stdio.h>

void main(){
	float amo,bal=10000.00;
	printf("Welcome to ABC credit card\n\n");
	printf("***************************\n\n");
	
	printf("Enter the Amount :Rs ");
	scanf("%f",&amo);
	
	if(amo<=bal){
		
		bal = 10000-amo-(amo*0.03/100);
		printf("Your balance is: Rs %5.2f\n",bal);
		
	}
	
	else
		printf(" The amount exceeds your credit limit...\n");
		printf("Thank you for using ABC credit card...");
	
	
}