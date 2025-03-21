#include <stdio.h>
int main() {
	
	int a[10], *ptr, i, j, k, l;
	
	ptr = a;
	
	for (i=0; i<10; i++) {
		
		printf("Enter a value for the array: ");
		scanf("%d", (ptr+i));
		
	}
	
	printf("To sort your array in ascending order, enter 1.\n");
	printf("To sory your array in descending order, enter 2.\n");

	printf("Enter your choice: ");
	scanf("%d", &l);
	
	switch (l) {
	
		case 1:
		
		for (i=0; i<10; i++) {
		
			for (j=i+1; j<10; j++) {
			
				if (*(ptr+i) > *(ptr+j)) {
				
					k = *(ptr+i);
					*(ptr+i) = *(ptr+j);
					*(ptr+j) = k;
				
				}
			
			}
		
		}
		
		printf("The ascending order of array is: ");
		
		for (i=0; i<10; i++) {
			printf("%d ", *(ptr+i));
		}
		
		break;
		
		case 2:
		
		for (i=0; i<10; i++) {
		
			for (j=i+1; j<10; j++) {
			
				if (*(ptr+i) < *(ptr+j)) {
				
					k = *(ptr+i);
					*(ptr+i) = *(ptr+j);
					*(ptr+j) = k;
				
				}
			
			}
		
		}
		
		printf("The descending order of array is: ");
		
		for (i=0; i<10; i++) {
			printf("%d ", *(ptr+i));
		}
		
		break;
	
	}
	

	return 0;
}

