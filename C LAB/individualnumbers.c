// attempted on 15th February 2023

#include<stdio.h>
int main() {

	int number, a, b, c;
	
	printf("Enter a 3-digit number: ");
	scanf("%d", &number);
	
	c=number%10;
	b=(number%100-c)/10;
	a=(number-number%100)/100;
	
	printf("The hundreds digit is: %d", a);
	printf("\nThe tens digit is: %d", b);
	printf("\nThe ones digit is: %d", c);
	
	return 0;

}
