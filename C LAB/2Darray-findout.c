// attempted on 12th April 2023

#include<stdio.h>
int main() {

	int arr[3][3];
	int i, j;
	
	for (i=0; i<3; ++i) {
	
		for (j=0; j<3; j++) {
	
			printf("Enter a value for the matrix: ");
			scanf("%d", &arr[i][j]);
	
		}
	
	}
	
	printf("\n");
	
	for (i=0; i<3; ++i) {
	
		for (j=0; j<3; j++) {
	
			if (arr[i][j]%2 == 0) { printf("%d is an even number.\n", arr[i][j]); }
			else { printf("%d is an odd number.\n", arr[i][j]); }
	
		}
	
	}

	printf("\n");

	for (i=0; i<3; ++i) {
	
		for (j=0; j<3; j++) {
	
			if (arr[i][j]%2 > 0) { printf("%d is a positive number.\n", arr[i][j]); }
			else { printf("%d is an negative number.\n", arr[i][j]); }
	
		}
	
	}


	return 0;
}
