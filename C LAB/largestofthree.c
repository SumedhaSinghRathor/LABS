// attempted on 24th February 2023

#include<stdio.h>
int main() {

	int a, b, c;
	
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if ((a > b) && (a > c)) {
	
		printf("The maximum number amongst the 3 entered is: %d", a);
	
	} else if ((b > a) && (b > c)) {
	
		printf("The maximum number amongst the 3 entered is: %d", b);
	
	} else {
	
		printf("The maximum number amongst the 3 entered is: %d", c);
	
	}
	
	return 0;

}
