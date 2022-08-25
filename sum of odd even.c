#include<stdio.h>
int main()
{
	int i=1,a=0,b=0;
	for(i=1;i<100;i++)
	{
		if(i%2==0)
		{
		a=a+i;
		}
		else
		{
			b=b+i;
		}
	}
	printf("sum of odd num is %d",b);
	printf("summ pf even num is %d",a);
}
