#include<stdio.h>
int main() {

	int p, q, r, s;
	
	printf("Enter 4 resistances on a wheatstone bridge: ");
	scanf("%d %d %d %d", &p, &q, &r, &s);
	
	if (p * s == r * q) {
	
		printf("The wheatstone bridge is balanced.");
	
	} else {
	
		s = (r * q) / p;
		printf("The wheatstone bridge is not balanced.\n");
		printf("The value of resistor s for the wheatstone bridge to balanced is: %d", s);
	
	}
	
	return 0;

}
