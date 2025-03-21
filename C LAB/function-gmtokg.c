//attempted on 17th March 2023

#include<stdio.h>
void gmtokg(float gm) {

	float kg;
	
	kg = gm / 1000;
	printf("%f in kilograms is %0.3f", gm, kg);
	
	return;

}

int main() {

	float gm;

	printf("Enter weight in grams: ");
	scanf("%f", &gm);
	
	gmtokg(gm);
	
	return 0;	
}
