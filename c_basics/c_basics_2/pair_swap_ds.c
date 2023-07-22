#include <stdio.h>
#include <stdlib.h>

// A Linked List Node
struct Node
{
	int data;
	struct Node *next;
};

// Helper function to insert a new node at the beginning of the linked list
void push(struct Node** headRef, int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = data;
	newNode->next = *headRef;
	*headRef = newNode;
}

// Helper function to print the linked list
void printList(struct Node *node)
{
	while (node)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}

// Function to pairwise swap adjacent nodes of a linked list
void rearrange(struct Node **headRef)
{
	// if the list is empty or contains just one node
	if (*headRef == NULL || (*headRef)->next == NULL) {
		return;
	}

	struct Node* curr = *headRef, *prev = NULL;

	// consider two nodes at a time and swap their links
	while (curr != NULL && curr->next != NULL)
	{
		struct Node* temp = curr->next;
		curr->next = temp->next;
		temp->next = curr;

		if (prev == NULL) {
			*headRef = temp;
		}
		else {
			prev->next = temp;
		}

		prev = curr;
		curr = curr->next;
	}
}

int main(void)
{
	int arr[] = { 1, 2, 3, 4};
	unsigned n = sizeof(arr)/sizeof(arr[0]);

	struct Node* head = NULL;
	for (int i = n - 1; i >= 0; i--) {
		push(&head, arr[i]);
	}
	printf("before: \n");
	printList(head);
	printf("\n");
	rearrange(&head);
	printf("After: \n");
	printList(head);

	return 0;
}
