#include<stdio.h>
int bsearch(int*,int,int);
int main()
{
	int i,n,a[50],k,r;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter no. to be searched : ");
	scanf("%d",&k);
	r=bsearch(a,n,k);
	if(r==-1)
		printf("Search unsuccessful");
	else
		printf("The element at found in %d index",r);
	return 0;
}
int bsearch(int a[],int n,int k)
{
	int l,u,mid;
	l=0;
	u=n-1;
	while(l!=u)
	{
		mid=(l+u)/2;
		if(k>a[mid])
			l=mid+1;
		else if(k<a[mid])
			u=mid-1;
		else
			return mid;
	}
	return -1;
}
