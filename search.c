#include<stdio.h>
int main()
{
	int n,i,v,arr[100],flag=0;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the value ");
	scanf("%d",&v);
	for(i=0;i<n;i++)
	{
		if(arr[i]==v)
		{
			printf("The value is found in %dth position",i+1);
			break;
			flag=1;
		}
	}
	if (flag!=1)
	printf("Not found");
	return 0;
}
