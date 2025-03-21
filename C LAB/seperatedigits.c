// attempted on 15th March 2023

#include<stdio.h>  
int main() {
    
	int n, m;
	    
	printf("Enter a number: ");    
	scanf("%d", &n);
	
	do {
	
		m = n % 10;
		printf("%d\t", m);
		n = n / 10;
	
	} while (n != 0);
	
	return 0;

}
