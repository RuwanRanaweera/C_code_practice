#include<stdio.h>
int main(){
	char co;
	printf("What is indicating color light: ");
	scanf("%c",&co);
	
	switch(co){
		case 'r':
		printf("Wait");
		
		break;
		
		case 'y':
		printf("Get Ready");
		
		break;
		
		case 'g':
		printf("Go");
		
		break;
		
		default:
		printf("Wrong input");
		break;
		
	}
	
	
	
}