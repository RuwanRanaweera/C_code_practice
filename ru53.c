#include<stdio.h>
void main(){
	float amo =0;
	int a;
	printf("enter the unit: ");
	scanf("%d",&a);
	
	if(100>a)
	{	
		amo= a*1.5;
	}
	else if(200>a)
	
	{
		amo=100*1.5 +(a-100)*2.5;
	}
	else if(500>a){
		amo=100*1.5+100*2.5+(a-200)*3.5;
	}
	
	else {
		amo=(100*1.5 + 100*2.5 + 300*3.5 + (a-500)*5);
		
	}
	printf("Amount is :%.3f",+amo);

}