#include "node.h"

typedef struct {
    Node *top;
} DynamicStack;

DynamicStack *createStack();
void push(DynamicStack *stack, int element);
int pop(DynamicStack *stack);

int isEmpty(DynamicStack stack);
void printStack(DynamicStack stack);