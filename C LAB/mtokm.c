// attempted on 13th February 2023

#include <stdio.h>
int main() {    

    float distinm, distinkm;
    
    printf("Enter the distance in meters: ");
    scanf("%f", &distinm);
    
    distinkm = distinm/1000;      
    
    printf("The given distance in kilometers is: %.3f", distinkm);
    return 0;
}
