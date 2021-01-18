#include<stdio.h>
void main(){
	
	int a,b,c,d,e,total;
	float avarage,percentage;
	printf("Enter 5 marks:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	total = a+b+c+d+e;
	
	printf("Total value is %d\n",total);
	
	avarage=total/5;
	
	printf("Avarage is %.2f\n",avarage);
	
	percentage=avarage*100;
	
	printf("Percentage is %.2f",percentage);
	
	
		
	
	
}