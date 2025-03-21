// attempted on 10th May 2023

#include<stdio.h>
struct books {

	char name[50];
	float price;
	int pages;

};

int main() {

	struct books b[5];
	int i,n=5;
	
	for (i=0; i<5; i++) {
	
		printf("Enter the information of book: ");
		scanf("%s %f %d", b[i].name, &b[i].price, &b[i].pages);
	
	}
	
	printf("Name of the Book \t Price \t Page Count\n");
	
	for (i=0; i<5; i++) {
	
		printf("\n%s \t %0.2f \t %d", b[i].name, b[i].price, b[i].pages);
	
	}
	
	return 0;

}
