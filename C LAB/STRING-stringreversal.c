//attempted on 3rd May 2023

#include <stdio.h>

int main() {
  
char string1[100], reversed_string[100];
int i, j, count = 0;



printf("Enter a string: ");
scanf("%s", string1);


while (string1[count] != '\0') {
  count++;
}

j = count - 1;


for (i = 0; i < count; i++) {
  reversed_string[i] = string1[j];
  j--;
}

printf("\n Reversed String = %s", reversed_string);
}


