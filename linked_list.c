#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node *next;	
}node;
void createSingleLinkedList(node*);
void displaySingleLinkedList(node*);
int main()
{
	int x;
	node *h=(node*)malloc(sizeof(node));
	while(1)
	{
		printf("\nPress 1 to create a Single Linked List");
		printf("\nPress 2 to display the Single Linked List");
		printf("\nPress 3 to exit \n");
		scanf("%d",&x);
		switch(x)
		{
			case 1: createSingleLinkedList(h);
					break;
			case 2: displaySingleLinkedList(h);
					break;
			case 3: exit(0);
		}
	}
	return 0;
}
void createSingleLinkedList(node *l)
{
	int ans;
	while(1)
	{
		printf("\nEnter data : ");
		scanf("%d",&l->data);
		printf("\nAnother node(0/1) : ");
		scanf("%d",&ans);
		if(ans==0)
		{
			l->next=NULL;
			break;
		}
		l->next=(node*)malloc(sizeof(node));
		l=l->next;
	}
}
void displaySingleLinkedList(node *l)
{
	while(l->next!=NULL)
	{
		printf("%d ",l->data);
		l=l->next;
	}
	printf("%d",l->data);
}
