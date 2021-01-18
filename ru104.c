#include<stdio.h>
#include<math.h>
void main()
{
	int i=1;
	int mul=1;
	
	while(i<=10)
	{
		mul=mul*i;
		i++;
		
	}
	
	printf("%d\n",mul);
	
	int k=4;
	int ans = pow(k,5);
	printf("pow=%d",ans);
	
	
	
}