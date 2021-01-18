#include<stdio.h>

void main(){
	
	int month, year;
	printf("Enter the month and year :");
	scanf("%d %d",&month,&year);
	
	switch(month){
		
		case 1: case 3: case 5: case 7: case 8: case 10 : case 12 :
		printf("31 days\n");
	break;
		
		case 4 : case 6 : case 9 : case 11:
			
			printf("30 days\n");
			break;
			
			case 2:
				if(year % 4==0){
					printf(" 29 days\n");
				}
				
				else{
					
					printf("28 days\n");
				}
		 
		}


	
}
