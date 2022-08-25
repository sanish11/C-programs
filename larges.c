#include<stdio.h>
int main()
{
	int small,largest,i,a[5];
	printf("enter 5 num:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	largest=a[0];
	small=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>largest)
		{
			largest=a[i];
		}
		if(a[1]<small)
		{
			small=a[i];
		}
	}
	printf("largest=%d",largest);
	printf("shortest=%d",small);
}
