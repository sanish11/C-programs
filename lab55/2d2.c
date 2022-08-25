#include <stdio.h>
void main()
{
	int n[3][3],i,j,sum=0;
	printf("Enter elements of a 3x3 matrix:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&n[i][j]);
		}
	}
	printf("Matrix:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",n[i][j]);
			sum+=n[i][j];
		}
		printf("\n");
	}
	printf("Sum of elements:%d",sum);
}
