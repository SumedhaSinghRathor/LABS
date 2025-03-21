// attempted on 31st March 2023

#include<stdio.h>
int main() {

	int arr[3][3];
	int i, j, t;
	
	for (i=0; i<3; ++i) {
	
		for (j=0; j<3; j++) {
	
			printf("Enter a value for the matrix: ");
			scanf("%d", &arr[i][j]);
	
		}
	
	}
	

	for (i=0; i<3; i++) {
	
		for (j=i+1; j<3; j++) {
		
			t=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=t;
		
		}
	
	}
	
	printf("The transpose of the matrix is \n");
	
	for (i=0; i<3; ++i) {
	
		for (j=0; j<3; j++) {
	
			printf("%d\t", arr[i][j]);
	
		}
	
		printf("\n");
	}


	return 0;
}
