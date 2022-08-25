#include <stdio.h>
void main()
{
	int a[20],b[20],c[50];
	int m,n,i,j;
	printf("Enter size of first array:\n");
	scanf("%d",&m);
	printf("Enter elements:\n");
	for (i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter size of second array:\n");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++)
        {
            c[i] = a[i];
         }
     for(j=0;j<n;j++)
        {
            c[i] = b[j];
            i++; 
        }
	printf("Merged array:\n");
	for (i=0;i<n+m;i++)
	{
		printf("%d\n",c[i]);
	}
	
}
