//WAP to count vowels in a string using pointer

#include<stdio.h>
int main() {

	int a[50], *ptr, i;
	int count=0;
	
	printf("Enter a string: ");
	scanf("%ls", a);
	
	ptr = a;
	
	for (i=0; i<50; i++) {
	
		if (*(ptr+i) == 'a' || *(ptr+i) == 'e' || *(ptr+i) == 'i' || *(ptr+i) == 'o' || *(ptr+i) == 'u' || *(ptr+i) == 'A' || *(ptr+i) == 'E' || *(ptr+i) == 'I' || *(ptr+i) == 'O' || *(ptr+i) == 'U') {
		
			count++;
		
		}
	
	}
	
	printf("The number of vowels in the string entered is %d", count);
	
	return 0;

}
