//b.Program to create a doubly linked list,delete an element and print the output
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
}* head;
void create()
{
    struct node *newnode,*temp;
int a,n,i;
head=(struct node *)malloc(sizeof(struct node));//creatig the head node
printf("enter first node data");
scanf("%d",&a);
head->data=a;
head->next=NULL;
head->prev=NULL;
temp=head;
printf("enter number of nodes except first node");
scanf("%d",&n);
for(i=0;i<n;i++)
{
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&a);
newnode->data=a;
newnode->next=NULL;
newnode->prev=temp;
temp->next=newnode;
temp=newnode;
}
printf("\n");
}
void delete()
{
    int a;
struct node *temp;
temp=head;
printf("enter the node data to be deleted");
scanf("%d",&a);
while(temp->next->data!=a)
{
temp=temp->next;
}
struct node *temp1=temp->next;//pointing to the node to be deleted
temp->next=temp1->next;
temp1->next->prev=temp;

free(temp1);
}
void display()//displaying contents of list
{
struct node *temp;
temp=head;
while(temp!=NULL)
{
printf("%d  ",temp->data);//printing the nodes
temp=temp->next;
}
printf("\n");
}
int main()
{
create();
display();
delete();
display();
}
