// attempted on 22nd March 2023

#include<stdio.h>
int FIB(int n) {

	return (n==1 || n==2 ? 1 : FIB(n-1) + FIB(n-2));
	
}

int main() {

	int n, fib;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	fib = FIB(n);
	
	printf("The %dth Fibonacci number is %d", n, fib);
	
	return 0;

}
