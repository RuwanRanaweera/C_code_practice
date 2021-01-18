#include<stdio.h>
void main(){
	
	char a;
	
	printf("Enter the character: ");
	scanf("%c",&a);
	
	switch(a){
		
		case 'a': case 'e': case 'i': case 'o': case 'u':
		
		case 'A': case 'E': case 'I': case 'O': case 'U':
		
		printf("it is vovel");
		break;
		
		default:
		printf("It is a consanant");
		
}
	
	
	
	
	
}