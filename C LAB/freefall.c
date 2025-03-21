// WAP to find out the velocity and distance covered by a stone after time (1,2,3,4,5sec), if it is allowed to free fall from the top of the Eiffel Tower

#include<stdio.h>
#define g 9.8
int main() {

	int t1, t2, t3, t4, t5;
	float s, v;
	
	printf("Enter the time for which the object has fallen: ");
	scanf("%d", &t1);
	
	v = g * t1;
	s = 0.5 * g * t1 * t1;
	
	printf("\nThe velocity of the object after time %d sec is %0.2f", t1, v);
	printf("\nThe distance of the object after time %d sec is %0.2f", t1, s);
	

	t2 = ++t1;
	
	v = g * t2;
	s = 0.5 * g * t2 * t2;
	
	printf("\n \nThe velocity of the object after time %d sec is %0.2f", t2, v);
	printf("\nThe distance of the object after time %d sec is %0.2f", t2, s);
	
	
	t3 = t2 + 1;
	
	v = g * t3;
	s = 0.5 * g * t3 * t3;
	
	printf("\n \nThe velocity of the object after time %d sec is %0.2f", t3, v);
	printf("\nThe distance of the object after time %d sec is %0.2f", t3, s);
	
	
	t4 = t3 + 1;
	
	v = g * t4;
	s = 0.5 * g * t4 * t4;
	
	printf("\n \nThe velocity of the object after time %d sec is %0.2f", t4, v);
	printf("\nThe distance of the object after time %d sec is %0.2f", t4, s);

	t5 = t4 + 1;
	
	v = g * t5;
	s = 0.5 * g * t5 * t5;
	
	printf("\n \nThe velocity of the object after time %d sec is %0.2f", t5, v);
	printf("\nThe distance of the object after time %d sec is %0.2f", t5, s);
	
	
	return 0;
}
