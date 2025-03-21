// GROUP B
// QUESTION 2: Define a structure called 'cricket' that will describe the following information:
//										player name
//										batting average
// Using cricket, declare an array player with 5 elements and write a program to read the information about all the 5 players and print name of the players having batting average less than 40

#include<stdio.h>
struct cricket {

	char name[20];
	int batting_avg;

};

int main() {

	struct cricket players[5];
	int i;
	
	for (i=0; i<5; i++) {
	
		printf("Enter the information about player %d.\n", i+1);
		printf("Name of the player: ");
		scanf("%s", players[i].name);
		printf("Batting average of the player: ");
		scanf("%d", &players[i].batting_avg);
		printf("\n");
	
	}
	
	printf("\nThe following players have a batting average less than 40: \n");
	
	for (i=0; i<5; i++) {
	
		if (players[i].batting_avg <= 40) {
	
			printf("%s \n", players[i].name);

		}
	}
	
	return 0;

}
