#include<stdio.h>
struct node
{
    int key;
    struct node *left,*right;
};
//single node creation for tree struct
struct node *newnode(int item)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->key=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};
//insert node condition
struct node * insert(struct node *root,int item)
{
    if(root==NULL)
    {
        newnode(item);
    }
    else if(root->key->item)
    {
        root->left=insert(root->left,item);
    }
    else if(root->key<item)
    {
        root->right=insert(root->right,item);
    }
    return root;
};
//inorder syntax
void inorder(struct node *root)
{
    if(root==NULL)
    {
       return;
    }
    inorder(root->left);
    printf("%d",root->left);
    printf("%d",root->key);
    inorder(root->right);
    printf("%d",root->right);
}
//preorder syntax
void preorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d",root->key);
    preorder(root->left);
    printf("%d",root->left);
    preorder(root->right);
    printf("%d",root->right);
}
//postorder syntax
void postorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    printf("%d",root->left);
    postorder(root->right);
    printf("%d",root->right);
    printf("%d",root->key);
}
void main()
{
    struct node *root=NULL;
    int a,b;
    scanf("%d",&a);
    switch(a)
    {
        case(1):scanf("%d",&b);
                root=insert(root,b);
                break;
        case(2):inorder();
                break;
        case(3):preorder(root);
                break;
        case(4):postorder();
                break;
        case(5):printf("enter a invalid choice");
                break;
    }
}
