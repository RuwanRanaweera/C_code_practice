#include<stdio.h>

void main(){
	int a,b,c;
	
	printf("Enter the value: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a==b && b==c)
	{
		printf("samapada trinagle");
	}
	else if(a==b|| a==c || b==c)
	{
		printf("sama divi pada ");
	}
	else 
	{
		printf("visamapada");
	}
		
	
	
	
}