#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
void inorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void preorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{

    if(root==NULL)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
struct node *create(int value)
{
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
};
//to insert on the left
struct node *leftinsert(struct node *root,int value)
{
    root->left=create(value);
    return root->left;
};
//to insert on the right
struct node *rightinsert(struct node *root,int value)
{
    root->right=create(value);
    return root->right;
};
int main()
{
  struct node* root = create(1);
  leftinsert(root, 4);
  rightinsert(root, 6);
  leftinsert(root->left, 42);
  rightinsert(root->left, 3);
  leftinsert(root->right, 2);
  rightinsert(root->right, 33);
  printf("The elements are: \n");
  printf("1 4 6 42 3 2 33 \n");

  printf("Traversal of the inserted binary tree \n");
  printf("Inorder traversal \n");
  inorder(root);

  printf("\nPreorder traversal \n");
  preorder(root);


  printf("\nPostorder traversal \n");
  postorder(root);

}
