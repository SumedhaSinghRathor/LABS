// attempted on 15th March 2023

#include<stdio.h>
int main() {

	int n, sumeven = 0, sumodd = 0, m;
	    
	printf("Enter a number: ");    
	scanf("%d", &n);
	
	do {
	
		m = n % 10;
		
		if (m % 2 == 0) {
			sumeven += m;
		} else {
			sumodd += m;
		}
		
		n = n / 10;
	
	} while (n != 0);
	
	printf("\nThe sum of all even digits of the number entered is %d", sumeven);
	printf("\nThe sum of all odd digits of the number entered is %d", sumodd);
	
	return 0;

}
