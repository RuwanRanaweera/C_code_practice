#include<stdio.h>

int main(){
	
	char op;
	int no1, no2;
	float ans;
	
	printf("Enter op (+ , - , * , /) :");
	scanf("%c",&op);
	
	printf("Enter no1 amd no2 :");
	scanf("%d %d ",&no1, &no2);
	
	switch(op){
		
		case '+':
	    ans = no1 + no2;
		break;	
		
		case '-':
	    ans = no1 - no2;
		break;
		
		case '*':
	    ans = no1 * no2;
		break;
		
		case '/':
	    ans = no1 /(float) no2;
		break;	
		
		default:
		printf("Invalid operator \n");	
		
	
}

printf("Answer is %.2f \n",ans);

}
