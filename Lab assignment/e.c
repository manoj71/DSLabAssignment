//e.Program to create a binary tree and traverse inorder,postorder and preorder through recursion
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
void Postorder(struct node* node)
{
     if (node!= NULL)
     {
     Postorder(node->left);
     Postorder(node->right);
     printf("%d ", node->data);
     }
}
void Inorder(struct node* node)
{
     if (node)
     {
     Inorder(node->left);
     printf("%d ", node->data);
     Inorder(node->right);
     }
     else
        return ;
}
void Preorder(struct node* node)
{
     if(node!= NULL)
     {
     printf("%d ", node->data);
     Preorder(node->left);
     Preorder(node->right);
     }
}
int main()
{
    struct node *root=create();
     printf("Preorder traversal of binary tree is \n");
     Preorder(root);
     printf("Inorder traversal of binary tree is \n");
     Inorder(root);
     printf("Postorder traversal of binary tree is \n");
     Postorder(root);
}
