#include<stdio.h>
void main(){
	
	int no;
	printf("Enter the number: ");
	scanf("%d",&no);
	int i;
	float sum=0.0;
	
	for(i=1;i<=no;i++){
		
			sum=sum+1.0/(i*i);
	}
	printf("Answer is %.2f\n",sum);
}