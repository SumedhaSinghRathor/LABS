// attempted on 1st March 2023

#include<stdio.h>
int main() {

	int phy, chem, math, eng, bio, avg;
	
	printf("Enter the marks for Physics: ");
	scanf("%d", &phy);
	printf("Enter the marks for Chemistry: ");
	scanf("%d", &chem);
	printf("Enter the marks for Mathematics: ");
	scanf("%d", &math);
	printf("Enter the marks for Engineering: ");
	scanf("%d", &eng);
	printf("Enter the marks for Biology: ");
	scanf("%d", &bio);
	
	avg = (phy + chem + math + eng + bio) / 5;
	
	if (70 < avg <= 61) {
		printf("Your average is %d and your grade is A", avg);
	} if else (60 < avg <= 51) {
		printf("Your average is %d and your grade is B", avg);
	} if else (50 < avg <= 41) {
		printf("Your average is %d and your grade is C", avg);
	} if else (avg < 40) {
		printf("Your average is %d and your grade is A", avg);
	} else {
		printf("Invalid marks. Re-enter marks!");
	}
	
	return 0;
}
