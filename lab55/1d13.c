#include <stdio.h>
void main()
{
	int n[20];
	int s,i,e=0,o=0;
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
			e++;
		}
		else
		{
			o++;
		}
	}
	printf("Even elements:%d\nOdd elements:%d",e,o);
}
