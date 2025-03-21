// attempted on 13th February 2023

#include <stdio.h>
int main() {    

    int number1, number2;
    float quotient;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    quotient = number1 % number2;      
    
    printf("%d / %d = %f", number1, number2, quotient);
    return 0;
}
