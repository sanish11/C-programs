#include<stdio.h>
int main()
{
	int i,a[]={1,2,3,4,5,6,7,8,9,0},n,flag=0;

	printf("enter number u want to search:");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(n==a[i])
		{
		
		flag=1;
		break;
	}
	}

	if(flag==1)
	{
		printf("%d lies",n);
	}
	else
	{
		printf("%d doesnt lies",n);
	}
	
}
