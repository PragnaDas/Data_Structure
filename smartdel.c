#include<stdio.h>
#include<stdlib.h>
typedef struct link
{
	int data;
	struct link *next;
}node;

void CreatSingleLinklist(node *);
void Display(node *);
node * DeleteFirstNode(node *);
node * DeleteSpecificNode(node *,int);

int main()
{
	int n,y,v;
	node *h=(node*)malloc(sizeof(node));
	while(1)
	{
		printf("\n\n\nCreat a single link list press 1 : \n");
		printf("\nDisplay of the link list press 2 : \n");
		printf("\nTo Delete the node press 3 : \n");
		
		printf("\nexit press 4 \n\n ");
		printf("\nEnter the choice of menu:  ");
		scanf("%d",&n);
		
		switch(n)
		{
			case 1: CreatSingleLinklist(h);
					break;
			case 2:	Display(h);
					break;
			case 3:	printf("Enter the specific position: ");
					scanf("%d",&v);
					
					if(h->data==v)
						h=DeleteFirstNode(h);
					else
						h=DeleteSpecificNode(h,v);
					break;
			case 4: exit(0);
		}
	}
}


void CreatSingleLinklist(node *l)
{
	int ans;
	while(1)
	{
		printf("Enter the data: ");
		scanf("%d",&l->data);
		printf("\n Another node (0/1)");
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

void Display(node *l)
{
	while(l->next!=NULL)
	{
		printf("%d -> ",l->data);
		l=l->next;
	}
	printf("%d",l->data);
}

node * DeleteFirstNode(node *h)
{
	node *temp;
	temp=h;
	h=h->next;
	temp->next=NULL;
	return(h);
	free(temp);
}

node * DeleteSpecificNode(node *h,int v)
{
	node *temp,*l;
	
	l=h;
	while(l->next->data!=v)
		l=l->next;

	temp=l->next;
	l->next=l->next->next;
	temp->next=NULL;
	free(temp);
	return(h);
}

