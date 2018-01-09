#include<stdio.h>
void swap(int*,int*);
void ssort(int*,int);
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
	ssort(a,n);
	
	return 0;
}
void ssort(int a[],int n)
{
	int i,j,k,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<=n-1;j++)
		{
			
			if(a[j]<a[min])
			{
				
				min=j;
			}
		}
		swap(&a[i],&a[min]);
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
