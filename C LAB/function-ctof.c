//attempted on 17th March 2023

#include<stdio.h>
void ctof(float c) {

	float f;
	
	f = 1.8*c + 32;
	printf("%f°C in Farenheint is %0.2f°F", c, f);
	
	return;

}

int main() {

	float c;

	printf("Enter temprature in Celsius: ");
	scanf("%f", &c);
	
	ctof(c);
	
	return 0;	
}
