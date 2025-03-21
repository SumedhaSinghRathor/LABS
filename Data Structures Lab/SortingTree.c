#include<stdio.h>
#include<stdlib.h>
#define MAX 10

void InsertionSort(int A[MAX]) {

	int key, i, j;
	
	for(i=1; i<MAX; i++) {
	
		key = A[i];
		
		for (j=i-1; (j>=0) && (A[j]>key); j--) {
		
			A[j+1] = A[j];
		
		}
		
		A[j+1] = key;
	
	}

}

int MinIndex(int A[MAX], int i) {

	int m, j;
	m=i;
	
	for(j=i+1; j<MAX; j++) {
	
		if (A[j] < A[m]) { m=j; }
	
	}
	
	return(m);

}

void SelectionSort(int A[MAX]) {

	int i, j, temp;
	
	for(i=0; i=MAX-1; i++) {
	
		j = MinIndex(A[i], i);
		
		temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	
	}

}


void BubbleSort(int A[MAX]) {

	int i, j, temp;

	for(i=0; i<MAX-1; i++) {
	
		for(j=MAX-1; j<i; j--) {
		
			if(A[j] < A[j-1]) {
			
				temp = A[j];
				A[j] = A[j-1];
				A[j-1] = temp;
			
			}
		
		}
	
	}

}

int main() {

	int A[MAX], k, i;
	
	printf("Enter the values in the array: ");
	for (i=0; i<MAX; i++) {
	
		scanf("%d", &A[i]);
	
	}
	
	printf("Values entered!\n\n");
	
	printf("1) Sort in ascending order using Bubble Sort.\n");
	printf("2) Sort in ascending order using Insertion Sort.\n");
	printf("3) Sort in ascending order using Selection Sort.\n\n");
	
	printf("Enter the value for operation: ");
	scanf("%d", &k);
	
	switch(k) {
	
		case 1:
		BubbleSort(A[MAX]);
		for (i=0; i<MAX; i++) { printf("%d ", A[i]); }
		break;
		
		case 2:
		InsertionSort(A[MAX]);
		for (i=0; i<MAX; i++) { printf("%d ", A[i]); }
		break;
		
		case 3:
		SelectionSort(A[MAX]);
		for (i=0; i<MAX; i++) { printf("%d ", A[i]); }
		break;
		
		default:
		printf("Invalid operation option!");
	
	}

	return 0;

}
