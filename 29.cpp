#include<stdio.h>

int main(){
	
	char x;
	printf("Enter character: ");
	scanf("%c",&x);
	
	switch(x){
		
		case 'a': case 'e': case 'i': case 'o': case 'u':
			
			case 'A': case 'E': case 'I': case 'O': case 'U':
				
				printf("Vovel \n");
				break;
				
				default:
					printf("Consonant\n");
					break;
	}
}
