// attempted on 31st March 2023

#include<stdio.h>
int main() {

	int arr[4][5];
	int i, j;
	
	for (i=0; i<5; ++i) {
	
		for (j=0; j<4; j++) {
	
			printf("Enter a value for the matrix: ");
			scanf("%d", &arr[i][j]);
	
		}
	
	}
	
	for (i=0; i<5; ++i) {
	
		for (j=0; j<4; j++) {
	
			printf("%d\t", arr[i][j]);
	
		}
	
		printf("\n");
	}

	return 0;
}
