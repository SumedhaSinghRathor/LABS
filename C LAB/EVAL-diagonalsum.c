// attempted on 21st April 2023

#include<stdio.h>
int main() {

	int arr[4][4];
	int i, j, sum1=0, sum2=0;
	
	for (i=0; i<4; ++i) {
	
		for (j=0; j<4; j++) {
	
			printf("Enter a value for the matrix: ");
			scanf("%d", &arr[i][j]);
	
		}
	
	}
	
	for (i=0; i<4; ++i) {
	
		for (j=0; j<4; j++) {
	
			if (i==j) { sum1+=arr[i][j]; }
			if (i+j==4) { sum2+=arr[i][j]; }
	
		}
	
	}
	
	printf("The sum of the elements of the two diagonals is %d and %d.", sum1, sum2);
	
	return 0;
	
}
