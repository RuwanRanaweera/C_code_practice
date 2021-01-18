#include<stdio.h>
int main(){
	float a,b,c;
	
	printf("Enter cm value: ");
	scanf("%f",&a);
	
	b=a/100;
	c=a/100000;
	
	printf("cm to m %.3f:\n",b);
	printf("cm to km %.4f: \n",c);

	
}
