#include<stdio.h>
#include<stdlib.h>

int main() {

	int k;	
	
	printf("Here are the options for performing operations of 1D array: \n");
	printf("\t1 - Input values into the array.\n");
	printf("\t2 - Display values of the array.\n");
	printf("\t3 - Search a particular value in the array (using linear search)\n");
	printf("\t4 - Insert a value at the end of a pre-exisiting array.\n");
	printf("\t5 - Delete the value at the end of a pre-existing array.\n");
	
	printf("Enter a value from the menu: ");
	scanf("%d", &k);

	switch (k) {
	
		case 1:
		printf("\n\nHere is the option to input values into the array.");
		
		int a[8], i, n;
	
		printf("\nEnter the length of your array: ");
		scanf("%d", &n);
	
		
		for (i=0; i<=n; i++) {
			printf("Enter the values of an array: \n");
			scanf("%d", &a[i]);
		}
		
		printf("The values have been stored in an array: ");
		break;
		
		case 2:
		printf("Here is the option to display values of the array.\n");
		
		printf("The values of the entered array are: \n");

		for (i=0; i<=n; i++) {
		
			printf("%d \t", a[i]);

		}
		break;
		
		case 3:
		printf("Here is the option to search for a particular value (using linear search).");
		break;
		
		case 4:
		printf("Here is the option to insert value into the pre-exisiting array.");
		
		int b;
		
		printf("Enter the value to insert into the array: ");
		scanf("%d", &b);
		
		n++;
		
		a[n+1] = b;
		
		printf("Here is the updated array: ");
		for (i=0; i<=n; i++) {
		
			printf("%d \t", a[i]);
		
		}
		break;
		
		case 5:
		printf("Here is the option to delete value from the pre-exisiting array.");
		
		printf("The original array: ");
		
		for (i=0; i<=n; i++) {
			printf("%d", a[i]);
		}
		
		for (i=0; i<=n-1; i++) {
			printf("%d", a[i]);
		}
		break;
		
		default:
		printf("Pick an option to perform functions on an array.");
	
	}	

	return 0;
}
