#include <stdio.h>
int  main(){
	
	char member ;
	int amt ;
	float discount = 0;
	
	printf("Enter member or non member ");
	scanf("%c",&member);
	
	printf("Enter the purchas amount : ");
	scanf("%d",& amt);
	
	switch(member){
		
		case 'm' : case'M':
			if(amt>5000){
			
			discount = amt * 0.15;
		}
		
		else {
			discount = amt* 0.10;
			
		}
		
		break;
		
		case 'n': case'N':
			if(amt>5000){
			
			discount = amt * 0.07;
		}
		
		else{
			discount = 0;
		}
		
		break;
		
		default :
			
			printf("Invalid letter\n");
			
	}
	
	float netAmt = amt -discount;
	
	printf("Net Amount :% 0.2f \n",netAmt);
	
}
