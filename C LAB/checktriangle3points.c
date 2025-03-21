// attempted on 24th February 2023

#include<stdio.h>
int main() {

	int x1, x2, x3, y1, y2, y3, a;
	
	printf("Enter first co-ordinates: ");
	scanf("%d %d", &x1, &y1);
	
	printf("Enter second co-ordinates: ");
	scanf("%d %d", &x2, &y2);
	
	printf("Enter third co-ordinates: ");
	scanf("%d %d", &x3, &y3);
	
	a = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
	
	if (a == 0) {
	
		printf("The co-ordinates cannot be a triangle.");
	
	} else {
	
		printf("The co-ordinates can be a triangle.");
	
	}
	
	return 0;

}
