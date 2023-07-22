#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node* newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data  = data;
    node->left  = node->right = NULL;
    return(node);
}
struct node* deleteNode(struct node* root, int data)
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

struct node* insert(struct node* node, int data)
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

struct node* minValueNode(struct node* node)
{
    struct node* current = node;
    while (current->left != NULL)
        current = current->left;

    return(current->data);
}
int deleteValues(struct node* root, int deleteValues[], int n)
{
    int i;
    for (i=0; i<n; i++)
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
    root = insert(root, 2);
    root = insert(root, 3);

    int n = sizeof(deleteValues)/sizeof(deleteValues[0]);
    printf("Inorder traversal of the modified tree \n");
    printInorder(root);

    return 0;
}
