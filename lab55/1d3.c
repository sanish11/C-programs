#include <stdio.h>
int main()
{
	int n[20],i,s;
	printf("Enter the size of array:\n");
	scanf("%d",&s);
	printf("Enter elements of array:\n");
	for (i=0;i<s;i++)
	{
		scanf("%d",&n[i]);
	}
	printf("Elements in the array:\n");
	for (i=0;i<s;i++)
	{
		printf("%d\n",n[i]);
	}
	return 0;
}
