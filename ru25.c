#include<stdio.h>
void main(){
	char cl;
	printf("what is the indicating color of light : ");
	scanf("%c",&cl);
	
		if(cl=='r'){
			printf("wait\n");
			
		}
		else if(cl=='y'){
			
			printf("Get Ready\n");
			
		}
		else if(cl=='g'){
			
			printf("Go \n");
		}
		else{
			printf("Wrong input");
		}
	
} 