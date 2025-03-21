// attempted on 15th February 2023

#include<stdio.h>
int main() {

	int a, b, c, d;
	
	printf("Enter the value of coefficient of x^2 (i.e is a): ");
	scanf("%d", &a);
	
	printf("Enter the value of coefficient of x (i.e is b): ");
	scanf("%d", &b);
	
	printf("Enter the value of constant (i.e is c): ");
	scanf("%d", &c);
	
	d=b*b-4*a*c;
	
	printf("The disciminant evaluated is %d", d);
	return 0;

}
