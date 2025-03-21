#include <stdio.h>
#include <limits.h>

int secSmallest(int arr[], int n) {
	
	int smallest = arr[0];
    
	for (int i = 0; i < n; i++) {
	
        	if(arr[i] < smallest) { smallest = arr[i]; }
	
	}
    	
    	int sec_smallest = INT_MAX;
    
    	for (int i = 0; i < n; i++) {
	
		if(arr[i] != smallest && arr[i] < sec_smallest) { sec_smallest = arr[i]; }
	
	}
	
	return sec_smallest;
    
}

int secLargest(int arr[], int n) {

	int largest = arr[0];
	
	for (int i = 0; i < n; i++) {
		
		if (arr[i] > largest) { largest = arr[i]; }
	
	}
	
	int sec_largest;
	
	for (int i = 0; i < n; i++) {
	
		if(arr[i] != largest && arr[i] > sec_largest) { sec_largest = arr[i]; }
	
	}
	
	return sec_largest;

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
    	
    	printf("The 2nd smallest : %d \n", secSmallest(arr, n));
    	printf("The 2nd largest : %d \n", secLargest(arr, n));

	return 0;
}
