//WAP to count vowels in a string using pointer

#include<stdio.h>
int main() {

	int a[50], *ptr, i;

	printf("Enter a string: ");
	scanf("%ls", a);
	
	ptr = a;
	
	for (i=0; i<50; i++) {
	
			printf("%c", *(ptr+i));
		
		}
	
	return 0;

}
