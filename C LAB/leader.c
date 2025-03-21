// attempted on 24th March 2023

#include<stdio.h>
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
	
	int b;
	
	b = count_leader(10);
	printf("\n The leader is %d", b);
	printf("\n The leader is %d", count);

	return 0;
}
