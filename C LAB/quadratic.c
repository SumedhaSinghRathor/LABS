// attempted on 15th February 2023

#include<stdio.h>
int main() {

	int x2, x3, p2, p3, p;
	
	printf("Enter the value of x: ");
	scanf("%d", &x2);
	p2 = 2*x2*x2 - 5*x2 + 1;
	printf("The value of p(x) is: %d", p2);
	
	printf("\n \nEnter the value of x: ");
	scanf("%d", &x3);
	p3 = 2*x3*x3 - 5*x3 + 1;
	printf("The value of p(x) is: %d", p3);
	
	p = p2 * p3;
	
	printf("\n \nThe evaluation of the expression p(2)*p(3) is %d", p);
	return 0;

}
