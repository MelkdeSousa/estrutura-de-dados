#include "stack_dynamic.h"
#include <stdio.h>
#include <stdlib.h>

DynamicStack *createStack()
{
    DynamicStack *stack = (DynamicStack *)malloc(sizeof(DynamicStack));

    stack->top = NULL;

    return stack;
}

void push(DynamicStack *stack, int element)
{
    Node *node = createNode(element);

    setNextNode(node, stack->top);

    stack->top = node;

    return;
}

int pop(DynamicStack *stack)
{
    if (isEmpty(*stack))
    {
        return -1;
    }

    Node *node = stack->top;

    int value = node->data;

    stack->top = getNextNode(node);

    free(node);

    return value;
}

int isEmpty(DynamicStack stack)
{
    return stack.top == NULL;
}

void printStack(DynamicStack stack)
{
    Node *node = stack.top;

    while (node != NULL)
    {
        printf("%d ", node->data);
        node = getNextNode(node);
    }

    printf("\n");
}