#include<stdio.h>
void main(){
	int n;
	printf("Enter the term: ");
	scanf("%d",&n);
	
	if(n<0){
		
		printf("Invalid number\n");
	}
	else if(n==0){
		printf("0\n");
	}
	
	else if(n==1){
		
		printf("0,1\n");
	}
	else{
		printf("0,1");
		
		int i,a=0,b=1,c;
		
		for(i=2;i<=n;i++){
			
			c=a+b;
			printf(",%d",c);
			a=b;
			b=c;
			
		}
		
		
	}
	printf("\n");
	
}