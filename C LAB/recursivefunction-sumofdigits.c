// attempted on 22nd March 2023

#include<stdio.h>
int SOD(int n) {
	
	return (n/10 == 0 ? n : n%10 + SOD(n/10));

}

int main() {

	int a, sum;
	printf("Enter a number: ");
	scanf("%d", &a);
	
	sum = SOD(a);
	
	printf("The sum of all the digits of the number %d is %d", a, sum);
	return 0;

}
