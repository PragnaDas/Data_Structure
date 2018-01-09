#include<stdio.h>
void swap(int*,int*);
void bsort(int*,int);
int main()
{
	int n,i,j,temp,a[100];
	//printf("Enter the number of elements : ");
	scanf("%d",&n);
	//printf("Enter the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bsort(a,n);
	
	return 0;
}
void bsort(int a[],int n)
{
	int i,j,k;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}
		}
		printf("Pass %d : ",i+1);
		for(k=0;k<n;k++)
		{
			printf("%d ",a[k]);
		}
		printf("\n");
	}
}
void swap(int *a,int *b)
{
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
}
