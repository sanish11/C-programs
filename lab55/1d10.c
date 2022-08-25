#include <stdio.h>
void main()
{
	int a[20];
	int n,i,s,flag=0;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a number to search:");
	scanf("%d",&s);
	for (i=0;i<n;i++)
	{
		if (a[i]==s)
		{
			flag=1;
			printf("%d found in index %d",s,i);
		}
	}
	if(flag==0)
	{
		printf("Number not found");
	}
}
