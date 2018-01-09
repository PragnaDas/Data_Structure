#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int front=0;
int rear=-1;
int lq[MAX];

void enQueue(int x)
{
    if(rear==(MAX-1)){
        printf("\nQueue Overflow .");
        return;
    }
    lq[++rear]=x;
}

int lastElement()
{
    int x;
    if(front==rear){
        
        x=lq[rear];
    }
    return x;
}

int deQueue()
{
    int k;
    if(front>rear){
        printf("\nQueue is Underflow .");
        return -1;
    }
    
    int x= lq[front++];
    return x;
}
int main()
{
    int x,i,del,t;
    printf("\n***** Linear Queue *****\n");
    printf("\n1. Enter the element .");
    printf("\n2. Delete the element.");
    printf("\n3. Display the Queue.");
    printf("\n4. Exit.");
    while(1){
        printf("\n Enter choice :");
        scanf("%d",&x);
        switch(x){
        
            case  1  : printf("\nEnter the element :");
                       scanf("%d",&t);
                       enQueue(t);
                       break;
                       
            case  2  : del=deQueue();
                       printf("\nDeleted Element :%d",del);
                       break;
                       
            case  3  : printf("\nQueue :");
                       for(i=front;i<=rear;i++){
                           printf("%4d",lq[i]);
                       }
                       break;
                       
            case  4  : exit(0);
            
            default  : printf("\n Wrong Input . Try Again.");           
                       break;
                       
        }
    }
}           
