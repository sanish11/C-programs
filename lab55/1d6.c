#include <stdio.h>
int main()
{
	int a[20];
	int n,i;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements in reverse:\n");
	for (i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
