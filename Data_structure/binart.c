#include<stdio.h>
#include<stdlib.h>

struct node
{
	int key;
	struct node *left, *right;
};

struct node *newNode(int item)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

struct node* insert(struct node* node, int key)
{
	if (node == NULL) return newNode(key);

	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);

	return node;
}

struct node * minValueNode(struct node* node)
{
	struct node* current = node;

	while (current && current->left != NULL)
