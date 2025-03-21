// attempted on 15th March 2023

#include<stdio.h>  
int main() {
    
	int n, sum=0, m;
	    
	printf("Enter a number:");    
	scanf("%d", &n);
	
	do {
	
		m = n % 10;
		sum += m;
		n = n / 10;
	
	} while (n != 0);
	
	printf("The sum of all digits of the number entered is %d", sum);
	
	return 0;

}
