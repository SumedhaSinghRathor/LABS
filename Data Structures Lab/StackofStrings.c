#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 100

struct StringStack {
    char* items[MAX_SIZE];
    int top;
};

struct StringStack* createStringStack() {
    struct StringStack* stack = (struct StringStack*)malloc(sizeof(struct StringStack));
    if (stack == NULL) {
        printf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    stack->top = -1;
    return stack;
}

bool isStringStackEmpty(struct StringStack* stack) {
    return stack->top == -1;
}

bool isStringStackFull(struct StringStack* stack) {
    return stack->top == MAX_SIZE - 1;
}

void pushString(struct StringStack* stack, const char* str) {
    if (isStringStackFull(stack)) {
        fprintf(stderr, "Stack is full. Cannot push.\n");
        return;
    }
    stack->items[++stack->top] = strdup(str);
    if (stack->items[stack->top] == NULL) {
        frintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
}

char* popString(struct StringStack* stack) {
    if (isStringStackEmpty(stack)) {
        printf(stderr, "Stack is empty. Cannot pop.\n");
        return NULL;
    }
    char* str = stack->items[stack->top];
    stack->items[stack->top] = NULL;
    stack->top--;
    return str;
}

void freeStringStack(struct StringStack* stack) {
    while (!isStringStackEmpty(stack)) {
        char* str = popString(stack);
        free(str);
    }
    free(stack);
}

int main() {
    struct StringStack* stack = createStringStack();

    pushString(stack, "Hello");
    pushString(stack, "My Name");
    pushString(stack, "Is");
    pushString(stack, "Sumedha Singh Rathor");

    printf("Popped: %s\n", popString(stack));
    printf("Popped: %s\n", popString(stack));

    freeStringStack(stack);

    return 0;
}

