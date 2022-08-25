#include<stdio.h>
int main()
{
	int a,factorial=1,i;
	printf("enter a num to make its factorial");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		factorial=factorial*i;
		
	
	}
		printf("%d",factorial);
}
