//attempted on 29th March 2023

#include<stdio.h>

int main() {

	int i, avg, count = 0, sum = 0, marks[20];
	
	for (i=0; i<20; i++) {

		printf("Enter new data: ");
		scanf("%d", &marks[i]);
	
	}

	for (i=0;i<20;i++) {

		sum+=marks[i];
			
		if (marks[i]>89) { count++;}
	}

		avg=sum/20;
		printf("\nThe average marks of the class is %d", avg);
		printf("\nThe number of students that recieved an O grade are: %d", count);

		return 0;
}
