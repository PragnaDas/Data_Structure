#include<stdio.h>
int bsearch(int arr[],int lb,int ub,int data)
{
	int mid=(lb+ub)/2;
	if(ub>=lb)
	{
		if(arr[mid]>data)
			return(bsearch(arr,lb,mid-1,data));
		else if(arr[mid]<data)
			return(bsearch(arr,mid+1,ub,data));
		else
			return mid;
	}
	else return -1;
}
int main()
{
	int data,pos,n,i;
	int arr[100];
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	printf("Enter the array : ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the number to be searched : ");
	scanf("%d",&data);
	pos=bsearch(arr,arr[0],arr[n-1],data);
	if(pos!=-1)
		printf("The data is found in %dth position",pos+1);
	else
		printf("Data not found");
}

