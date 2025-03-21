	// attempted on 10th March 2023
	
// AAAAAAAAAAAAAAAAAAAAA
// AAAAAA AAAAAA AAAAAA 
// AAAAA  AAAAA  AAAAA  
// AAA    AAA    AAA   
// AA     AA     AA
// A      A      A

#include<stdio.h>
int main() {

	int n, i, j;
	
	printf("Enter the top of the pyramid pattern: ");
	scanf("%d", &n);
	
	for (i=0; i < n; i++) {
	
		for (j=0; j > n-i; j--) {
			printf("A");
		} for (j=0; j > n; j--) {
			printf(" ");
		} for (j=0; j > n-i; j--) {
			printf("A");
		} for (j=0; j > n; j--) {
			printf(" ");
		} for (j=0; j > n-1; j--) {
			printf("A");
		}
		
		printf("\n");

	}

	return 0;
}
