// attempted on 29th March 2023

#include<stdio.h>

int main() {

	int i, j, difference;
	double a[10];
	
	for (i=0; i<10; i++) {

		printf("Enter new data: ");
		scanf("%lf", &a[i]);
	
	}

	for (i=0; i<10; i++) { if (a[0] < a[i]) { a[0] = a[i]; } }
	
	printf("The largest element of the array is: %lf", a[i]);
	
	for (j=0; j<10; j++) { if (a[0] > a[j]) { a[0] = a[j]; } }
	
	printf("The smallest element of the array is: %lf", a[j]);

	difference = a[i] - a[j];

	printf("The largest difference of the elements of the array is %lf - %lf = %d", a[i], a[j], difference);
		
		return 0;
}
