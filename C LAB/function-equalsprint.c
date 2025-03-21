// attempted on 17th March 2023

#include<stdio.h>
void equalsdisplay(int n) {

	int i;
	
	for (i=0; i<n; i++) {
	
		printf("=");
	
	}
	
	return;

}

int main() {

	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	equalsdisplay(n);
	
	return 0;

}
