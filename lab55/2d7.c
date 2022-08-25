#include <stdio.h>
void main()
{
	int m[3][4],n[3][4],o[3][4];
	int i,j;
	printf("Enter elements of matrix A:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	printf("Enter elements of matrix B:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			scanf("%d",&n[i][j]);
		}
	}
	printf("Matrix A:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	printf("Matrix B:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%d\t",n[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			o[i][j]=2*(m[i][j]+n[i][j]);
		}
	}
	printf("Matrix C:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%d\t",o[i][j]);
		}
		printf("\n");
	}
}
