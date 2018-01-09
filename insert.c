#include<stdio.h>
int main()
{
	int n,i,v,p,arr[50],t;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter value and position where the value will be inserted ");
	scanf("%d %d",&v,&p);
	for(i=n;i>=p;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[p-1]=v;
	for(i=0;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
