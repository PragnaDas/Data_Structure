#include<stdio.h>
#include<stdlib.h>
typedef struct link
{
	int data;
	struct link *next;
}node;
void CreateSingleLinkedList(node*);
void DisplaySingleLinkedList(node*);
int main()
{
	int x,y;
	node *h1,*h2;
	h1=(node*)malloc(sizeof(node));
	h2=(node*)malloc(sizeof(node));
	while(1)
	{
		printf("\n press 1 to create SLL1");
		printf("\n press 2 to create SLL2");
		printf("\n press 3 to display SLL1");
		printf("\n press 4 to display SLL2");
		printf("\n press 5 to merge");
		printf("\n press 6 to display merged SLL");
		printf("\n press 7 to exit\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				CreateSingleLinkedList(h1);
				break;
			case 2:
				CreateSingleLinkedList(h2);
				break;
			case 3:
				DisplaySingleLinkedList(h1);
				break;
			case 4:
				DisplaySingleLinkedList(h2);
				break;
			case 5:
				merge(h1,h2);
				break;
			case 6:
				DisplaySingleLinkedList(h1);
				break;
			
			case 7:
				exit(0);
		}
		
	}
	return 0;
}
void CreateSingleLinkedList(node*l)
{
	int ans;
	while(1)
	{
		printf("\n enter the data:");
		scanf("%d",&l->data);
		printf("\n another node 0/1:");
		scanf("%d",&ans);
		if(ans==0)
		{
			l->next =NULL;
			break;
		}
		l->next=(node*)malloc(sizeof(node));
		l=l->next;
	}
}
void DisplaySingleLinkedList(node*l)
{
	while(l->next!=NULL)
	{
		printf("%d ",l->data);
		l=l->next;
	}
	printf("%d ",l->data);
}
void merge(node* l1,node* l2)
{	
	node *h;
	h=(node*)malloc(sizeof(node));
	h=l1;
	while(h->next!=NULL)
		h=h->next;
	h->next=l2;
	
} 
	
