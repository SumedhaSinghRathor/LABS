// attempted on 22th February 2023

#include <stdio.h>
int main() {

	float v1, n1, n2, v2;
	
	printf("Enter the main supply voltage: ");
	scanf("%f", &v1);
	
	printf("Enter the number of turns in the primary winding: ");
	scanf("%f", &n1);
	
	printf("Enter the number of turns in the secondary winding: ");
	scanf("%f", &n2);
	
	v2 = (n2 / n1) * v1;
	
	printf("The voltage obtained is: %f", v2);
	
	return 0;

}
