#include<stdio.h>
int main(){
	char code;
	int balance=1500;
    int amount=0.0;
	printf("Enter your transaction code: \n");
	scanf("%c",&code);
	
	printf("Enter your Amount: ");
	scanf("%d",&amount);
	
	switch(code){
		
		case 'd':
		printf("Your deposit succesfully..\n ");
		balance=balance+amount;
		printf("balance is=%d",balance);
		break;
		
		case 'w':
		printf("Your withdrawl succesfully..\n");
		balance=balance-amount;
		printf("balance is=%d",balance);
		break;
		
		default:
		printf("code is not allowed...");
		break;
		
		
	}
	
	
}