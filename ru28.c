#include<stdio.h>
int main(){
	int pur;
	float t1,t2;
	printf("Enter the purchase amount: ");
	scanf("%d",&pur);
	
	if(pur>5000){
		t1= pur-(pur*0.15);
		printf("Total Amount = %.2f\n",t1);
		
		
	}
	else {
		t2= pur-(pur*0.1);
	
		printf("Total Amount =%.2f",t2);
	}
		
		
}