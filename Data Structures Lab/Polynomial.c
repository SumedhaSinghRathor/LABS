#include<stdio.h>

typedef struct n {

	int coeff;
	int exp;
	struct n *next;

} node;

node *InsertTerm(int c, int e, node *head);

node *readPoly() {

	node *head = NULL;
	int c, e;
	char ch;
	
	do {
	
		printf("Enter the coefficient and exp of the term: ");
		scanf("%d %d", &c, &e);
		head = InsertTerm(c, e, head);
		printf("Enter 'y' for adding one more term ");
	
	} while (ch == 'y');

}

void *writePoly(node *head) {

	node *p;
	p=head;
	
	while (p != NULL) {
	
		printf("%dx^%d", p->coeff, p->exp);
		p = p->next;
		
		if(p!=NULL) {
		
			printf(" + ");
		
		}
	
	}

}

node *addPoly(node *A, node *B) {

	node *aptr, *bptr, *cptr;
	aptr = A; bptr = B;
	node *C;
	cptr = C;
	
	while ((aptr!=NULL)&&(bptr!=NULL)) {
	
		if(aptr->exp == bptr->exp) {
		
			C = InsertTerm(aptr->coeff + bptr->coeff, aptr->exp, c);
			
			aptr = aptr->next;
			bptr = bptr->next;
		
		} else if (aptr->exp > bptr->exp) {
		
			C = InsertTerm(aptr->coeff, aptr->exp, c);
			aptr = aptr->next;
		
		} else {
		
			C = InsertTerm(bptr->coeff, bptr->exp, c);
			bptr = bptr->next;
		
		}
	
	}

	while (aptr != NULL) {
	
		c = InsertTerm(aptr->coeff, aptr->exp, c);
		aptr = aptr->next;
	
	}
	
	while (bptr != NULL) {
	
		c = InsertTerm(bptr->coeff, bptr->exp, c);
		bptr = bptr->next;
	
	}

	return(c);

}

int main() {

	node *A, *B, *c;
	
	printf("Enter the polynomial:");
	A = readPoly();
	
	printf("Enter another polynomial:");
	B = readPoly();
	
	C = addPoly();
	
	writePoly(A);
	writePoly(B);
	writePoly(C);
	
	return 0;

}
