// attempted on 15th February 2023

#include<stdio.h>
int main() {

	int a, p;
	
	printf("Enter the value of a: ");
	scanf("%d", &a);
	
	p = ++a + a++ + --a;
	
	printf("The evaluation of the expression ++a + a++ + --a is %d", p);
	return 0;

}
