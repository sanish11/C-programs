#include<stdio.h>
int main()
{
	int i=1,n,sum;
	printf("enter a  natural num from which u want the addition from 1");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		sum=sum+n;
	}
	printf("sum=%d",sum);
}
