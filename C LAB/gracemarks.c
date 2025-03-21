// 24th February 2023
// WAP to give 60 marks grace if age is below 50, else give 40 marks grace i.e. all wil atleast get 40 marks grace additional 20 marks will be given if the age is below 50 the marks should not cross 100

#include<stdio.h>
int main() {

	int marks, age;
	
	printf("Enter the marks: ");
	scanf("%d", &marks);
	
	printf("Enter the age: ");
	scanf("%d", &age);
	
	if (age < 50) {
	
		marks += 60;
	
	} else {
	
		marks += 40;
	
	}
	
	if (marks > 100) {
	
		printf("The marks obtained is 100.");
	
	} else {
	
		printf("The marks obtained is %d", marks);
	
	}
	
	return 0;

}
