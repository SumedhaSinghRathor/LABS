// attempted on 3rd March 2023

#include<stdio.h>
int main() {

	int sum = 0, n, count = 0, i;
	
	for (i = 1; i < 10; i++) {
	
		printf("Enter a number: ");
		scanf("%d", &n);
	
		if (n % 2 == 1) {
		
			count++;
			sum += n;
		}
	}
	
	printf("The no. of odd numbers entered is %d and their sum is %d", count, sum);
	
	return 0;

}
