// attempted on 22nd February 2023

#include<stdio.h>
int main() {

	int r1, r2, r3, rs;
	float voltage, rp, is, ip, a;
	
	printf("Enter the value of the first resistance: ");
	scanf("%d", &r1);
	
	printf("Enter the value of the second resistance: ");
	scanf("%d", &r2);
	
	printf("Enter the value of the third resistance: ");
	scanf("%d", &r3);
	
	printf("Enter the value of the voltage: ");
	scanf("%f", &voltage);
	
	rs = r1+r2+r3;
	is = voltage/rs;
	
	a = (1.0/r1) + (1.0/r2) + (1.0/r3);
	rp = (1.0/a);
	ip = voltage*a;
	
	printf("\nThe series resistance is: %d", rs);
	printf("\nThe current flowing through series resistance is: %f", is);
	printf("\nThe parallel resistance is: %f", rp);
	printf("\nThe current flowing through parallel resistance is: %f", ip);
	
	return 0;

}
