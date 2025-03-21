#include<stdio.h>
// 1	0	0	0		4	0	0	0
// 0	0	0	2	+	0	0	0	-9
// 0	0	3	0		0	0	6	0

int main() {

	int SM1[3][4], SM2[3][4], i, j, count;
	
	printf("Enter the values of the first sparse matrix: \n");
	
	for (i=0; i<3; i++) {
	
		for (j=0; j<4; j++) {
	
			printf("SM1[%d][%d] = ", i, j);
			scanf("%d", &SM1[i][j]);
			
			if (SM1[i][j] != 0) {
			
				count++;
			
			}
		
		}
	
	}
	
	printf("The matrix is: \n");
	
	for (i=0; i<3; i++) {
	
		for (j=0; j<4; j++) {
	
			printf("%d \t", SM1[i][j]);
		
		}
		printf("\n");
	
	}
	
	printf("The equivalent triplet matrix is:\n");
	
	int TM1[count+1][3], TM2[count+1][3], k=1;
	
	TM1[0][0] = 3;
	TM1[0][1] = 4;
	TM1[0][2] = count;
	
	for (i=1; i<3; i++) {
	
		for (j=1; j<4; j++) {
	
			TM1[k][0] = i;
			TM1[k][1] = j;
			TM1[k][2] = SM1[i][j];
		
		}
		
		k++;
	
	}
	
	for (i=0; i<3; i++) {
	
		for (j=0; j<4; j++) {
	
			printf("%d \t", TM1[i][j]);
		
		}
		printf("\n");
	
	}
	
	printf("Enter the values of the second sparse matrix: ");
	
	for (i=0; i<3; i++) {
	
		for (j=0; j<4; j++) {
	
			printf("SM2[%d][%d] = ", i, j);
			scanf("%d", &SM2[i][j]);
		
		}
	
	}
	
	printf("The matrix is: \n");
	
	for (i=0; i<3; i++) {
	
		for (j=0; j<4; j++) {
	
			printf("%d \t", SM2[i][j]);
		
		}
		
		printf("\n");
	
	}
	
	printf("The equivalent triplet matrix is:\n");
	
	TM2[0][0] = 3;
	TM2[0][1] = 4;
	TM2[0][2] = count;
	
	for (i=1; i<3; i++) {
	
		for (j=1; j<4; j++) {
	
			TM2[k][0] = i;
			TM2[k][1] = j;
			TM2[k][2] = SM1[i][j];
		
		}
		
		k++;
	
	}
	
	for (i=0; i<3; i++) {
	
		for (j=0; j<4; j++) {
	
			printf("%d \t", TM1[i][j]);
		
		}
		printf("\n");
	
	}
	
	return 0;

}
