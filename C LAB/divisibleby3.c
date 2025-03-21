// attempted on 3rd March 2023

#include<stdio.h>
int main() {

	int sum = 0, n = 1;
	
	for (n = 1; n < 100; n++) {
		
		if (n % 3 == 0) {
		
			sum += n;
		}
	}
	
	printf("The sum of the numbers divisible by 3 (less than 100) is %d", sum);
	
	return 0;

}
