#include <stdio.h>
void main()
{
	int a[20],b[20];
	int i,n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter elements of first array:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements in first array:\n");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nCopying elements of first array to second array...\n");
	printf("Elements in second array:\n");
	for (i=0;i<n;i++)
	{
		b[i]=a[i];
		printf("%d ",b[i]);
	}
}
