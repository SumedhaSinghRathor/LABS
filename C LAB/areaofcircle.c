// attempted on 13th February 2023

#include <stdio.h>
int main() {    

    float radius, area;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;      
    
    printf("The area of circle with radius %f is %f", radius, area);
    return 0;
}
