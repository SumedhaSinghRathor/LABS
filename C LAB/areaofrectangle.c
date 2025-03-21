// attempted on 13th February 2023

#include <stdio.h>
int main() {    

    float length, breadth, area;
    
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;      
    
    printf("The area of rectangle with length %f and breadth %f is %f", length, breadth, area);
    return 0;
}
