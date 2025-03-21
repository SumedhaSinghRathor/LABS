// attempted on 1st March 2023

#include<stdio.h>
int main() {

	char username[1];
	long int password;
	
	printf("Enter the username: ");
	scanf("%c", &username);
	
	printf("Enter the password: ");
	scanf("%ld", &password);
	
	if (username == 's') {
	
		if (password == 22052863) {
		
			printf("Correct username and password!");
		
		} else {
		
			printf("Wrong password. Try Again!!");
		
		}
	
	} else {
	
		printf("Wrong Username. Try Again!!");
	
	}
	
	return 0;

}
