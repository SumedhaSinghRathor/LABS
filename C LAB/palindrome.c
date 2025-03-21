// attempted on 15th March 2023

#include<stdio.h>
int main() {
	
	long int n, rev_n = 0, org_n;
		
	printf("Enter any number: ");
	scanf("%ld", &n);
		
	org_n = n;
		
	do {
		rev_n = rev_n*10 + n%10;
		n=n/10;
		
	} while(n!=0);
	
	printf("\nThe reverse of the number is %ld", rev_n);
		
	if (org_n == rev_n) {
	
		printf("\nThe number entered is a palindrome.");
	
	} else {
	
		printf("\nThe number entered is not a palindrome.");
	
	}

	return 0;		
}
