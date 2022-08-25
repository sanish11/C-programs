#include <stdio.h>
int main()
{
	int n[20];
	int i,s,count=0;
	printf("Enter the size of array:\n");
	scanf("%d",&s);
	printf("Enter elements of array:\n");
	for (i=0;i<s;i++)
	{
		scanf("%d",&n[i]);
	}
	for (i=0;i<s;i++)
	{
		if(n[i]<0)
		{
			count++;
		}
	}
	printf("Number of all negative elements is %d",count);
}
