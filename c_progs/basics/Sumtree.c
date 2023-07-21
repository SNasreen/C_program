#include<stdio.h>
struct node
{
    int key;
    struct node *left,*right;
};
struct node *newnode(int item)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->key=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};
struct node *insert(struct node *root,int item)
{
    if(root==NULL)
    {
        newnode(item);
    }
    else if(root->key>item)
    {
        root->left=insert(root->left,item);
    }
    else if(root->key<item)
    {
        root->right=insert(root->right,item);
    }
    return root;
};
void preorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d",root->key);
    preorder(root->left);
    preorder(root->right);
}
int toSumTree(struct node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    int old_val = root->key;
    root->key= toSumTree(root->left) + toSumTree(root->right);
    return root->key + old_val;
}
void main()
{
    int b,a;
    scanf("%d",&b);
    while(b--)
    {
        if(root=NULL)
        {
            root=insert(root,a);
            preorder(root);
        }
    }
    toSumTree(root);
}
