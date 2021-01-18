#include<stdio.h>
void main(){
	char d;
	printf("Enter character: ");
	scanf("%c",&d);
	
	switch(d)
	{
		case 'A':
		printf("Excellent");
		break;
		
		case 'B':
		
		case 'C':
		printf("Well Done");
		break;
		
		case 'D':
		printf("You Pass");
		break;
		
		case 'F':
		printf("Better Try Again");
		break;
		
		default:
		printf("Invalid Grade");
		
	}
	
	
}