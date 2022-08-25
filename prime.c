#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("enter a num:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			flag++;
		}
		
	}
	if (flag==2)
	{
		printf("%d is prime",n);
		
	}
	else
	{
		printf("%d is not prime",n);
	}
}
