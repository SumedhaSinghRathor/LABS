// attempted on 15th March 2023

// write a program to find out the factorial of a number when the factorial value is given

#include<stdio.h>
int main() {

	float factorialvalue, n, count = 1;
	
	printf("Enter value of factorial: ");
	scanf("%f", &factorialvalue);
	
	
	for (n = 1; n < factorialvalue; n++) {
	
		count++;
		factorialvalue /= n;
		
	}
	
	if (factorialvalue == 1) {
	
		printf("The number entered is the factorial of %f", count);
	
	} else {
	
		printf("The number entered is not a factorial of any number.");
	
	}
	
	return 0;

}
