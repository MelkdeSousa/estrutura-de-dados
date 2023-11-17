#include "stack_static.h"

void create(StackStatic *stack) {
    stack->top = -1;
}

void push(StackStatic *stack, int element) {
    if (!isFull(stack)) {
        stack->data[++stack->top] = element;
    }
}

int pop(StackStatic *stack) {
    if (!isEmpty(stack)) {
        return stack->data[stack->top--];
    }
    return -1;
}

int isEmpty(StackStatic *stack) {
    return stack->top == -1;
}

int isFull(StackStatic *stack) {
    return stack->top == MAX_ITEMS - 1;
}

int peek(StackStatic *stack) {
    if (!isEmpty(stack)) {
        return stack->data[stack->top];
    }
    return -1;
}

