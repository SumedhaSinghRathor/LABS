// attempted on 22nd February 2023

#include<stdio.h>
int main() {

	int t, a, b, c, s;
	
	printf("Enter the length of the first side of the triangle: ");
	scanf("%d", &a);
	
	printf("Enter the length of the second side of the triangle: ");
	scanf("%d", &b);
	
	printf("Enter the length of the third side of the triangle: ");
	scanf("%d", &c);
	
	t = ((a+b)>c) && ((b+c)>a) && ((c+a)>b);
	
	s = t * (a + b + c);
	
	printf("%d\n \n", s);
	
	return 0;

}
