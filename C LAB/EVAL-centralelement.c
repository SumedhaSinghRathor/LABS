// attempted on 31st March 2023

#include<stdio.h>
int main() {

	int i, j, n, centralelement;
	int a[n][n];

	printf("Enter the no. of rows and columns of the matrix: ");
	scanf("%d", &n);

	if (n%2==0) { printf("There will not be a single central element."); }
	else {
	
		for (i=0; i<n; ++i) {
			for (j=0; j<n; j++) {
	
				printf("Enter a value for the matrix: ");
				scanf("%d", &a[i][j]);
	
			}
		}
	
	centralelement = a[(n-1)/2][(n-1)/2];
	
	printf("The central element of the matrix is %d", centralelement);

	return 0;

	}

}
