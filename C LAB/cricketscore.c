#include<stdio.h>

int main() {
	
	int i, s = 0;
	printf("Enter Name of Player Runs Scored \n");
	printf("---------------------------------------------\n\t");
	
	for(i=0; i <= 10 ;i++) {
		scanf("%s", &a[i].name);
          scanf("%d", &a[i].runs);
          printf("\t");
     }
     
     for(i=0;i<=10;i++) {
          s=s+a[i].runs;
     }
     
     printf("\n---------------------------------------------\n");
     printf("Total Runs Scored by Team: %d",s);
     return 0;
}
