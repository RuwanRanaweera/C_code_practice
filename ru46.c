#include<stdio.h>
void main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	int i;
	for(i=2;i<(num/2);i++){
		
		if(num%i==0){
			printf("not a prime number\n");
			return;
		}
	}
	
	printf("It is prime number");
	
	
}