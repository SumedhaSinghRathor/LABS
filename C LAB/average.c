// attempted on 15th February 2023

#include <stdio.h>
int main() {    

    float s1, s2, s3, average;
    
    printf("Enter the marks of the 1st subject: ");
    scanf("%f", &s1);
    
    printf("Enter the marks of the 2nd subject: ");
    scanf("%f", &s2);
    
    printf("Enter the marks of the 3rd subject: ");
    scanf("%f", &s3);

    average = (s1+s2+s3)/3;      
    
    printf("The average of the 3 given subjects is: %f", average);
    return 0;
}
