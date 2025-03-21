// attemped on 24th February 2023

#include<stdio.h>
int main() {

	int bs, gs;
	
	printf("Enter basic salary: ");
	scanf("%d", &bs);
	
	if (bs < 1500) {
	
		gs = bs + (bs*10)/100 + (bs*40)/100;
		printf("The gross salary is: %d", gs);
	
	} else {
	
		gs = bs + 500 + (bs*50)/100;
		printf("The gross salary is: %d", gs);
	
	}

	return 0;
	
}
