// attempted on 22nd February 2023

#include<stdio.h>
int main() {

	int t, a, b, c;
	
	printf("Enter the length of the first side of the triangle: ");
	scanf("%d", &a);
	
	printf("Enter the length of the second side of the triangle: ");
	scanf("%d", &b);
	
	printf("Enter the length of the third side of the triangle: ");
	scanf("%d", &c);
	
	t = (a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b);
	
	printf("%d\n \n", t);
	
	return 0;

}
