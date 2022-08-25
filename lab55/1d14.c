#include <stdio.h>
void main()
{
	int a[10];
	int i,n,max,min,av,sum=0;
	printf("Enter number of people:");
	scanf("%d",&n);
	printf("Enter ages of %d people:\n",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=min=a[0];
	for (i=1;i<n;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
		if (a[i]<min)
		{
			min=a[i];
		}
		sum=sum+a[i];
	}
	av=sum/n;
	printf("Maximum age is %d\n",max);
	printf("Minimum age is %d\n",min);
	printf("Average age is %d\n",av);
}
