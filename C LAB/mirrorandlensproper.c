// attempted on 1st March 2023

#include<stdio.h>
int main() {

	int a, b, c, d, e, f, g;
	
	printf("Enter 1, if the light is passing through a lens.\n");
	printf("Enter 2, if the light is passing through a mirror. \n");
	printf("Enter value: ");
	scanf("%d", &a);
	
	if (a == 1) {
    	// concave lens or convex lens
    	printf("Enter 1, if the light is passing through a concave lens.\n");
    	printf("Enter 2, if the light is passing through a convex lens.\n");
    	printf("Enter value: ");
    	scanf("%d", &b);
    	
    		if (b == 1) {
    		// position for concave lens
    		printf("Enter 1, if the object is placed at infinity.\n");
    		printf("Enter 2, if the object is placed between infinity and the pole.\n");
    		printf("Enter value: ");
    		scanf("%d", &d);
    		
			if (d == 1) {
            		
            			printf
            		
			} else if (d == 2) {
            
			} else {
					printf("Invalid Input!!");
			}
			
    } else if (b == 2) {
        // position for convex lens
        if (e == 1) {
            
        } else if (e == 2) {
            
        } else if (e == 3) {
            
        } else if (e == 4) {
            
        } else if (e == 5) {
            
        } else if (e == 6) {
            
        } else {
            printf("Invalid Input!!");
        }
    } else {
        printf("Invalid Input!!");
    }
} else if (a == 2) {
    // concave mirror or convex mirror
    if (c == 1) {
        // position for concave mirror
        if (f == 1) {
            
        } else if (f == 2) {
            
        } else if (f == 3) {
            
        } else if (f == 4) {
            
        } else if (f == 5) {
            
        } else if (f == 6) {
            
        } else {
            printf("Invalid Input!!");
        }
    } else if (c == 2) {
        // position for convex mirror
        if (g == 1) {
            
        } else if (g == 2) {
            
        } else {
            printf("Invalid Input!!");
        }
    } else {
        printf("Invalid Input!!");
    }
} else {
    printf("Invalid Input!!");
}

return 0
}
