#include<stdio.h>
void main(){
	char a;
	printf("Enter the character: ");
	scanf("%c",&a);
	
	if(a>=65 && a<=90 || a>=97 && a<=122 )
		
	{
			printf("it is a alpabet");
	}
	
	else 
	{
	
		printf("Not a alpabet");
	}
}