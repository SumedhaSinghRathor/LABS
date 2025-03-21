// attempted on 17th March 2023

#include<stdio.h>
void fun(char ch) {
	
	if (ch>=65 && ch<=90) {
		printf(ch);
	} else {
		printf(ch - 32);
	}
		
	return;

}

int main() {
	
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	fun(ch);
	
	return 0;

}
