// attempted on 19th April 2023

#include<stdio.h>
int main() {
	
	int i, *ptr, sum=0, arr[5] = {2,4,6,8,0};
	ptr=arr+4;
		
	for(i=5; i>0; i--) {
		
		sum+=*(ptr-i);

	}
	
	printf("The sum of the array is %d", sum);
	
	return 0;
	
}
