#include<stdio.h>
int main() {

	int a[10][3], i, j;
	
	printf("Enter values of the sparse matrix.\n");
	
	for (i=0; i<10; i++) {
	
		for (j=0; j<3; j++) {
		
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		
		}
	
	}


	for (i=0; i<10; i++) {
	
		for (j=0; j<3; j++) {
		
			printf("%d\t", a[i][j]);
		
		}
		
		printf("\n");
	
	}
	
	return 0;
}
