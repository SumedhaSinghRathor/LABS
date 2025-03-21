// attempted on 19th April 2023

#include<stdio.h>  
int main() {
	
	int i, *ptr, sum=0, arr[5] = {1,2,3,4,5}, a[i];
	ptr=arr;
		
	for(i=0; i<5; i++) {
	
		if (*(ptr+i)%2 == 0) {
		
			printf("%d is an even number.\n", *(ptr+i));
			sum += *(ptr+i);
	
			}
		
		}
	
	printf("The sum of all even numbers is: %d", sum);
	
	return 0;
	
}
