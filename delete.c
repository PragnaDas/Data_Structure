#include<stdio.h>
int main()
{
	int n,i,p,arr[50],t;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter position where the value will be deleted ");
	scanf("%d",&p);
	for(i=p;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	
	for(i=0;i<n-1;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
