// attempted on 15th February 2023

#include <stdio.h>
int main() {
    
    int a;
    float b;
    char c;
    
    printf("The size of int variable is %ld", sizeof(a));
    printf("\nThe size of float variable is %ld", sizeof(b));
    printf("\nThe size of char variable is %ld", sizeof(c));
    
    printf("\n \nThe address of int variable is %p\n", &a);
    printf("The address of float variable is %p\n", &b);
    printf("The address of char variable is %p\n", &c);
    
    return 0;
    
}
