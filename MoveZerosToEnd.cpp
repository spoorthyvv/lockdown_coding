// C++ implementation to move all zeroes at the end of array 
#include<iostream>
using namespace std;
int main()
{
	int i,j,a[100],n,b[100],k=1;
	cout<<"Enter The Size Of Array: ";
	cin>>n;
	cout<<"Enter The Array Elements: ";
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(j=1;j<=n;j++)
	{
		if(a[j]!=0)
		{
			b[k]=a[j];
			k++;
		}
		
	}
	while(k<=n)
	{
			b[k]=0;
			k++;
	}
	
	
	cout<<"Output Array is: ";
	for(int p=1;p<=n;p++)
	{
		cout<<b[p]<<" ";
	}
}