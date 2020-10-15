#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
}* front,*rear;
void enqueuefront(int x)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(front==NULL)
        front=rear=newnode;
    else
    {
        newnode->next=front;
        front->prev=newnode;
        front=newnode;
    }
}
void enquerear(int x)
{
     struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(front==NULL)
        front=rear=newnode;
    else
    {
        newnode->prev=rear;
        rear->next=newnode;
        rear=newnode;
    }
}
void display()
{
    struct node *temp;
    if(front=='\0'&&rear=='\0')
        printf("queue is empty\0");
    else
    {
        temp=front;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
    printf("\n");
}
void deque_front()
{
    struct node *temp;
    temp=front;
    if(front=='\0'&&rear=='\0')
        printf("queue is empty\n");
    else
    {
        printf("%d\n",front->data);
        front=front->next;
        if(front==NULL)
            rear=NULL;
        free(temp);
    }
}
void deque_rear()
{
     struct node *temp;
    temp=rear;
    if(front=='\0'&&rear=='\0')
        printf("queue is empty\n");
    else
     {    printf("%d\n",rear->data);
          rear = rear->prev;
       // If only one element was present
        if (rear == NULL)
            front = NULL;
        else
            rear->next = NULL;
        free(temp);
    }
}
int main()
{
      int a;int i=1;
    printf("insert at front 1\n");
     printf("insert at rear 2\n");
      printf("delete at front 3\n");
       printf("delete at rear 4\n");
        printf("display 5\n");
        printf("0 to exit\n");
        while(i)
        {   printf("enter choice");
        scanf("%d",&i);
            switch(i)
            {
            case 1:{printf("enter a no.");
            scanf("%d",&a);
                enqueuefront(a);
                break;
                }
                case 2:{printf("enter a no.");
            scanf("%d",&a);
                enquerear(a);
                break;
                }
                case 3:deque_front();
                break;
                case 4:deque_rear();
                break;
                case 5:display();
                break;
            }
        }
}
