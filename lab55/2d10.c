#include <stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10];
	int r1,c1,i,j,k,r2,c2,sum=0;
	printf("Enter number of rows and colums of first matrix:\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter elements of first matrix:\n");
	for (i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter number of rows and columns of second matrix:\n");
	scanf("%d %d",&r2,&c2);
	if(c1!=r2)
	{
		printf("The matrices cannot be multiplied with each other\n");
	}
	else
	{
		printf("Enter elements of second matrix:\n");
		for (i=0;i<r2;i++)
		{
		for (j=0;j<c2;j++)
		{
		scanf("%d%d",&b[i][j]);
		}
		}
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c2;j++)
			{
				for (k=0;k<r2;k++)
				{
					sum=sum+ a[i][k]*b[k][j];
				}
				c[i][j]=sum;
				sum=0;
			}
		}
		printf("Product of the matrices:\n");
		for(i=0;i<r1;i++)
		{
			for (j=0;j<c2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
}
