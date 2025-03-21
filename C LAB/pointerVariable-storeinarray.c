// attempted on 26th April 2023

#include<stdio.h>
int main () {

	int i, j, a[4][5], b[4] = {0,0,0,0};
	int (*pa)[5], *pb;

	for (i=0; i<4; ++i) {
	
		for (j=0; j<5; j++) {
	
			printf("Enter a value for the matrix: ");
			scanf("%d", &a[i][j]);
	
		}
	
	}

	pa=a; // pointer to 5 integer elements
	pb=b; // pointer to single integer element

	for (i=0; i<4; i++) {
		for (j=0; j<5; j++) {
			b[i] = b[i] + a[i][j];  // pb[i] = pb[i] + pa[i][j]
		}
	}

	for (j=0; j<4; j++) {
	
			printf("%d\t", b[j]);
	
	}

	return 0;
}
