#include <stdio.h>
void main()
{
	int n[3][3],m[3][3];
	int i,j;
	printf("Enter elements of a 3x3 matrix:\n");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&n[i][j]);
		}
	}
	printf("Matrix:\n");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",n[i][j]);
		}
		printf("\n");
	}	
	printf("Modified matrix:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			if (n[i][j]<5)
			{
				m[i][j]=15;
			}
			else
			{
				m[i][j]=n[i][j];
			}
				printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	
}
