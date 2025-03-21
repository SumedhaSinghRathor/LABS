// attempted on 24th March 2023

#include<stdio.h>
int find_max(int n) {

	int i, largest = 0, next_num;
	
	for (i=0; i<n; i++) {
	
		printf("Enter a number: ");
		scanf("%d", &next_num);
		
		if (next_num > largest) {
		
			largest = next_num;
		
		}
	
		return(largest);
	
	}

}

int count_leader(int n) {

	int i, leader = 0, next_num, count = 0;
	
	for (i=0; i<n; i++) {
	
		printf("Enter a number: ");
		scanf("%d", &next_num);
		
		if (next_num > leader) {
		
			leader = next_num;
			count++;
		
		}
	
	}

}

int main() {

	int a, b;
	a = find_max(10);
	printf("\n Max is %d", a);
	printf("\n Max is %d", find_max(20));
	
	b = count_leader(20);
	printf("\n The leader is %d", b);
	printf("\n The leader is %d", count_leader(20));

	return 0;
}
