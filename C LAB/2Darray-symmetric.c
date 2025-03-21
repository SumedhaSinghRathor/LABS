// attempted on 12th April 2023

#include<stdio.h>
int main() {

	int a[3][3], b[3][3];
	int i, j, t;
	
	for (i=0; i<3; ++i) {
	
		for (j=0; j<3; j++) {
	
			printf("Enter a value for the matrix: ");
			scanf("%d", &a[i][j]);
	
		}
	
	}
	
	for (i=0; i<3; i++) {
	
		for (j=i+1; j<3; j++) {
		
			b[i][j]=a[i][j];
		
		}
	
	}

	for (i=0; i<3; i++) {
	
		for (j=i+1; j<3; j++) {
		
			if (a[i][j] == b[j][i]) { printf("The entered matrix is a symmetric matrix."); }
			else { printf("The entered matrix is not a symmetric matrix."); }
			
		}
	
	}

	return 0;
}
