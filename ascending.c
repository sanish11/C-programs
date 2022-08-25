#include<stdio.h>
int main()
{
	int a[5],i,j,temp=0;
	printf("enter 5 num");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("/n before sorting /n");;
	for(i=0;i<5;i++)
	{
		printf("%d/t",a[i]);
	}
	for(i=0;i<5-1;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n after soritng");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}
