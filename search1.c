#include<stdio.h>
int search(int n,int v,int*);
int main()
{
	int n,i,v,arr[100];
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the value ");
	scanf("%d",&v);
	
	if (search(n,v,arr)==0)
	printf("Not found");
	
	return 0;
}
int search(int n,int v,int arr[])
{
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==v)
		{
			flag=1;
			printf("Element found in %d position",i+1);
			break;
			
		}
	}
	return flag;
}
