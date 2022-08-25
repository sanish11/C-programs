#include<stdio.h>
int main()
{
	int i,j;
	for(i='e';i>='a';i--)
	{
		for(j='a';j<=i;j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
}
