#include<stdio.h>

int main(){
	int mark;
	
	printf("Enter marks :");
	scanf("%d",&mark);
	
	switch(mark){
		
		case(mark>=80):{
			
			printf("Grades");
		}
		break;
		
		case(mark>=60):{
			
			printf("Distincton");
		}
		break;
		
		case(mark>=50):{
			
			printf("First Division");
		}
		break;
		
		case(mark>=40):{
			
			printf("Pass");
		}
		
		break;
		
		default:
		printf("Fail");
		break;
		
	}
	
	
	
	
}