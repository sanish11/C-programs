#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=9;j>i;j--)
		{
			if( i==1 && j==2)
			{
				printf("#");
			}
			else{
			
			printf("*");
			}
		}
		printf("\n");
	}
	printf("there is one imposter among us");
}
