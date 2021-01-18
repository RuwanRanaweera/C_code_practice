#include<stdio.h>
void main()
{
	
float de,net;	
int hour ,hrate,Gs;

printf("Enter hour and hrate: ");
scanf("%d%d",&hour,&hrate);

Gs= hour *hrate;

de=Gs*8/100;


net=Gs-de;

printf("Net salary is %.3f",net);


	
}