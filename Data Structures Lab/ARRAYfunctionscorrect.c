#include<stdio.h>
int main() {

	int a[6], i, n;
	
	printf("Enter the length of an array: ");
	scanf("%d", &n);
	
	printf("\n");
	
	for(i=0; i<=n; i++) {
	
		printf("Enter a value: ");
		scanf("%d", &a[i]);
	
	}
	
	printf("Values have been inserted in an array.");
	
	printf("The values of your array are: ");
		for (i=0; i<=n; i++) {
		
			printf("");
		
		}
	
	return 0;
}
