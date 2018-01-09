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
node* findNode(node *,int);
node * DeleteFirstNode(node *);
node * DeleteSpecificNode(node *);
node * DeleteLastNode(node *);



int main()
{
	int n,y;
	node *h=(node*)malloc(sizeof(node));
	while(1)
	{
		printf("\n\n\nCreat a Circular link list press 1 : \n");
		printf("\nDisplay of the link list press 2 : \n");
		printf("\nTo insert the node press 3 : \n");
		printf("\nTo Delete the node press 4 : \n");
		printf("\nexit press 5 \n\n ");
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
			case 4: printf("\n\nPress 1 to Delete from the First Node: ");
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
			case 5: exit(0);
					break;
		}
	}
}


void CreatSingleLinklist(node *h)
{
	node *l=h;
	int ans;
	while(1)
	{
		printf("Enter the data: ");
		scanf("%d",&l->data);
		printf("\n Another node (0/1)");
		scanf("%d",&ans);
		if(ans==0)
		{
			l->next=h;
			break;
		}
	l->next=(node*)malloc(sizeof(node));
	l=l->next;
	}
}

void Display(node *l)
{
	int ch;
	printf("\n--Press 1 To Travers --- press 2 TO exit\n");
	while(1)
	{
		printf("%d -> \t\t",l->data);
		scanf("%d",&ch);
		if(ch==1)
			l=l->next;
		else
			break;
	}
}

node * InsertFirstNode(node *l)
{
	node* new1;
	node* h=l;
	new1=(node*)malloc(sizeof(node));
	printf("Enter data for the new node : ");
	scanf("%d",&new1->data);
	new1->next=l;
	while(l->next!=h)
		l=l->next;
	l->next=new1;
	return(new1);
}

node * InsertSpecificNode(node *h)
{
	int v;
	node* new1, *l;
	new1=(node*)malloc(sizeof(node));
	printf("Enter data for the new node : ");
	scanf("%d",&new1->data);

	printf("Enter the data value of a node where the node is to be inserted : ");
	scanf("%d",&v);
	l=findNode(h,v);
	if(l==NULL)
		printf("Node not found.");
	else
		{
			new1->next = l->next;
			l->next = new1;
		}
	return(h);
}

node * InsertLastNode(node *h)
{
	node* l=h;
	while(l->next!=h)
		l=l->next;

	node* new1;
	new1=(node*)malloc(sizeof(node));
	printf("Enter data for the new node : ");
	scanf("%d",&new1->data);
	l->next=new1;
	new1->next=h;
	return(h);
}

node* findNode(node *l,int v)
{
	while(l!=NULL && l->data!=v)
		l=l->next;
	return (l);
}


node * DeleteFirstNode(node *l)
{
	node*h=l;
	node*temp=h;
	while(l->next!=h)
		l=l->next;
		h=h->next;
		l->next=h;
		free(temp);
		return h;
}


node * DeleteSpecificNode(node *l)
{
	node*h=l;
	int v;
	printf("Enter the data value of a node where the node is to be deleted : ");
	scanf("%d",&v);
		
	while(l->next->data!=v)
			l=l->next;
			node* temp=l->next;
			l->next=l->next->next;
			temp->next=NULL;
		free(temp);
		return(h);
}


node * DeleteLastNode(node *l)
{
	node*h=l;
	while(l->next->next!=h)
		l=l->next;
	l->next=h;
}

