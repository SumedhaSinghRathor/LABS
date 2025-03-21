#include <stdio.h>

int PrefixSum(int arr[], int n, int prefixArray[]) {

	prefixArray[0] = arr[0];
	
	for (int i = 1; i < n; i++) {
	
		prefixArray[i] = prefixArray[i-1] + arr[i];
	
	}

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
    	
    	int prefixArray[n];
    	
    	PrefixSum(arr, n, prefixArray);
    	
    	printf("Original Array: ");
    	
    	for (int i = 0; i < n; i++) {
    	
    		printf("%d \t", arr[i]);
    	
    	}

	printf("\n");
	
	printf("Prefix Array: ");
	for (int i = 0; i < n; i++) {
    	
    		printf("\t %d \t", prefixArray[i]);
    	
    	}

}
