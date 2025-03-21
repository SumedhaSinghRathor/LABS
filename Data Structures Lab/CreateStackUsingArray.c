// Write a menu driven program to perform pop, push, check stack empty/full or not, display stack elements

#include<stdio.h>
#define MAX 5

int top = -1, inp_array[MAX];

void pop(int a[MAX]) {
	
	if (top == -1) {
	
		printf("\nUnderflow!!");
	
	} else {
	
		printf("\nPopped element: %d", inp_array[top]);  
        	top = top - 1;
        
        }

}  

void push(int a[MAX], int x) {
	
	if (top == MAX - 1) {
	
		printf("\nOverflow!!");
	
	} else {
	
		printf("\nEnter the element to be added onto the stack: ");
		scanf("%d", &x);
		top = top + 1;
		inp_array[top] = x;
	
	}  

}

void show(a[MAX]) {
	
	if (top == -1) {
		
		printf("\nUnderflow!!");
	
	} else {
	
		printf("\nElements present in the stack: \n");
		
		for (int i = top; i >= 0; --i) {
		
			printf("%d\n", inp_array[i]);
			
		}
	
	}
	
}  

int main() {

	int a[MAX], choice, i, d;
	
	printf("Enter 5 values for the stack: ");
	
	for (i=0; i<5; i++) {
	
		scanf("%d", &a[i]);
		printf("%d pushed into the stack\n", a[i]);
	
	}
	
	printf("--------------------------------");
	
	printf("ENTER 1, to pop a value from stack");
	printf("ENTER 2, to push a value into the stack");
	printf("ENTER 3, to display all the values of a stack \n");
	
	printf("Enter value for operation: ");
	scanf("%d", &choice);
	
	
	switch(choice) {
	
		case 1:
		pop(a[MAX]);
		break;
		
		case 2:
		printf("Enter a value to be pushed into the stack: ");
		scanf("%d", &d);
		push(a[MAX], d);
		break;
		
		case 3:
		printf("Stack: ");
		show(a[MAX]);
		break;
		
		default:
		printf("Invalid Operation");
		
	
	}
	
	return 0;

}
