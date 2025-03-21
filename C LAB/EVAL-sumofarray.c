// attempted on 21st April 2023

#include<stdio.h>
int main() {

	int a[5] = {10, 20, 30, 45, 50}, b[5];
	int *a, *b, i;
	
	for (i=0; i<5; i++) {
	
		*(a+i) + *(a+1+i) = *(b+i);
	
	}
	
	printf("First Array: %d", a[5]);
	printf("Second Array: %d", b[5]);
	
	return 0;

}
