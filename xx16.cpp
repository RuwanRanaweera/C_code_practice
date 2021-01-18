#include<stdio.h>
int main(){
	int a,b,c,d,e;
	float avg,percentage,sum,total;
	total=500;
	
	printf("Enter the subject marks1: \n");
	scanf("%d",&a);
	
		printf("Enter the subject marks2: \n");
	scanf("%d",&b);
	
	
		printf("Enter the subject marks3: \n");
	scanf("%d",&c);
	
	
		printf("Enter the subject marks4: \n");
	scanf("%d",&d);
	
	
		printf("Enter the subject marks5: \n");
	scanf("%d",&e);
	
	sum=a+b+c+d+e;
	
	printf("Total marks 5 subjects:%.2f\n",sum);
	
	avg=sum/5;
	
	printf("Average of marks: %.2f\n",avg);
	
	percentage=(sum/500)*100;
		printf("Average of marks: %.2f",percentage);
	
	
}
