// attempted on 13th February 2023

#include <stdio.h>
int main() {    

    float side, area;
    
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    
    area = side*side;      
    
    printf("The area of square with side %f is %f", side, area);
    return 0;
}
