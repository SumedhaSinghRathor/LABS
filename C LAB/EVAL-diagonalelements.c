// attempted on 21st April 2023

#include<stdio.h>
int main() {

	int m, n;
	int a[m][n];
	int i, j, sum1, sum2;
	
	printf("Enter the rows of the elements: ");
	scanf("%d", &m);
	
	printf("Enter the columns of the elements: ");
	scanf("%d", &n);
	
	
	for (i=0; i<n; ++i) {
	
		for (j=0; j<m; j++) {
	
			printf("Enter a value for the matrix: ");
			scanf("%d", &a[i][j]);
	
		}
	
	}
	
	sum1=a[0][0]+a[m][n];
	sum2=a[0][n]+a[m][0];
	
	printf("The sums of the diagonal elements of the matrix is: %d, %d", sum1, sum2);
	
	return 0;

}
