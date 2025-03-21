//WAP to count vowels in a string using pointer

#include<stdio.h>
int main() {

	int a[50], *ptr, i;
	int vCount=0, cCount=0;
	
	printf("Enter a string: ");
	scanf("%ls", a);
	
	ptr = a;
	
	for (i=0; i<50; i++) {
	
		if (*(ptr+i) == 'a' || *(ptr+i) == 'e' || *(ptr+i) == 'i' || *(ptr+i) == 'o' || *(ptr+i) == 'u' || *(ptr+i) == 'A' || *(ptr+i) == 'E' || *(ptr+i) == 'I' || *(ptr+i) == 'O' || *(ptr+i) == 'U') {
		
			vCount++;
		
		} else {
		
			cCount++;
		
		}
	
	}
	
	printf("\nThe number of vowels in the string entered is %d", vCount);
	printf("\nThe number of consonants in the string entered is %d", cCount);
	
	return 0;

}
