// attempted on 12th April 2023

#include<stdio.h>
int main() {

	int a[3][3], b[3][3];
	int i, j, k;
	
	for (i=0; i<3; ++i) {
	
		for (j=0; j<3; j++) {
	
			printf("Enter a value for the matrix: ");
			scanf("%d", &a[i][j]);
	
		}
	
	}
	
	printf("Enter the scalar that will be multiplied with the matrix: ");
	scanf("%d", &k);
	
	for (i=0; i<3; ++i) {
	
		for (j=0; j<3; j++) {
	
			b[i][j] = k * a[i][j];
			printf("%d\t", b[i][j]);
	
		}
	
		printf("\n");
	}

	return 0;
}
