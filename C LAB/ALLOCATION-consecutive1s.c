//attempted on 12th May 2023

#include<stdio.h>
#include<stdlib.h>
int main() {

	int i, n, old_pos=-1, new_pos=0, old_count=0, new_count=0;
	int a[n];
	
	printf("Enter the number of elements of the array: ");
	scanf("%d", &n);
	
	printf("Enter the elements of the array: ");
	
	for(i=0; i<n; i++) {
	
		scanf("%d", &a[i]);
	
	}
	
	for(i=0; i<n; i++) {
	
		if (a[i] == 1) {
		
			new_pos=i;
			old_pos=new_pos;
			new_count+=i;
			old_count=new_count;
		
		}
	
	}
	
	printf("The most no of consecutive 1's is present in the %d position of the array.", old_count);

	return 0;
	
}
