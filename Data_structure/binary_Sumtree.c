#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
bool isSumTree(struct Node* node)
{
    if (node == NULL || (node->left == NULL && node->right == NULL))
    {
        return true;
    }
    bool leftSubtree = isSumTree(node->left);
    bool rightSubtree = isSumTree(node->right);
    if (leftSubtree && rightSubtree && (node->data == node->left->data + node->right->data))
    {
        return true;
    }
    return false;
}
int main()
{
    struct Node* root = newNode(26);
    root->left = newNode(10);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(6);
    root->right->right = newNode(3);

    if (isSumTree(root))
    {
        printf("The given tree is a SumTree\n");
    }
    else
    {
        printf("The given tree is not a SumTree\n");
    }
    printf("The given tree is a SumTree\n");
    return 0;
}
