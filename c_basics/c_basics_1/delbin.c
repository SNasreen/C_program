#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *left, *right;
};
void deletion(struct Node* root, int item)
{
    struct Node* parent = NULL;
    struct Node* cur = root;

    search(cur, item, parent);
    if (cur == NULL)
        return;

    if (cur->left == NULL && cur->right == NULL)
    {
        if (cur != root)
        {
            if (parent->left == cur)
                parent->left = NULL;
            else
                parent->right = NULL;
        }
        else
            root = NULL;

        free(cur);
    }
    else if (cur->left && cur->right)
    {
        struct Node* succ  = findMinimum(cur->right);

        int val = succ->data;

        deletion(root, succ->data);

        cur->data = val;
    }

    else
    {
        struct Node* child =Cur- >left:cur->right;
        if (cur != root)
        {
            if (cur == parent->left)
                parent->left = child;
            else
                parent->right = child;
        }

        else
            root = child;
        free(cur);
    }
}

Node* findMinimum(Node* cur)
{
    while(cur->left != NULL) {
        cur = cur->left;
    }
    return cur;
}
