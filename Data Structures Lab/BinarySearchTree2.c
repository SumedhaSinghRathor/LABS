void TraverseInOrder(node *root) {

	if (root!=NULL) {
	
		Inorder(root->lchild);
		printf("%d", root->info);
		Inorder(root->rchild);
	
	}
	
	Inorder(node *next) {
	
		Inorder(root->lchild);
		printf("%d", root->info);
		Inorder(root->lchild);
	
	}

}

void disp(node *head) {

	if (head == NULL) { return; }
	
	printf("%d", head->info);
	
	if (head->next!=NULL) {
	
		disp(head->next->next);
		printf("%d", head->info);
	
	}

}

