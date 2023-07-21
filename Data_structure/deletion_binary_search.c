#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
int newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data  = data;
    node->left  = node->right = NULL;
    return(node);
}
int deleteNode(struct node* root, int data)
{
    if (root == NULL) return root;
    if (data < root->data)
        root->left = deleteNode(root->left, data);

    else if (data > root->data)
        root->right = deleteNode(root->right, data);

    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = minValueNode(root->right);

        root->data = temp->data;

        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
int insert(struct node* node, int data)
{
    if (node == NULL)
        return(newNode(data));
    else
    {
        if (data <= node->data)
            node->left  = insert(node->left, data);
        else
            node->right = insert(node->right, data);

        return node;
    }
}
int minValue(struct node* node)
{
    struct node* current = node;

    while (current->left != NULL)
        current = current->left;

    return(current->data);
}
void minValueNode(struct node* node)
{
    struct node* current = node;

    while (current->left != NULL)
        current = current->left;

    return(current);
}
struct node* deleteValues(struct node* root,int deleteValues[],int a)
{
    int i;
    for (i=0; i<a; i++)
        root = deleteNode(root, deleteValues[i]);

    return root;
}

void printInorder(struct node* node)
{
    if (node == NULL)
        return;

    printInorder(node->left);

    printf("%d ", node->data);

    printInorder(node->right);
}

int main()
{
    struct node *root = NULL;
    root = insert(root,100);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root,35);
    root = insert(root,45);
    root = insert(root, 20);
    root = insert(root, 60);
    root = insert(root, 150);
    root = insert(root, 130);
    root = insert(root, 170);
    root = insert(root, 120);
    root = insert(root, 140);
    root = insert(root, 190);
    root = insert(root, 195);
    root= insert(root,197);
    int deleteValues[] = {50, 70, 40, 80, 160};
    int n = sizeof(deleteValues)/sizeof(deleteValues[0]);
    printf("Inorder traversal of the modified tree \n");
    printInorder(root);
    return 0;
}
