// GROUP A
// QUESTION 1: Write a program to compute the sum of digits of a given integer

#include<stdio.h>  
int main() {
    
	int n, sum=0, i;
	    
	printf("Enter a number: ");    
	scanf("%d", &n);
	
	printf("\nThe number entered is %d", n);
	
	while (n != 0) {
	
		i = n % 10;
		sum += i;
		n = n/10;
	
	}
	
	printf("\nThe sum of all digits of the number entered is %d", sum);
	
	return 0;

}
