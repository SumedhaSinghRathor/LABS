// attempted on 24th February 2023

#include<stdio.h>
int main() {

	int x1, x2, x3, y1, y2, y3, t;
	float m1, m2, m3;
	
	printf("Enter the co-ordinates of the first point: ");
	scanf("%d %d", &x1, &y1);
	
	printf("Enter the co-ordinates of the second point: ");
	scanf("%d %d", &x2, &y2);
	
	printf("Enter the co-ordinates of the third point: ");
	scanf("%d %d", &x3, &y3);
	
	m1 = (y2 - y1) / (x2 - x1);
	m2 = (y3 - y2) / (x3 - x2);
	m3 = (y1 - y3) / (x1 - x3);
	
	t = (m1 == m2) && (m2 == m3) && (m3 == m1);
	
	if (t=0) {
	
		printf("The following points can form a triangle.");
	
	} else {
	
		printf("The following points cannot form a triangle.");
	
	}
	
	return 0;

}
