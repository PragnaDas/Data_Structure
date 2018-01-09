#include<stdio.h>
#include<stdlib.h>
typedef struct link
{
	int data;
	struct link *next;
}node;

void CreatSingleLinklist(node *);
void Display(node *);
node * InsertFirstNode(node *);
node * InsertSpecificNode(node *);
node * InsertLastNode(node *);
node * DeleteFirstNode(node *);
node * DeleteSpecificNode(node *);
node * DeleteLastNode(node *);
node * reversesingLinkedList(node *h);


int main()
{
	int n,y;
	node *h=(node*)malloc(sizeof(node));
	while(1)
	{
		printf("\n\n\nCreat a single link list press 1 : \n");
		printf("\nDisplay of the link list press 2 : \n");
		printf("\nTo insert the node press 3 : \n");
		printf("\nTo Delete the node press 4 : \n");
		printf("\nTo Reverse the list press 5: \n");
		printf("\nexit press 6 \n\n ");
		printf("\nEnter the choice of manu:  ");
		scanf("%d",&n);
		
		switch(n)
		{
			case 1: CreatSingleLinklist(h);
					break;
			case 2:	Display(h);
					break;
			case 3: printf("\n\nPress 1 to Insert from the First Node: ");
					printf("\n\nPress 2 to Insert from the Specific Node: ");
					printf("\n\nPress 3 to Insert from the Last Node: ");
					printf("\n\nPress 4 Go To The Main Manu:  ");	
					scanf("%d",&y);
					switch(y)
					{
						case 1: h = InsertFirstNode(h);
								break;
						case 2:h=InsertSpecificNode(h);
								break;
						case 3:h=InsertLastNode(h);
								break;
						case 4: break;
					}
					break;
			case 4:printf("\n\nPress 1 to Delete from the First Node: ");
					printf("\n\nPress 2 to Delete from the Specific Node: ");
					printf("\n\nPress 3 to Delete from the Last Node: ");
					printf("\n\nPress 4 Go To The Main Manu:  ");
					printf("\nEnter the choice of menu:  ");	
					scanf("%d",&y);
					switch(y)
					{
						case 1: h = DeleteFirstNode(h);
								break;
						case 2:h=DeleteSpecificNode(h);
								break;
						case 3:h=DeleteLastNode(h);
								break;
						case 4: break;
					}
					break;
			case 5: h=reversesingLinkedList(h);
					break;
			case 6: exit(0);
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

node * InsertFirstNode(node *l)
{
	node* new1;
	new1=(node*)malloc(sizeof(node));
	printf("Enter data for the new node : ");
	scanf("%d",&new1->data);
	new1->next=l;
	return(new1);
}

node * InsertSpecificNode(node *h)
{
	node * new1, *l;
	int v;
	new1=(node*)malloc(sizeof(node));
	printf("Enter data for the new node : ");
	scanf("%d",&new1->data);
	printf("Enter the Specific position: ");
	scanf("%d",&v);
	l = h;
	while(l->data!=v && l!=NULL)
		l=l->next;

	if(l==NULL)
		printf("Node is not found");
	else
	{
		new1->next=l->next;
		l->next=new1;
	}
	return (h);
}

node * InsertLastNode(node *h)
{
	node* new1, *l;
	new1=(node*)malloc(sizeof(node));
	printf("Enter data for the new node : ");
	scanf("%d",&new1->data);
	l=h;
	while(l->next!=NULL)
		l=l->next;
		
	l->next=new1;
	new1->next = NULL;
	
	return(h);
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


node * DeleteSpecificNode(node *h)
{
	int v;
	node *temp,*l;
	printf("Enter the specific position: ");
	scanf("%d",&v);
	l=h;
	while(l->next->data!=v)
		l=l->next;

	temp=l->next;
	l->next=l->next->next;
	temp->next=NULL;
	free(temp);
	return(h);
}


node * DeleteLastNode(node *h)
{
	node *temp;
	node *l=h;
	while(l->next->next!=NULL)
		l=l->next;
		
	temp=l->next;
	l->next=l->next->next;
	free(temp);
	return(h);
}

node * reversesingLinkedList(node *h)
{
	node *c,*p;
	p=NULL;
	c=h;
	
	while(h!=NULL)
	{
		h=h->next;
		c->next=p;
		p=c;
		c=h;
	}
	h=p;
	return(h);
}
