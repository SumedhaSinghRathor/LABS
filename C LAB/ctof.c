// attempted on 15th February 2023

#include <stdio.h>
int main() {    

    float celsius, farenheit;
    
    printf("Enter the temprature in celsius: ");
    scanf("%f", &celsius);
    
    farenheit = 1.8*celsius+32;      
    
    printf("The equivalent temprature in farenheit in: %0.2f", farenheit);
    return 0;
}
