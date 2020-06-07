#include<stdio.h>
int main()
{
	int n,a,l=0,i,j,p;
	printf("Enter The Number: ");
	scanf("%d",&n);
	a=n;
	for(i=n;i>=0;i--)
	{
		for(j=a;j>=0;j--)
		{
			printf(" ");
		}
	
		for(p=0;p<l;p++)
		{
			printf("* ");
			if(l-1==n)
			{
				break;
			}
		}
		l=l+1;
		a=a-1;
		printf("\n");
	}
}