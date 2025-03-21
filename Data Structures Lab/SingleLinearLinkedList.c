#include<stdio.h>
#include<stdlib.h>

struct Node {

	int data;
	struct Node *next;

};

void insertStart (struct Node **head, int data) {

	struct Node *newNode = (struct Node *) malloc (sizeof(struct Node));
	
	newNode->data = data;
	newNode->next = *head;
	
	*head = newNode;

}

void deleteStart (struct Node **head) {

	struct Node *temp = *head;
	
	if (*head == NULL) {
	
		printf("Linked List Empty, nothing to delete");
		return;
	
	}
	
	*head = (*head)->next;
	
	free(temp);

}

void display(struct Node* node) {

	printf("Linked List: ");
	
	while (node!=NULL) {
	
		printf("%d ", node->data);
		node = node->next;
	
	}
	
	printf("\n");

}

int search(struct Node* head, int x) {

	struct Node* current = head;
	while (current != NULL) {
	
		if(current->data == x) { 
		
			current = current->next;
			printf("Yes");
			
		}
		
		else { printf("No"); }

	}
}

void addSpecified(struct Node **head, int val, int position) {
	
	struct Node *newNode = malloc(sizeof(struct Node));
	newNode->data = val;
	
	struct Node *temp = *head;
	for (int i = 1; i < position; i++) {
		
		if (temp->next != NULL) {
			temp = temp->next;
		}
		
    }
    
    newNode->next = temp->next;
    temp->next = newNode;

}

void count(struct Node *head) {
	struct Node *temp = head;
	int count = 0;
	
	while (temp != NULL) {
	
		count++;
		temp = temp->next;
	}
	
    printf("\nThe number of nodes are %d\n", count);
    
}

int main() {

	struct Node *head = NULL;
	int n, i, a[6], b;
	int k, pos;
	
	printf("Enter the number of values to be inserted: ");
		scanf("%d", &n);
		
		for (i=0; i<n; i++) {
		
			printf("Enter a value: ");
			scanf("%d", &a[i]);
			insertStart(&head, a[i]);
		
		}
		
	display(head);
	
	printf("---------------------------------------\n");
	
	printf("Enter 1, for deletion of the 1st node\n");
	printf("Enter 2, for traversal of linked list\n");
	printf("Enter 3, for searching node with particular value\n");
	printf("Enter 4, for adding node at specified position\n");
	printf("Enter 5, for counting the number of nodes");
	
	printf("\n\nEnter the value of operation: ");
	scanf("%d", &k);
	
	switch (k) {
		
		case 1:
		deleteStart(&head);
		display(head);
		break;
		
		case 2:
		display(head);
		break;
		
		case 3:
		printf("Enter the value to be searched: ");
		scanf("%d", &b);
		search(head, b);
		break;
		
		case 4:
		printf("Enter element to be inserted: ");
		scanf("%d", &b);
		printf("Enter position: ");
            	scanf("%d", &pos);
            	addSpecified(&head, b, pos);
            	display(head);
            	break;
            	
            	case 5:
            	count(head);
		break;
		
		default:
		printf("That is not an available option.");
		
		return 0;
		
	}
	
	return 0;

}
