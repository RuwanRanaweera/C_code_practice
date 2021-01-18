#include<stdio.h>
int main(){
	
	int x;
	printf("Enter the year: \n");
	scanf("%d",&x);
	
	if(x%4==0){
			
			if(x%100==0){
			
					if(x%400==0){
						
						printf("leap year\n");
					}
					
					else{
						
						printf("Not a leap year");
					}
			
			}
			
			else{
				
				
				printf("leap year");
			}		
		
		
	}
	
	else{
			
			printf("Not a leap year");

	}
}
