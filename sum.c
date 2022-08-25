#include<stdio.h>
int main()
{
	int i,n,sum=0,avg,num;
	printf("enter the nth term");
	scanf("%d",&n);
	printf("enter a number");

	for(i=1;i<=n;i++)
	{	
scanf("%d",&num);
		sum=sum+num;
	}	
	avg=sum/n;
	printf("sum=%d",sum);
	printf("avg=%d",avg);
}
