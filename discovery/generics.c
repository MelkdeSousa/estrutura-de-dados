#include <stdio.h>

// Definição da estrutura
typedef struct
{
    void *value;
    struct Node *next;
} Node;

// Função de comparação genérica
int compareNodes(const Node *a, const Node *b, int (*compareFunction)(const void *, const void *))
{
    return compareFunction(a->value, b->value);
}

// Função de comparação específica para int
int compareInt(const void *a, const void *b)
{
    int valueA = *((int *)a);
    int valueB = *((int *)b);

    if (valueA > valueB)
    {
        return 1;
    }
    else if (valueA < valueB)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

// Função de comparação específica para double
int compareDouble(const void *a, const void *b)
{
    double valueA = *((double *)a);
    double valueB = *((double *)b);

    if (valueA > valueB)
    {
        return 1;
    }
    else if (valueA < valueB)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // Exemplo de uso com int
    int intValueA = 10;
    int intValueB = 5;
    Node nodeA = {&intValueA, NULL};
    Node nodeB = {&intValueB, NULL};

    int resultInt = compareNodes(&nodeA, &nodeB, compareInt);

    if (resultInt > 0)
    {
        printf("O valor de nodeA é maior que o valor de nodeB.\n");
    }
    else if (resultInt < 0)
    {
        printf("O valor de nodeB é maior que o valor de nodeA.\n");
    }
    else
    {
        printf("Os valores de nodeA e nodeB são iguais.\n");
    }

    // Exemplo de uso com double
    double doubleValueA = 7.5;
    double doubleValueB = 10.2;
    Node nodeC = {&doubleValueA, NULL};
    Node nodeD = {&doubleValueB, NULL};

    int resultDouble = compareNodes(&nodeC, &nodeD, compareDouble);

    if (resultDouble > 0)
    {
        printf("O valor de nodeC é maior que o valor de nodeD.\n");
    }
    else if (resultDouble < 0)
    {
        printf("O valor de nodeD é maior que o valor de nodeC.\n");
    }
    else
    {
        printf("Os valores de nodeC e nodeD são iguais.\n");
    }

    return 0;
}
