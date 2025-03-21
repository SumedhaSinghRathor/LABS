// attempted on 13th February 2023

#include <stdio.h>
int main() {    

    int number1, number2, product;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    product = number1 * number2;      
    
    printf("%d * %d = %d", number1, number2, product);
    return 0;
}
