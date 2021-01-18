#include<stdio.h>

int main(){
	
	int m1,m2,m3,to,avg;
	printf("Enter marks 3 subjects: ");
	scanf("%d%d%d",&m1,&m2,&m3);
	
	to=m1+m2+m3;
	avg=to/3;
	
	switch(avg/10){
		case 10:
		case 9:
		case 8:
		
		printf("A");
		break;
		
		case 7:
		case 6:
		printf("B");
	    break;
		
		case 5:
		printf("C");
		break;
		
		case 4:
		printf("S");
		break;
		
		default:
		printf("Fail");
		
		
		
		
	}
	
	
	
	
	
	
}
