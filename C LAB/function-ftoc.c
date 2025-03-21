//attempted on 17th March 2023

#include<stdio.h>
void ftoc(float f) {

	float c;
	
	c = 5*(f-32)/9;
	printf("%f°F in Celsius is %0.2f°F", f, c);
	
	return;

}

int main() {

	float f;

	printf("Enter temprature in Farenheit: ");
	scanf("%f", &f);
	
	ftoc(f);
	
	return 0;	
}
