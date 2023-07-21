#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
}*root=NULL,*temp,*temp1,*new;
void create(int n)
{
    int flag=0;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=n;
    new->left=NULL;
    new->right=NULL;
    temp=root;
    temp1=root;
    if(root==NULL)
    {
        root=new;
        temp=new;
    }
    else
    {
        while(1)
        {
            if(temp->left==NULL)
            {
                temp->left=new;
                break;
            }
            else if(temp->right==NULL)
            {
                temp->right=new;
                break;
            }
            else if(flag==0)
            {
                temp=temp->left;
                flag=1;
            }
            else if(flag==1)
            {
                temp=temp->right;
                flag=0;
                temp1=temp1->left;
            }

        }
    }
}
/*void preorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);

}*/
void inorder(struct node *root)
{
    if(root==NULL)
    {
       return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
int toSumTree(struct node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    int old_val = root->data;
    root->data= toSumTree(root->left) + toSumTree(root->right);
    int value=root->data + old_val;
    printf("%d",value);
    if(value==root->data)
    {
        printf("it is a Sumtree");
    }
    else
    {
        printf("It is not a sumtree");
    }
    return 0;
}
void main()
{
    int n;
    do
    {
        scanf("%d",&n);
        if(n>0)
        {
            create(n);
        }
    }while(n>0);
    /*printf("The preorder is \n");
    preorder(root);
    toSumTree(root);
    printf("\n");
    printf("The postorder is \n");
    postorder(root);
    printf("\n");*/
    printf("The inorder is \n");
    inorder(root);
    toSumTree(root);



}
