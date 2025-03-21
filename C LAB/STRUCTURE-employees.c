// attempted on 5th May 2023

#include<stdio.h>
struct employee {

	char name[50];
	float salary;
	int age;

};

int main() {

	struct employee e1={"A", 55.50, 30};
	struct employee e2={"B", 65.30, 45};
	struct employee e3={"C", 73.80, 32};
	struct employee e4={"D", 69.80, 43};
	struct employee e5={"E", 49.50, 31};
	
	float avg;
	
	avg=((e1.salary)+(e2.salary)+(e3.salary)+(e4.salary)+(e5.salary))/5;
	
	printf("The average salary amongst the employees is %0.2f", avg);

	
	
	return 0;

}
