#include<stdio.h>
#include<stdlib.h>
typedef struct link{
    int data;
    struct link *next;
}node;

node *top=NULL;

void push(int x)
{
    node *new1;
    new1 =(node*)malloc(sizeof(node));
    if(new1==NULL){
        printf(" Stack Overflow .");
        return;
    }
    new1->data=x;
    new1->next=top;
    top=new1;
    //printf("top :%d",top->data);
}

int pop()
{
    int x;
    node *temp;
    //printf("top :%d",top->data);
    if(top==NULL){
        printf(" Stack Underflow.");
        return -1;
    }
    //printf("top :%d",top->data);
    temp=top;
    top=temp->next;
    x=temp->data;
    temp->next=NULL;
    free(temp);
    return x;
}

int peek()
{
    if(top==NULL){
        printf(" Stack Underflow .");
        return -1;
    }
    return top->data;
}

void display()
{
    node *l=top;
    if(l==NULL){
        printf(" Stack Underflow .");
        return;
    }
    printf(" Stack :\n");
    while(l->next!=NULL){
        printf("%d\n",l->data);
        l=l->next;
    }
    printf("%d",l->data);
}

void main()
{
    int x,del,p,n;
    
    while(1){
        printf("\n*****STACK USING LINKLIST*****\n");
        printf(" 1. Push A Element Onto Stack .\n");
        printf(" 2. Pop A Element From Stack.\n");
        printf(" 3. Peek A Element From Stack.\n");
        printf(" 4. Display the Stack.\n");
        printf(" 5. Exit Menu.\n");
        scanf("%d",&x);
        switch(x){
            
            case 1 : printf("\n Enter the element to be pushed :\n");
                     scanf("%d",&n);
                     push(n);
                     break;
                     
            case 2 : del=pop();
                     printf("\n Element to be deleted :%d",del);
                     break;
                     
            case 3 : p=peek();
                     printf("\n Element at the top :%d",p);
                     break;
                     
            case 4 : display();
                     break;
                     
            case 5 : exit(0);
            
            default : printf(" Wrong input .");
                      break;
                      
        }
    }
}         

    
