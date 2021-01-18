#include<stdio.h>

int main(){
	
	int i = 3;
	
	int j=12;
	
	printf("%d\n",(++i)++);
	
	int k = sizeof(j++);
	
	printf("%d \n %d\n",j,k);
	
	
	return 0;

}
