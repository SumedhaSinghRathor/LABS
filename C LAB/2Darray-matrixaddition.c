// attempted on 12th April 2023

#include<stdio.h>
int main() {

	int a[3][3], b[3][3], c[3][3];
	int i, j;
	
	for (i=0; i<3; ++i) {
	
		for (j=0; j<3; j++) {
	
			printf("Enter a value for the matrix: ");
			scanf("%d", &a[i][j]);
	
		}
	
	}
	
	printf("\n");
	
	for (i=0; i<3; ++i) {
	
		for (j=0; j<3; j++) {
	
			printf("Enter a value for the new matrix: ");
			scanf("%d", &b[i][j]);
	
		}
	
	}
	
	printf("When the two matrices are added -- \n\n");
	
	for (i=0; i<3; ++i) {
	
		for (j=0; j<3; j++) {
	
			c[i][j] = b[i][j] + a[i][j];
			printf("%d + %d = %d\t", a[i][j], b[i][j], c[i][j]);
	
		}
	
		printf("\n");
	}

	return 0;
}
