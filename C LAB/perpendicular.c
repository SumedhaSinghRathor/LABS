// attempted on 22th February 2023

#include <stdio.h>
int main() {

	int x1,x2,x3,x4,y1,y2,y3,y4;
	float m1,m2,t;
	
	printf("Enter the first co-ordinates of the first line: ");
	scanf("%d, %d", &x1, &y1);
	
	printf("Enter the second co-ordinates of the first line: ");
	scanf("%d, %d", &x2, &y2);
	
	printf("Enter the first co-ordinates of the second line: ");
	scanf("%d, %d", &x3, &y3);
	
	printf("Enter the second co-ordinates of the second line: ");
	scanf("%d, %d", &x4, &y4);
		
	m1 = (y2 - y1) / (x2 - x1);
	m2 = (y4 - y3) / (x4 - x3);
	
	t = m1 * m2 * -1;
	
	printf("%f", t);
	
	return 0;

}
