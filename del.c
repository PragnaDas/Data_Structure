#include<stdio.h>
#include<stdlib.h>

typedef struct link
{
	int data;
	struct link *next;
}node;
void createsinglelinklist(node*);
void displaysinglelinklist(node*);
void insertatbeginning(node*);
void insertatend(node*);
void insertatanyposition(node*);
void deletionbeg(node*);
void deletionlast(node*);
void deletionanypos(node*);
int main()
{
	node *h,*l;
	l=h;
	int ch,ch1;
	h=(node*)malloc(sizeof(node));
	while(1)
	{
		printf("Enter 1 to create\n 2 to display\n 3 to insert at begin\n 4 to insert at end\n 5 to insert at any pos\n 6 to deletion at first\n 7 to deletion at last\n 8 deletion at any pos \n 9 to exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				createsinglelinklist(h);
				break;
			case 2:
				displaysinglelinklist(h);
				break;
			case 3:
				insertatbeginning(h);
				break;
			case 4:
				insertatend(h);
				break;					
			case 5:
				insertatanyposition(h);
				break;
			case 6:
				deletionbeg(h);
				break;
			case 7:
				deletionlast(h);
				break;
			case 8:
				deletionanypos(h);
				break;
			case 9:
				exit(0);
		}
	}
}
void createsinglelinklist(node*l)
{
	int x;
	while(1)
	{
		printf("Enter data");
		scanf("%d",&l->data);
		printf("If another node neede press 1 else 0");
		scanf("%d",&x);
		if(x==0)
		{
			l->next=NULL;
			break;
		}
		l->next=(node*)malloc(sizeof(node));
		l=l->next;
	}
}
void displaysinglelinklist(node *l)
{
	node *h;
	h=l;
	while(l->next!=NULL)
	{
		printf("%d->",l->data);
		l=l->next;
	}
	printf("%d",l->data);
}
void insertatbeginning(node *l)
{
	node *new1;
	new1=(node*)malloc(sizeof(node));
	printf("Enter data");	
	scanf("%d",&new1->data);
	new1->next=l;
	l=new1;
}
void insertatend(node *l)
{
	node *new1;
	new1=(node*)malloc(sizeof(node));
	printf("Enter the data");
	scanf("%d",&new1->data);
	while(l->next!=NULL)
		l=l->next;
	l->next=new1;
	new1->next=NULL;
}
void insertatanyposition(node *l)
	{
		int v;
		node *new1;	
		new1=(node*)malloc(sizeof(node));
		printf("Enter the value of after which new node to be formed");
		scanf("%d",&v);
		while(l->data!=v)
			l=l->next;
		printf("Enter the new value");
		scanf("%d",&new1->data);
		new1->next=l->next;
		l->next=new1;
	}
void deletionbeg(node *l)
	{
		node * temp;
		temp=(node*)malloc(sizeof(node));
		l=temp;
		l=l->next;
		temp->next=NULL;
		free(temp);
		return l;
	}
void deletionlast(node *l)
	{
		node* temp;
		temp=(node*)malloc(sizeof(node));
		while(l->next->next!=NULL)
		{
			l=l->next;
		}
		temp=l->next;
		l->next=NULL;
		free(temp);
	}
void deletionanypos(node* l)
{
	int v;
	node* temp;
	temp=(node*)malloc(sizeof(node));
	printf("enter the value to be deleted");
	scanf("%d",&v);
	while(l->next->data!=v)
	{
		l=l->next;
	}
	temp=l->next;
	l->next=l->next->next;
	temp->next=NULL;
	free(temp);
}
