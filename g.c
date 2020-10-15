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
int Leaf(struct node* node)
{
  if(node == NULL)
    return 0;
  if(node->left == NULL && node->right==NULL)
    return 1;
  else
    return (Leaf(node->left)+Leaf(node->right));
}
int main()
{
    struct node *root=create();
    int c=countnodes(root);
    int l=Leaf(root);
    int nonl=c-l;
    printf("number of leaf nodes in a binary tree is:%d\n",l);
    printf("number of non-leaf nodes in a binary tree is:%d",nonl);
}

