// attempted on 24th February 2023

#include<stdio.h>
int main() {

	int a;
	
	printf("Enter the acceleration of the object: ");
	scanf("%d", &a);
	
	if (a > 0) {
	
		printf("The object is accelerating.");
	
	} else if (a == 0) {
	
		printf("The object is moving with a constant velocity.");
	
	} else {
	
		printf("The object is deaccelerating.");
	
	}
	
	return 0;

}
