// attempted on 13th February 2023

#include<stdio.h>
int main() {

	int first, second, intermediate;
  
	printf("Enter first number: ");
	scanf("%d", &first);
  
	printf("Enter second number: ");
	scanf("%d", &second);

	intermediate = first;
	first = second;
	second = intermediate;

	printf("\n \nAfter swapping, first number = %d\n", first);
	printf("After swapping, second number = %d", second);
	return 0;
  
}
