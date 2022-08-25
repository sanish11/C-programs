#include <stdio.h>
void main()
{
	int n[10],i,j,l1,l2;
	printf("Enter 10 numbers:");
	for (i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	l1=l2=n[0];
	for (j=1;j<10;j++)
	{
		if (n[j]>l1)
		{
			l2=l1;
			l1=n[j];
		}
	}
	printf("Second largest number is %d",l2);
}
