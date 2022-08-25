#include <stdio.h>
void main()
{
	int n[20],e[20],o[20];
	int s,i,j=0,k=0;
	printf("Enter the size of array:\n");
	scanf("%d",&s);
	printf("Enter elements of array:\n");
	for (i=0;i<s;i++)
	{
		scanf("%d",&n[i]);
	}
	for (i=0;i<s;i++)
	{
		if (n[i]%2==0)
		{
			e[j]=n[i];
			j++;
		}
		else
		{
			o[k]=n[i];
			k++;
		}
	}
	printf("The even elements are:\n");
	for (i=0;i<j;i++)
	{
		printf("%d ",e[i]);
	}
	printf("\nThe odd elements are:\n");
	for (i=0;i<k;i++)
	{
		printf("%d ",o[i]);
	}
}
