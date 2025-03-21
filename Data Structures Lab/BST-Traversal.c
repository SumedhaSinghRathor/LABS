#include <stdio.h>
#include <stdlib.h>

struct node {
	
	int key;
	
	struct node *left, *right;

};

struct node* newNode(int item) {

	struct node* temp = (struct node*)malloc(sizeof(struct node));
	
	temp->key = item;
	
	temp->left = temp->right = NULL;
	
	return temp;

}

struct node* insert(struct node* node, int key) {

	if (node == NULL) { return newNode(key); }
	
	if (key < node->key) { node->left = insert(node->left, key); }
	
	else if (key > node->key) { node->right = insert(node->right, key); }
	
	return node;

}


void inOrder(struct node* root) {

	if (root != NULL) {
	
		inOrder(root->left);
		printf("%d ", root->key);
		inOrder(root->right);
		
	}

}

void preOrder(struct node* root) {
	
	if (root != NULL) {
		
		printf("%d ", root->key);
		preOrder(root->left);
		preOrder(root->right);
		
	}

}

void postOrder(struct node* root) {
	
	if (root != NULL) {
		
		postOrder(root->left);
		postOrder(root->right);
		printf("%d ", root->key);
	
	}

}

struct node* search(struct node* root, int key) {

	if (root == NULL || root->key == key) { return root; }
	
	if (root->key < key) { return search(root->right, key); }
	
	return search(root->left, key);

}

int maxValue(struct node* root) {

	struct node* current = root;
	
	while (current->right != NULL) 
        	current = current->right;
        	
        return (current->key);

}

int minValue(struct node* root) {

	struct node* current = root;
	
	while (current->left != NULL) {
		current = current->left;
	}
	
	return (current->key);

}

unsigned int getLeafCount(struct node* node) {

	if(node == NULL) { return 0; }
	if(node->left == NULL && node->right==NULL) { return 1; }            
  	else { return getLeafCount(node->left)+getLeafCount(node->right); }
}

int main() {
	
	int n, b;
	int a[n];
	struct node* root = NULL;
	
	printf("Enter the root of the Binary Search Tree: ");
	scanf("%p", (void **)root);
	
	printf("Enter the number of values to be entered in the Binary Search Tree: ");
	scanf("%d", &n);
	
	int i;
	for (i=0; i<n; i++) {
	
		printf("Enter value: ");
		scanf("%d", &a[i]);
		insert(root, a[i]);
	
	}
	
	printf("1) Pre-Order Traversal");
	printf("2) Post-Order Traversal");
	printf("3) In-Order Traversal");
	printf("4) Search for an element");
	printf("5) Insert an element in the BST");
	printf("6) Display largest element of the BST");
	printf("7) Display smallest element of the BST");
	printf("8) Display height of a node");
	printf("9) Count the number of leaf nodes");
	
	int k;
	printf("Enter operation value: ");
	scanf("%d", &k);
	
	
	switch(k) {
	
	case 1:
	preOrder(root);
	break;
	
	case 2:
	postOrder(root);
	break;
	
	case 3:
	inOrder(root);
	break;
	
	case 4:
	if (search(root, key) == NULL) {
	
		printf("%d, not found in the Binary Search Tree", key);
	
	} else {
	
		printf("%d, not found in the Binary Search Tree", key);
	
	}
	
	break;
	
	case 5:
	printf("Enter the value to be inserted: ");
	scanf("%d", &b);
	insert(root, b);
	break;
	
	case 6:
	maxValue(root);
	break;
	
	case 7:
	minValue(root);
	break;
	
	case 8:
	//Display height of a node
	break;
	
	case 9:
	getLeafCount(root);
	break;
	
	default:
	printf("Operation Invalid!");
	
	}

	return 0;
	
}

