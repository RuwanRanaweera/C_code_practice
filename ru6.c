#include<stdio.h>

int main(){
	
	int a,b,c;
	printf("Enter a , b ,c : ");
	scanf("%d %d %d",&a, &b, &c);
	
	if(a>b && a>c){
		
		printf("a is greater than b and c");
		
		
	}
	
	else if(b>a && b>c){
		
		printf("b is greater than a and c");
		
		
	}
	
	else if(c>b && c>a){
		
		printf("c is greater than b and a");
		
		
	}
	
	else {
		printf("all are equal or any two values are same");
	}
	
	return 0;
}