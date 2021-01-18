#include<stdio.h>

int main(){
	char op;
	float v1,v2,t1,t2,t3,t4;
	
	printf("Enter oprator :");
	scanf("%c",&op);
	
	printf("Enter 2 values: ");
    scanf("%f%f",&v1,&v2);

    switch(op){
		
		case '+':
		t1=v1+v2;
		printf("%.2f",t1);
		break;
		
		case '-':
		t2=v1-v2;
		printf("%.2f",t2);
		break;
		
		case '*':
		t3=v1*v2;
		printf("%.2f",t3);
		break;
		
		case '/':
		t4=v1/v2;
		printf("%.2f",t4);
		break;
		
		default:
		printf("wrong input");
		break;
		
		
		
		
	}	
	
	
	
	
}