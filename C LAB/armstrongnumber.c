// attempted on 15th March 2023

#include <math.h>
#include <stdio.h>

int main() {

	int num, org_n, remainder, n = 0;
	float result = 0.0;
	
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	org_n = num;
	
	for (org_n = num; org_n != 0; ++n) {
		org_n /= 10;
	}
	
	for (org_n = num; org_n != 0; org_n /= 10) {
		remainder = org_n % 10;
		result += pow(remainder, n);
	}
	
	if ((int)result == num) {
	
		printf("%d is an Armstrong number.", num);
	
	} else {
	
		printf("%d is not an Armstrong number.", num);
	
	}
	
   return 0;
}
