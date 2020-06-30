#include<stdio.h>
int main()
{
	int a[10][10],i,n,m,j;
	printf("Enter Row And Column Size: ");
	scanf("%d%d",&m,&n);
	printf("Enter The Matrix: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix After Reversing The Row: \n");
	for(i=0;i<m;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			printf("%d ",a[i][j]);	
		}
		printf("\n");
	}
}