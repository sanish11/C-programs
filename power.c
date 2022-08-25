#include<stdio.h>
int main()
{
	int n,power,i,value=1;
	printf("enter power num:");
	scanf("%d ",&power);
	printf("enter a num");
	scanf("%d",&n);
	for(i=1;i<=power;i++)
	{
		value=value*n;
	}
	printf("%d",value);
}
