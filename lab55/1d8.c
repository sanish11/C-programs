#include <stdio.h>
void main()
{
	int n[10],i,g,s;
	printf("Enter elements in an array of 10:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	g=s=n[0];
	for (i=1;i<10;i++)
	{
		if (n[i]>g)
		{
			g=n[i];
		}
		if (n[i]<s)
		{
			s=n[i];
		}
	}
	printf("Largest element:%d\nSmallest element:%d",g,s);
}
