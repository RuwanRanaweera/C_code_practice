#include<stdio.h>
void main(){
	
	char code;
	
	printf("Enter your code ");
	scanf("%c",&code);
	
	switch(code){
		
		case 'A':
		case 'a':
		printf("Discount  0.0");
		break;
		case 'B':
		case 'b':
		printf("Discount  0.1");
		
		case 'C':
		case 'c':
		printf("Discount  0.2");
		
		default:
		printf("Discount  0.3");
		break;
		
		
	}
	
	
}
