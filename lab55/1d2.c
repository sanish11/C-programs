
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
	printf("All negative elements in the array:\n");
	for (i=0;i<s;i++)
	{
		if (n[i]<0)
		printf("%d\n",n[i]);
	}
	return 0;
}
