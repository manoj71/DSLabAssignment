//f.Program to calculate number of nodes in binary tree
#include<stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
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
static int count = 0;
int countnodes(struct node *root)
{
    if(root != NULL)
    {
        countnodes(root->left);
        count++;
        countnodes(root->right);
    }
    return count;
}
int main()
{
    struct node *root=create();
    int c=countnodes(root);
    printf("number of nodes in a binary tree is:%d",c);
}
