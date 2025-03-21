#include <stdio.h>
#include <stdlib.h>

struct Node {
	
	int data;
	struct Node* next;
	struct Node* prev;

};


struct Node* createNode(int data) {
	
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = NULL;
	
	return newNode;
}


void insertAtFirst(struct Node** head, int data) {
	
	struct Node* newNode = createNode(data);
	
	if (*head == NULL) {
		*head = newNode;
	} else {
		newNode->next = *head;
		(*head)->prev = newNode;
		*head = newNode;
	}

}


void deleteFirst(struct Node** head) {
	
	if (*head == NULL) {
		
		printf("List is empty. Nothing to delete.\n");
		return;
	
	}
	
	struct Node* temp = *head;
	*head = (*head)->next;
	
	if (*head != NULL) {
		(*head)->prev = NULL;
	}
	
	free(temp);
	
}


void traverse(struct Node* head) {
	
	struct Node* temp = head;
	
	while (temp != NULL) {
	
		printf("%d -> ", temp->data);
		temp = temp->next;
	
	}
	
	printf("NULL\n");

}


void search(struct Node* head, int value) {

	struct Node* temp = head;
	int position = 0;
	
	while (temp != NULL) {
	
		if (temp->data == value) {
			
			printf("Node with value %d found at position %d\n", value, position);
			return;
		
		}
		
	temp = temp->next;
        position++;
        
        }
        
        printf("Node with value %d not found in the list.\n", value);

}

int main() {
	
	struct Node *head = NULL;
	int n, i, a[6], data;
	int choice, pos;
	
	printf("Enter the number of values to be inserted: ");
		scanf("%d", &n);
		
		for (i=0; i<n; i++) {
		
			printf("Enter a value: ");
			scanf("%d", &a[i]);
			insertAtFirst(&head, a[i]);
		
		}
		
	display(head);

        printf("\nMenu:\n");
        printf("1. Insert at first\n");
        printf("2. Insert at entered position\n");
        printf("3. Delete from first\n");
        printf("4. Delete from entered position\n");
        printf("5. Display\n");
        printf("6. Search\n");
        printf("7. Count the number of nodes\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertAtFirst(&head, data);
                break;
                
            case 2:
                deleteFirst(&head);
                break;
                
            case 3:
                display(head);
                break;
                
            case 4:
                printf("Enter value to search: ");
                scanf("%d", &data);
                search(head, data);
                break;
                
            case 5:

                while (head != NULL) {
                    struct Node* temp = head;
                    head = head->next;
                    free(temp);
                }
                
                return 0;
                
            default:
                printf("Invalid choice. Please try again.\n");
        
        }
        
	return 0;
}
