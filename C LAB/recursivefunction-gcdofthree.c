// attempted on 22nd March 2023

#include<stdio.h>
int gcd(int n1, int n2, int n3) {

	int s;

	if (n1%n2 == 0) {
		return (n2);
	} else {
		return (gcd(n2,n1%n2));
	}
	
	s = gcd(n2,n1%n2);
	
	if (n3%s == 0) {
		return (s);
	} else {
		return (gcd(n3,s));
	}
}

int main() {

	int a, b, c, g;
	printf("Enter three numbers to find their greatest common divisor / highest common factor: ");
	scanf("%d %d %d", &a, &b, &c);
	
	g = gcd(a,b,c);
	
	printf("The greatest common divisor / highest common factor of %d, %d and %d is %d", a, b, c, g);
	
	return 0;

}
