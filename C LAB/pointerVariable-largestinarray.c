// attempted on 26th April 2023

#include<stdio.h>
int main () {

	int i, j, a[4][5], b[4] = {0,0,0,0};
	int (*pa)[5], *pb;
	int largest=0;

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
			if (a[i][j] > 0) {
				largest = a[i][j];
				b[j] = largest;
			}
		}
	}

	for (i=0; i<4; i++) {
	
			printf("%d\t", b[i]);
	
	}

	return 0;
}
