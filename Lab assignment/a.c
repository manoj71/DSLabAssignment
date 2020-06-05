//a. Program to create a singly linked list,delete a node and display after deletion
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*head;
void create()
{
struct node *newnode,*temp;
int a,n,i;
head=(struct node *)malloc(sizeof(struct node));//creatig the head node
printf("enter first node data");
scanf("%d",&a);
head->data=a;
head->next=NULL;
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
temp->next=newnode;
temp=newnode;
}
printf("\n");
}
//deletig a node in a data structure
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
struct node *temp1=temp->next;
temp->next=temp1->next;
free(temp1);
}
void display()
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
