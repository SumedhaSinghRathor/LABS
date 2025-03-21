// attempted on 21st April 2023

#include<stdio.h>

int pointer_shift(int *a[], int n) {

	int i;
	
	for (i = 0; i != n - 1; i++) {
		*a[i] = *a[i + 1];
	}

}

int main() {

	int a[3]={100, 101, 102};
	int b[3];
	
	b[3]=pointer_shift( *a[], 3);
	
	printf("Before Shifting: %d", a[3]);
	printf("After Shifting: %d", b[3]);
	
	return 0;

}
