#include<stdio.h>
void toh(int n,char s,char t,char d)
{
	if(n>0)
	{
		toh(n-1,s,d,t);
		printf("%d %c->%c\n",n,s,d);
		toh(n-1,t,s,d);
	}
}
int main()
{
	int n;
	char source='A',temp='B',dest='C';
	printf("Enter the number of Disk :");
	scanf("%d",&n);
	printf("Sequence is :\n");
	toh(n,source,temp,dest);
	return 0;
}

