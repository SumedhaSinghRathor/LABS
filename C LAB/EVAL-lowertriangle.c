// attempted on 21st April 2023

#include<stdio.h>
int main() {

	int a[4][4];
	int i, j;
	
	
	for (i=0; i<4; ++i) {
	
		for (j=0; j<4; j++) {
	
			printf("Enter a value for the matrix: ");
			scanf("%d", &a[i][j]);
	
		}
	
	}
	
	printf("The Lower Triangular Matrix is: \n");
	
	for (i=0; i<4; ++i) {
	
		for (j=0; j<4; j++) {
	
			if (i>=j) { printf("%d \t", a[i][j]); }
			else { printf("0 \t"); }
	
		}
	
		printf("\n");
	}
	
	return 0;
}
