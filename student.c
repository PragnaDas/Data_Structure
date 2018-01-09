#include<stdio.h>
struct student
{
	int roll;
	char name[50];
	double marks;
};
int main()
{
	struct student s[10];
	for(i=0;i<n;i++)
	{
		printf("Enter the details : \n");
		scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
	}
}
