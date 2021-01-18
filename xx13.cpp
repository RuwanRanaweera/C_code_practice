#include<stdio.h>
void add(int x);

int  main(){

	int x=4;
	add(x);
	printf("the value of x is : %d",x);


}


void add(int x){
	x = x+5;
	printf("the value of x is : %d\n",x);
}
