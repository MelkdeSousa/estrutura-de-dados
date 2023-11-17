#include <stdio.h>
#include "stack_static.h"

int main(int argc, char const *argv[])
{
    int value, rest;

    StackStatic stack;

    create(&stack);

    printf("Enter a decimal number: ");

    scanf("%d", &value);

    while (value > 0)
    {
        rest = value % 2;
        push(&stack, rest);
        value = value / 2;
    }

    printf("Binary number: ");

    while (!isEmpty(&stack))
    {
        printf("%d", pop(&stack));
    }

    printf("\n");

    return 0;
}
