#include <stdio.h> 
#include <stdlib.h> 
struct Node { 
	int data; 
	struct Node* next; 
}; 


void printList(struct Node* head) 
{ 
	struct Node* ptr = head; 
	while (ptr) { 

		printf("%d -> ", ptr->data); 
		ptr = ptr->next; 
	} 

	printf("NULL"); 
} 


void insert(struct Node** head_ref, int data) 
{ 
	
	struct Node* newNode 
		= (struct Node*)malloc( 
			sizeof(struct Node)); 

	newNode->data = data; 

	newNode->next = *head_ref; 

	
	*head_ref = newNode; 
} 

struct Node* copyList(struct Node* head) 
{ 
	if (head == NULL) { 
		return NULL; 
	} 
	else { 

		struct Node* newNode 
			= (struct Node*)malloc( 
				sizeof(struct Node)); 

		newNode->data = head->data; 

		newNode->next = copyList(head->next); 

		return newNode; 
	} 
} 

struct Node* create(int arr[], int N) 
{ 
	struct Node* head_ref = NULL; 

	for (int i = N - 1; i >= 0; i--) { 

		insert(&head_ref, arr[i]); 
	} 

	return head_ref; 
} 

void printLists(struct Node* head_ref, 
				struct Node* dup) 
{ 

	printf("Original list: "); 

	
	printList(head_ref); 

	printf("\nDuplicate list: "); 

	
	printList(dup); 
} 


int main(void) 
{ 
	int arr[] = { 1, 2, 3, 4, 5 }; 
	int N = sizeof(arr) / sizeof(arr[0]); 

	struct Node* head_ref = create(arr, N); 

	struct Node* dup = copyList(head_ref); 

	printLists(head_ref, dup); 

	return 0; 
}
