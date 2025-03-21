#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_STACK_SIZE 100

struct Stack {

    int top;
    int items[MAX_STACK_SIZE];

};

void initialize(struct Stack* stack) {

    stack->top = -1;

}

int isEmpty(struct Stack* stack) {

    return stack->top == -1;

}


void push(struct Stack* stack, int item) {

    if (stack->top == MAX_STACK_SIZE - 1) {

        printf("Stack Overflow\n");
        exit(1);

    }

    stack->items[++stack->top] = item;

}


int pop(struct Stack* stack) {

    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        exit(1);
    }

    return stack->items[stack->top--];

}


int evaluatePostfix(char* expression) {

    struct Stack stack;
    initialize(&stack);

    for (int i = 0; expression[i] != '\0'; i++) {

        if (isdigit(expression[i])) {

            push(&stack, expression[i] - '0');

        } else {

            int operand2 = pop(&stack);
            int operand1 = pop(&stack);
            int result;

            switch (expression[i]) {

                case '+':
                    result = operand1 + operand2;
                    break;

                case '-':
                    result = operand1 - operand2;
                    break;

                case '*':
                    result = operand1 * operand2;
                    break;

                case '/':
                    if (operand2 == 0) {
                        printf("Division by zero\n");
                        exit(1);
                    }

                    result = operand1 / operand2;
                    break;

                default:
                    printf("Invalid operator\n");
                    exit(1);

            }

            push(&stack, result);

        }

    }

    if (!isEmpty(&stack)) {

        return pop(&stack);

    } else {

        printf("Invalid expression\n");
        exit(1);

    }
}

int main() {

    char postfix_expression[] = "23*5+";
    int i = 0;
    char input;
     
    int result = evaluatePostfix(postfix_expression);
    printf("Result: %d\n", result);
    return 0;

}
