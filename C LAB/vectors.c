// attempted on 22nd February 2023

#include<stdio.h>
#include<math.h>
int main() {

	int i1, j1, i2, j2, angle;
	float a, b, dot, cross;
	
	printf("Enter the co-ordinates of the 1st vector: ");
	scanf("%d %d", &i1, &j1);
	
	printf("Enter the c value of the 2nd vector: ");
	scanf("%d %d", &i2, &j2);
	
	printf("Enter the angle between the vectors: ");
	scanf("%d", &angle);
	
	// a is the absoulte value of 1
	a = sqrt(i1*i1 + j1*j1);
	
	// b is the absoulte value of 2
	b = sqrt(i2*i2 + j2*j2);
	
	dot = a * b * cos(angle);
	
	cross = a * b * sin(angle);
	
	printf("\n \nThe dot product of the vectors is : %f\n", dot);
	printf("The cross product of the vectors is: %f", cross);
	
	return 0;

}
