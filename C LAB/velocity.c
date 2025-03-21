// attempted on 22th February 2023

#include<stdio.h>
#define g 9.8
int main() {

	int t;
	float s,v;
	
	printf("Enter the for which the object free-falls: ");
	scanf("%d", &t);
	
	v = g*t;
	s = 0.5*g*t*t;
	
	printf("\nThe velocity of the object when the time is %d is %f", t, v);
	printf("\nThe distance of the object when the time is %d is %f", t, s);
	
	return 0;
}
