// attempted on 1st March 2023

#include<stdio.h>
int main() {

	int a, b, c, d, e, f, g;
	
	printf("Press 1, if light is passing through a lens.\n");
	printf("Press 2, if light is passing through a mirror.\n");
	
	printf("\n Enter value: ");
	scanf("%d", &a);
	
	if (a == 1) {
	
		printf("Press 1, if light is passing through a convex lens.\n");
		printf("Press 2, if light is passing through a concave lens.\n");
	
		printf("\n Enter value: ");
		scanf("%d", &b);
		
		if (b == 1) {
		
			printf("******CONVEX LENS******\n \n");
			printf("Press 1, if the object is at infinity.\n");
			printf("Press 2, if the object is beyond C.\n");
			printf("Press 3, if the object is at C.\n");
			printf("Press 4, if the object is between C and F.\n");
			printf("Press 5, if the object is at F.\n");
			printf("Press 6, if the object is between P and F.");
			
			printf("\n Enter value: ");
			scanf("%d", &d);
			
			if (d == 1) {
	
				printf("\nWhen the object is at infinity, the image is: \n");
				printf("\tPosition of the image: At F on the other side of the lens.\n");
				printf("\tSize of the image: Highly diminished.\n");
				printf("\tNature of the image: Real and inverted.\n");
	
			} else if (d == 2) {
	
				printf("\nWhen the object is beyond C, the image is: \n");
				printf("\tPosition of the image: Between F and C on the other side of the lens.\n");
				printf("\tSize of the image: Diminished.\n");
				printf("\tNature of the image: Real and inverted.\n");
	
			} else if (d == 3) {
	
				printf("\nWhen the object is at C, the image is: \n");
				printf("\tPosition of the image: At C on the other side of the lens.\n");
				printf("\tSize of the image: Same size.\n");
				printf("\tNature of the image: Real and inverted.\n");
	
			} else if (d == 4) {
	
				printf("\nWhen the object is between C and F, the image is: \n");
				printf("\tPosition of the image: Beyond C on the other side of the lens.\n");
				printf("\tSize of the image: Enlarged.\n");
				printf("\tNature of the image: Real and inverted.\n");
	
			} else if (d == 5) {
		
				printf("\nWhen the object is at F, the image is: \n");
				printf("\tPosition of the image: At infinity.\n");
				printf("\tSize of the image: Highly enlarged.\n");
				printf("\tNature of the image: Real and inverted.\n");
				
			} else if (d == 6) {
	
				printf("\nWhen the object is between P and F, the image is: \n");
				printf("\tPosition of the image: On the same side of the object.\n");
				printf("\tSize of the image: Englarged.\n");
				printf("\tNature of the image: Virtual and erect.\n");
		
		} else {
		
			printf("******CONCAVE LENS******\n \n");
			printf("Press 1, if the object is at infinity.\n");
			printf("Press 2, if the object is between infinity and pole.\n");
			
			printf("\n Enter value: ");
			scanf("%d", &e);
			
			if (e == 1) {
			
				printf("\nWhen the object is at infinity, the image is: \n");
				printf("\tPosition of the image: At F, on the same side of the object.\n");
				printf("\tSize of the image: Highly Diminished.");
				printf("\tNature of the image: Virtual and erect.");
			
			} else {
			
				printf("\nWhen the object is between infinity and pole, the image is: \n");
				printf("\tPosition of the image: At F and the pole, on the same side of the object.\n");
				printf("\tSize of the image: Diminished.");
				printf("\tNature of the image: Virtual and erect.");
			
			}
		
		}
	
	} else {
	
		printf("Press 1, if light is passing through a concave mirror.");
		printf("Press 2, if light is passing through a convex mirror.");
		
		printf("\n Enter value: ");
		scanf("%d", &c);
		
		if (c == 1) {
		
			printf("******CONCAVE MIRROR******\n \n");
			printf("Press 1, if the object is at infinity.\n");
			printf("Press 2, if the object is beyond C.\n");
			printf("Press 3, if the object is at C.\n");
			printf("Press 4, if the object is between C and F.\n");
			printf("Press 5, if the object is at F.\n");
			printf("Press 6, if the object is between P and F.");
	
			printf("\n Enter value: ");
			scanf("%d", &f);
	
			if (f == 1) {
	
				printf("\nWhen the object is at infinity, the image is: \n");
				printf("\tPosition of the image: At F.\n");
				printf("\tSize of the image: Highly diminished.\n");
				printf("\tNature of the image: Real and inverted.\n");
	
			} else if (f == 2) {
	
				printf("\nWhen the object is beyond C, the image is: \n");
				printf("\tPosition of the image: Between F and C.\n");
				printf("\tSize of the image: Diminished.\n");
				printf("\tNature of the image: Real and inverted.\n");
	
			} else if (f == 3) {
	
				printf("\nWhen the object is at C, the image is: \n");
				printf("\tPosition of the image: At C.\n");
				printf("\tSize of the image: Same size.\n");
				printf("\tNature of the image: Real and inverted.\n");
	
			} else if (f == 4) {
		
				printf("\nWhen the object is between C and F, the image is: \n");
				printf("\tPosition of the image: Beyond C.\n");
				printf("\tSize of the image: Enlarged.\n");
				printf("\tNature of the image: Real and inverted.\n");
			
			} else if (f == 5) {
			
				printf("\nWhen the object is at F, the image is: \n");
				printf("\tPosition of the image: At infinity.\n");
				printf("\tSize of the image: Highly enlarged.\n");
				printf("\tNature of the image: Real and inverted.\n");
	
			} else if (f == 6) {
	
				printf("\nWhen the object is between P and F, the image is: \n");
				printf("\tPosition of the image: Behind the mirror.\n");
				printf("\tSize of the image: Englarged.\n");
				printf("\tNature of the image: Virtual and erect.\n");
			
			} else {
	
				printf("Invalid input");
				
			}

		
		} else {
		
			printf("******CONVEX MIRROR******\n \n");
			printf("Press 1, if the object is at infinity.\n");
			printf("Press 2, if the object is between infinity and pole.\n");
			
			printf("\n Enter value: ");
			scanf("%d", &g);
			
			if (g == 1) {
			
				printf("\nWhen the object is at infinity, the image is: \n");
				printf("\tPosition of the image: Behind the mirror, at F.\n");
				printf("\tSize of the image: Highly Diminished.");
				printf("\tNature of the image: Virtual and erect.");
			
			} else {
			
				printf("\nWhen the object is between infinity and pole, the image is: \n");
				printf("\tPosition of the image: Behind the mirror, at F and the pole P.\n");
				printf("\tSize of the image: Diminished.");
				printf("\tNature of the image: Virtual and erect.");
			
			}
		}
	
	}
}
	return 0;
	}
