#include<stdio.h>

int main(){
	
	int hours,rate,gross;
	float deduction,net;
	
	hours=100,rate=250;
	
	gross=hours*rate;
	
	printf("The Gross salary : %d \n",gross);
	
	deduction=gross*8/100;
	
	printf("Deduction is : %.2f \n",deduction);
	
	
	net=gross-deduction;
	
	printf("Net Salary is %.2f ",net);
	
	
}

