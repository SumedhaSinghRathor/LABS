// attempted on 22nd March 2023

#include<stdio.h>
int gcd(int n1, int n2) {

	if (n1%n2 == 0) {
		return (n2);
	} else {
		return (gcd(n2,n1%n2));
	}
}

int main() {

	int a, b, g;
	printf("Enter two numbers to find their greatest common divisor / highest common factor: ");
	scanf("%d %d", &a, &b);
	
	g = (a>b ? gcd(a,b) : gcd(b,a));
	
	printf("The greatest common divisor / highest common factor of %d and %d is %d", a, b, g);
	
	return 0;

}
