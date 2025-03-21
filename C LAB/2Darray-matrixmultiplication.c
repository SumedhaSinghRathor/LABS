#include<studio.h>
int main {

	int a[][3] = 
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
		};
	
	int b[][3] =
	{
		{2,1,3},
		{1,4,6},
		{3,5,7}
		};
		
	int c[3][3], sum, i, j, j1;
	
	for (i=0; i<3; i++) {
	
		for (j=0; j<3; j++) {
		
			for (j1=0; j1<3; j1++) {
			
				sum += a[i][j]*b[i][j];
			
			}
			
			c[i][j] = sum;
			sum=0;
		
		}
	
	}
	
	for () {
	
		for () {
		
			printf("%d\t", c[i][j]);
		
		}
		
		printf("\n");_
	
	}
	
	return 0;
}
