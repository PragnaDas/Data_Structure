#include<stdio.h>
void isort(int*,int);
int main()
{
	int i,n,a[50];
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	isort(a,n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
void isort(int a[],int n)
{
	int i,j,k,key,t1,t2;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		
		while(j>=0&&a[j]>key)
		{
			t1=a[j+1];
			t2=a[j];
			a[j+1]=a[j];
			j=j-1;
			printf("Pass %d : Between %d and %d : ",i,t1,t2);
			printf("\n");
		}
		a[j+1]=key;
		
			for(k=0;k<n;k++)
				printf("%d ",a[k]);
			printf("\n");
		
	}
}
