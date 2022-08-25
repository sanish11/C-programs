#include<stdio.h>
int manin()
{
	int a[10],i,small,large;
	printf("enter numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	large=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
			printf("%d",large);
		}
		
	}
	return 0;
}
