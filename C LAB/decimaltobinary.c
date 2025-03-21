// attempted on 24th March 2023

#include <stdio.h>
#include <math.h>

long int decimalToBinary(int num) {

	long long int binNumber = 0;
	int power = 0;
	
	while (num > 0) {
		int rem = num % 2;
		long long int temp = pow(10, power);
		binNumber += rem * temp;
		power++;
		num /= 2;
    	}
    
    	printf("The value of %d in binary %lld", num, binNumber);
}

int main() {

	int num;
	
	printf("Enter a value in binary: ");
	scanf("%d", &num);
	
	decimalToBinary(num);

	return 0;

}

