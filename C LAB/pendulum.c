// attempted on 22th February 2023

#include<stdio.h>
#include<math.h>
#define g 9.8
#define pi 3.14
int main() {

	int l1, l2, l3, l4, l5;
	float t1, t2, t3, t4, t5;
	
	printf("Enter the diffrent lengths of the pendulum: ");
	scanf("%d, %d, %d, %d, %d", &l1, &l2, &l3, &l4, &l5);
	
	t1=2 * pi * sqrt(l1/g);
	t2=2 * pi * sqrt(l2/g);
	t3=2 * pi * sqrt(l3/g);
	t4=2 * pi * sqrt(l4/g);
	t5=2 * pi * sqrt(l5/g);
	
	
	printf("Length		Time Period");
	printf("%d		%f", l1, t1);
	printf("%d		%f", l2, t2);
	printf("%d		%f", l3, t3);
	printf("%d		%f", l4, t4);
	printf("%d		%f", l5, t5);
	
	return 0;

}
