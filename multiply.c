#include<stdio.h>
int main()
{
	int i,n,m;
	printf("enter a number for its multiplication");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		m=n*i;
	printf("\n%d*%d=%d",n,i,m);

	}
}
