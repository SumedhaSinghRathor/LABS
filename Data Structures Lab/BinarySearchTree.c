#include<stdio.h>
#include<stdlib.h>

struct node {

	int info;
	struct node *lchild;
	struct node *rchild;

};

struct node *root = NULL;

struct node *makeNode(struct node *root, int item) {

	struct node *nw = (struct node *) malloc (sizeof(struct node));
	nw->info = item;
	nw->lchild = NULL;
	nw->rchild = NULL;
	return(nw); 

}

struct node* InsertNode(struct node* node, int key) {

	if (node == NULL)
		return InsertNode(node, key);

	if (key < node->info) {
	
		node->lchild = InsertNode(node->lchild, key);
		
	} else if (key > node->info) {
		
		node->rchild = InsertNode(node->rchild, key);
	
	}
	
	return node;
}

struct node* Search(struct node* root, int key) {

	if (root == NULL || root->info == key)
		{ return root; }


	if (root->info < key)
		{ return Search(root->rchild, key); }
	
	else { return Search(root->lchild, key); }

}

int main() {

	struct node *head;
	int item, n=5, value[5], k, i;
	
	printf("Enter 1, for inserting nodes in the tree.");
	printf("Enter 2, for deleting nodes in the tree.");
	printf("Enter 3, for searching a value in the tree.");
	printf("Enter 4, for traversing the tree.");
	
	printf("Enter operation value: ");
	scanf("%d", &k);
	
	switch(k) {
	
		case 1:
		printf("Enter the root value to be inserted: ");
		scanf("%d", &item);
		makeNode(head, item);
		
		for (i=0; i<n; i++) {
			printf("Enter a value: ");
			scanf("%d", &value[i]);
			InsertNode(head, value[i]);
		}
		break;
		
		case 2:
		// for deleting nodes
		break;
		
		case 3:
		printf("Enter the value of searched: ");
		scanf("%d", &item);
		Search(head, item);
		break;
		
		case 4:
		// for traversing
		break;
		
		default:
		printf("Operation Invalid.");
	
	}
	
	return 0;

}
