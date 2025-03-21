// attempted on 3rd May 2023

#include<stdio.h>
int main() {

	char b[25];
	int i, count=0;
	char ch;
	
	printf("Enter a string: ");
	scanf("%s", b);
	
	printf("Enter the character for which you want to find out the frequency in the string: ");
	scanf("%c", &ch);
	
	while (b[i] != 0) {
	
		if (ch = b[i++]) {
		
			++count;
		
		}
		
	}
	
	printf("The frequency of %c in the string is %d", ch, count);
	
	return 0;
	
}
