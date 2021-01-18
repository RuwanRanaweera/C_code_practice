#include<stdio.h>
int main(){
	char id[10];
	int hour;
	double value , salary;
	
	printf("Input the Employee Id :");
	scanf("%s", &id);
	
	printf("Input the working hours:");
	scanf("%d", & hour);
	
	printf("Salary amount: ");
	scanf("%lf",&value);
	
	salary = value * hour;
	
	printf("Employee Id = %s\nSalary = %.2lf\n",id , salary);
	
}