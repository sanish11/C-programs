#include<stdio.h>
int main()
{
	int a,b ,sum;
	char ch;
	ch='y';
	do{
		printf("enter 2 numbers:");
		scanf("%d %d",&a,&b);
		sum=a+b;
		printf("sum=%d",sum);
		printf("\n do u want to add again?\n if yes press y else press n");
		scanf(" %c",&ch);
		
	}while(ch=='y');
}
