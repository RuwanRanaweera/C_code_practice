#include<stdio.h>
int add(int num);

int main(){
	
	int x=8;
	int num;
	num =add(x);
	add(x);
	printf("the vallue of num is %d",num);
	
}


int add(int num){
	
	num =num +10;
	return num;
	
	
}
