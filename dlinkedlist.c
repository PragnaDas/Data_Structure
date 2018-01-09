#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*prev;
struct node*next;
}*head,*last;
void CreateList(int n);
void DisplayListFromFirst();
void DisplayListFromEnd();
int main()
{
	int n,choice;
	head=NULL;
	last=NULL;
	printf("Enter the no. of nodes you want to create:");
	scanf("%d",&n);
	CreateList(n);
	while(1){
	printf("\nPress 1 to display list from first");
	printf("\nPress 2 to display list from end:");
	scanf("%d",&choice);
	if(choice==1)
	{
		DisplayListFromFirst();
	}
	else if(choice==2)
	{
		DisplayListFromEnd();
	}
	}
	return 0;
}
void CreateList(int n)
{
	int i,data;
	struct node*newNode;
	if(n>=1)
	{
		head=(struct node*)malloc(sizeof(struct node));
		if(head!=NULL)
		{
			printf("Enter data of node:");
			scanf("%d",&data);
			head->data=data;
			head->prev=NULL;
			head->next=NULL;
			last=head;
	for(i=2;i<=n;i++)
	{
		newNode=(struct node*)malloc(sizeof(struct node));
		if(newNode!=NULL)
		{
			printf("Enter data of %d node:",i);
			scanf("%d",&data);
			newNode->data=data;
			newNode->prev=last;
			newNode->next=NULL;
			last->next=newNode;
			last=newNode;
		}
	else
	{
		printf("Unable to allocate memory");
		break;
	}
}
	printf("\nDouble Linked List created successfully\n");
}
	else
	{
		printf("Unable to allocate memory");
	}
  }
}
void DisplayListFromFirst()
{
	struct node*temp;
	int n=1;
	if(head==NULL)
	{
	printf("List is empty");
	}
	else
	{
	temp=head;
	printf("\n\nData in the List:\n");
	while(temp!=NULL)
	{
	printf("Data of %d node=%d\n",n,temp->data);
	n++;
	temp=temp->next;
	}
  }
}
void DisplayListFromEnd()
{
	struct node*temp;
	int n=0;
	if(last==NULL)
	{
	printf("List is empty");
	}
	else
	{
	temp=last;
	printf("\n\Data In The List:\n");
	while(temp!=NULL)
	{
		printf("Data of last %d node=%d\n",n,temp->data);
		n++;
		temp=temp->prev;
	}
  }
}
