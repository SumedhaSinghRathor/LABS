// attempted on 15th February 2023

#include <stdio.h>
int main() {
    
    float x1, x2, y1, y2, slope;
    
    printf("Enter the abscissa and the ordinate of the first point: ");
    scanf("%f %f", &x1, &y1);
    
    printf("Enter the abscissa and the ordinate of the second point: ");
    scanf("%f %f", &x2, &y2);
    
    slope = (y2-y1)/(x2-x1);
    
    printf("The slope of the two point given in 2D is %f", slope);
    
    return 0;
}
