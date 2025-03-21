// attempted on 22nd March 2023

#include<stdio.h>

int exponent(int a, int b) {

	if (b==1) {
		return(a);
	} else {
		return(a*exponent(a,b-1));
	}
	
}

int main() {

	int p, q, answer;
	
	printf("Enter a base: ");
	scanf("%d", &p);
	
	printf("Enter the exponent: ");
	scanf("%d", &q);
	
	answer = exponent(p,q);
	
	printf("%d ^ %d = %d", p, q, answer);
	
	return 0;

}
