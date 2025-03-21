// attempted on 13th February 2023

#include <stdio.h>
int main() {
    char name[20];
    printf("Enter your name: ");
    scanf("%c", &name);
    
    int roll;
    printf("Enter your Roll No.: ");
    scanf("%d", &roll);
    
    char branch[5];
    printf("Enter your branch: ");
    scanf("%c", &branch);
    
    
    printf("Your name is %s", name);
    printf("Your roll no. is %d", roll);
    printf("Your name is %s", branch);
    
    return 0;
}
