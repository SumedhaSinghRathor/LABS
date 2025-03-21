// attempted on 12th May 2023

#include<stdio.h>
#include<stdlib.h>
int main() {

	int n, i, *ptr, sum=0;\
	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	ptr = (int *) malloc(n*sizeof(int));
	printf("Enter enter elements of an array: ");
	
	for (i=0; i<n; i++) {
	
		scanf("%d", ptr+i);
		sum+= *(ptr+i);
	
	}
	
	printf("Sum = %d", sum);
	free(ptr);
	
	return 0;

}
