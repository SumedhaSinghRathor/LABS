// attempted on 3rd March 2023

#include<stdio.h>
int main() {

	int num, i, flag = 1;
	
	for (i = 2; i <= num/2 ; i++) {
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
		if (num % i == 0) {
		
			flag=0;
			break;
		}
		
		printf("%d is a prime number.", num);
	}
	
	printf("%d is not a prime number.", num);
	
	return 0;

}
