// attempted on 28th April 2023
#include <stdio.h>

void swap(int* a, int* b) {
	
	int temp = *a;
	*a = *b;
	*b = temp;

}

void reverse(int array[], int array_size) {

	int *pointer1 = array;

	int *pointer2 = array + array_size - 1;
		
	while (pointer1 < pointer2) {
	
		swap(pointer1, pointer2);
		pointer1++;
		pointer2--;
		
	}

}


void print(int* array, int array_size) {

	int *length = array + array_size;
	int *position = array;
	printf("Array = ");
	for (position = array; position < length; position++) {
		printf("%d ", *position);
	}

}


int main() {

	int n,i;
	int array[n];
	
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
	
		printf("Enter a value of the array: ");
		scanf("%d", &array[i]);
	
	}

	printf("Original array: ");
	print(array, n);

	printf("Reversed array: ");
	reverse(array, n);
	print(array, n);

	return 0;
}

