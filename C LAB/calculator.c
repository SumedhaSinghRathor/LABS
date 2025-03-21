// attempted on 15th March 2023

#include<stdio.h>
int main() {

	int a, b, c, d;
	
	printf("Enter two numbers for operation: ");
	scanf("%d %d", &a, &b);
	
	printf("\n \nEnter 1 for addition.");
	printf("\nEnter 2 for subtraction.");
	printf("\nEnter 3 for multiplication.");
	printf("\nEnter 4 for quotient.");
	
	printf("\n \nEnter choice: ");
	scanf("%d", &d);
	
	switch(d) {
	
		case 1:
		c = a + b;
		printf("%d + %d = %d", a, b, c);
		break;
		
		case 2:
		c = a - b;
		printf("%d - %d = %d", a, b, c);
		break;
		
		case 3:
		c = a * b;
		printf("%d * %d = %d", a, b, c);
		break;
		
		case 4:
		c = a / b;
		printf("%d / %d = %d", a, b, c);
		break;
		
		default:
		printf("Invalid Input.");
	
	}
	
	return 0;

}
