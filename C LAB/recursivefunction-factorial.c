// attempted on 22nd March 2023

#include<stdio.h>
long int factorial(long int n) {

	if (n==1) {
		return (1);
	} else {
		return (n * factorial(n-1));
	}

}

int main() {

	long int a, fact;
	printf("Enter a number: ");
	scanf("%ld", &a);
	
	fact = factorial(a);
	printf("Factorial of the number %ld is %ld.", a, fact);
	
	return 0;

}

