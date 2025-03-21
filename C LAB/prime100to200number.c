// attempted on 3rd March 2023
// WAP to display all prime numbers between 100 to 200 in reverse order

#include <stdio.h> 
	int main() {
	
	int i, a, count = 0;
	
	printf("Prime numbers between 100 and 200 in reverse order are: \n");
	
	for (i = 200; i < 100; i--) {
		
		for (a = 1; a <= i; a++) {
		
			if (i % a != 0) {
			
				printf("%d\t", i);
			
			}
		
		}
	
	}
	
	return 0;
}
