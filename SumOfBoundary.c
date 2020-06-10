#include<stdio.h>
void main()
{
	int n,m,sum1=0,sum2=0,a[10][10],i,j,value=0,sum=0;
	scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&value);
			a[i][j]=value;
		}
	}
	printf("The Boundary Elements Are:");
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n)
			{
				printf("%d ",a[i][j]);
				sum=sum+a[i][j];
			}
			else
			{
				printf(" ");
			}
		}
		
	}
	printf("The Boundary element sum is %d",sum);		
}
