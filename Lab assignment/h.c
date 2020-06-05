//h.Program to create a binary tree and traverse it non-recursively and find it height
#include<stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
//stack to store tree nodes during traversal
struct snode
{
    struct node *tr;
    struct snode *next;
}*top;
void push(struct node *t)
{     struct snode *newnode;
  newnode = (struct snode *) malloc(sizeof(struct snode));
  newnode->tr  = t;
  newnode->next =NULL;
   if(top==NULL)
    top=newnode;
  else
  {
     newnode->next=top;
     top=newnode;
  }
}
struct node * pop()
{   struct node *temp;
    if(top==NULL)
        return;
    else
    {   temp=top->tr;
        top=top->next;
    }
    return(temp);
}
int isempty()
{
    if(top==NULL)
        return 1;
    else
        return 0;
}
//creating a binary tree
struct node *create()
{
    int x;
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data or -1 for no node");
    scanf("%d",&x);
    if(x==-1)
    {
        return NULL;
    }
    newnode->data=x;;
    printf("enter left child of %d\n",x);
    newnode->left=create();
    printf("enter right child of %d\n",x);
    newnode->right=create();
    return(newnode);
}
//non recursive tree traversal using stack
void traverse(struct node *root)
{
    while(1)
    {
        while(root!=NULL)
        {
            push(root);
            root=root->left;
        }

        if(isempty()){
            return ;}

        root=pop();
        printf("%d",root->data);
        root=root->right;
    }
}
//calculating height of a tree
int height(struct node *t)
{
    if(!t)
        return 0;
    if(t->left==NULL&&t->right==NULL)
        return 0;
    int l,r;
    l=height(t->left);
    r=height(t->right);
    return(1+((l>r)?l:r));
}
int main()
{    int h;
    struct node *root=create();
    printf("tree traversal without recursion:");
    traverse(root);
    h=height(root);
    printf("\n height of a tree is :%d",h);
}
