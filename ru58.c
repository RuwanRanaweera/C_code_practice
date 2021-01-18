#include<stdio.h>
void main(){
	int a;
	printf("Enter value: ");
	scanf("%d",&a);
	
	switch(a){
		
		case 20:
        printf("I like a ice cream");break;

		case 30:
        printf("I like a chocolate");break;
		
		case 60:
        printf("I like a Apple");break;
		
		default:
		printf("I do not like anything");
		break;
	}
	
	
	
	
}