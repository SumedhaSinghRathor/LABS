// attempted on 28th April 2023

#include<stdio.h>

int main(){
	
	int number;
	int a[number], i, j, k, count = 0;

	printf("Enter size of the array: ");
	scanf("%d", &number);
	
	for (i=0; i<number; i++) {
	
		printf("Enter Elements of the array: ");
		scanf("%d", &a[i]);
	}
	
	printf("\nThe entered array is: ");
	
	for (i=0; i<number; i++) {
	
		printf("%d ", a[i]);
	
	}
	
	printf("\n");
	
	for(i=0; i<number; i++) {
	
		for(j = i+1; j < number; j++) {
		
			if(a[i] == a[j]) {
			
				for(k = j; k<number; k++) {
				
				a[k] = a[k+1];
            			
            			}
            			
            			j--;
            			number--;
            			
            		}
            	}
	}
	
   printf("After deleting the duplicate elements, the new array is: ");
   
   for(i=0; i<number; i++) {
   
   	printf("%d ",a[i]);
   
   }
   
 }
