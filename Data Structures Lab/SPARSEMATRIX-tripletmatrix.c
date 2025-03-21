#include<stdio.h>
int main() {

	int OM[3][4], i, j, count=0;
	
	printf("Enter values of the sparse matrix.\n");
	
	for (i=0; i<4; i++) {
	
		for (j=0; j<3; j++) {
		
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &OM[i][j]);
		
		}
	
	}


	for (i=0; i<4; i++) {
	
		for (j=0; j<3; j++) {
		
			printf("%d\t", OM[i][j]);
		
		}
		
		printf("\n");
	
	}
	
	printf("The equivalent triplet matrix is: \n");
	
	for (i=0; i<3; i++) {
	
		for (j=0; j<4; j++) {
		
			if (OM[i][j] != 0) { count++; }
		
		}
	
	}
	
	int TM[count+1][3], k;
	
	k=1;
	
	TM[0][0] = 3;
	TM[0][1] = 4;
	TM[0][2] = count;
	
	for (i=1; i<count+1; i++) {
	
		for (j=1; j<3; j++) {
		
			TM[k][0] = i;
			TM[k][1] = j;
			TM[k][2] = OM[i][j];
		
		}
	
		k++;
		
	}
	
	for (i=0; i<3; i++) {
	
		for (j=0; j<4; j++) {
		
			printf("%d", TM[i][j]);
		
		}
	
	}
	
	return 0;

}
