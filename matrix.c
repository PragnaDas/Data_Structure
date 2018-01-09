#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int main()
{
	int i,j,r,c;
	printf("Enter no. of rows : ");
	scanf("%d",&r);
	printf("Enter no. of columns : ");
	scanf("%d",&c);
	int *a=(int*)malloc(r*c*sizeof(int));
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",(a+(i*c+j)));
		}
	}
	printf("The matrix  is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%5d\t",*(a+(i*c+j)));
		printf("\n\n");	
	}
	return 0;
}
