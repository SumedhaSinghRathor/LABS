#include <stdio.h>

int EXCHANGE(int p, int q) {

	int temp = p;
	p = q;
	q = temp;

}

int ROTATE_RIGHT(int p1[], int p2) {

	EXCHANGE(p1[0], p1[p2 - 1]);
	
	for (int i = p2 - 1; i > 0; i--) {
	
		EXCHANGE(p1[i], p1[i--]);
	
	}
	
	return p1;	

}

int main() {

	int n;
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	 		
	int arr[n];
    	printf("Enter the array numbers: ");
    	
    	for (int i = 0; i < n; i++) {
    	
    		scanf("%d", &arr[i]);
    	
    	}
    	
    	int A;
    	printf("Enter the number of elements to be rotated: ");
    	scanf("%d", &A);
    	
	printf("BEFORE: ");
    	for (int i = 0; i < n; i++) {
    	
    		printf("%d \t", arr[i]);
    	
    	}
    	
    	printf("\n");
    	ROTATE_RIGHT(arr, A);
    	
    	return 0;

}
