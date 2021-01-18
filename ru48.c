#include<stdio.h>
void main(){
	int i,j,k;
	for(i=0;i<7;i++){
		
		for(j=0;j<7-i;j++)
		{
			printf(" ");
		}
		
		for(k=0;k<i*2-1;k++)
		{
			printf("*");
		}
			
		    printf("\n");
	}
	
	
}