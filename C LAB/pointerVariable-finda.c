// attempted on 26th April 2023

#include<stdio.h>
int main() {

	char a[] = "Yudhistir", b[] = "Bhim", c[] = "Arjun", d[] = "Nakul", e[] = "Sahadev";
	char *p[5];
	int i, j, count=0;

	p[0] = a; p[1] = b; p[2] = c; p[3] = d; p[4] = e;

	for (i=0; i<5; i++) {
	
		while (p[i] == ' ') {
		
			if (*p[i][j] == 'a') {count =+ 1;}
		
		}
	
	}
	
	printf("The number of 'a' found are %d", count);
	
	return 0; 
}
