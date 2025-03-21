// attempted on 24th February 2023

#include<stdio.h>
int main() {

	int a;
	
	printf("Press 1, if the object is at infinity.\n");
	printf("Press 2, if the object is beyond C.\n");
	printf("Press 3, if the object is at C.\n");
	printf("Press 4, if the object is between C and F.\n");
	printf("Press 5, if the object is at F.\n");
	printf("Press 6, if the object is between P and F.");
	
	printf("\n Enter value: ");
	scanf("%d", &a);
	
	if (a == 1) {
	
		printf("\nWhen the object is at infinity, the image is: \n");
		printf("\tPosition of the image: At F.\n");
		printf("\tSize of the image: Highly diminished.\n");
		printf("\tNature of the image: Real and inverted.\n");
	
	} else if (a == 2) {
	
		printf("\nWhen the object is beyond C, the image is: \n");
		printf("\tPosition of the image: Between F and C.\n");
		printf("\tSize of the image: Diminished.\n");
		printf("\tNature of the image: Real and inverted.\n");
	
	} else if (a == 3) {
	
		printf("\nWhen the object is at C, the image is: \n");
		printf("\tPosition of the image: At C.\n");
		printf("\tSize of the image: Same size.\n");
		printf("\tNature of the image: Real and inverted.\n");
	
	} else if (a == 4) {
	
		printf("\nWhen the object is between C and F, the image is: \n");
		printf("\tPosition of the image: Beyond C.\n");
		printf("\tSize of the image: Enlarged.\n");
		printf("\tNature of the image: Real and inverted.\n");
	
	} else if (a == 5) {
	
		printf("\nWhen the object is at F, the image is: \n");
		printf("\tPosition of the image: At infinity.\n");
		printf("\tSize of the image: Highly enlarged.\n");
		printf("\tNature of the image: Real and inverted.\n");
	
	} else if (a == 6) {
	
		printf("\nWhen the object is between P and F, the image is: \n");
		printf("\tPosition of the image: Behind the mirror.\n");
		printf("\tSize of the image: Englarged.\n");
		printf("\tNature of the image: Virtual and erect.\n");
	
	} else {
	
		printf("Invalid input");
	
	}
	
	return 0;

}
