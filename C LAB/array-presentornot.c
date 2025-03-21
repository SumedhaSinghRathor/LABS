//attempted on 29th March 2023

#include<stdio.h>

int main() {

	int item, i, j, pos = -1, a[10];
	
	for (i=0; i<10; i++) {

		printf("Enter new data: ");
		scanf("%d", &a[i]);
	
	}

	printf("\nEnter an item to check if it is present in the array: ");
	scanf("%d", &item);

	for(j=0; j<10; j++) {
	
		if (item == a[j]) {
		
			pos = j;
			break;
		}
		
		printf("%d", pos);
	}

	return 0;

}
