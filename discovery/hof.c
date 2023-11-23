#include <stdio.h>

// Função que aceita um ponteiro para função como parâmetro
void executaOperacao(int a, int b, int (*funcao)(int, int))
{
    int resultado = funcao(a, b);
    printf("Resultado da operação: %d\n", resultado);
}

// Funções que serão passadas como parâmetros
int soma(int x, int y)
{
    return x + y;
}

int subtracao(int x, int y)
{
    return x - y;
}

int multiplicacao(int x, int y)
{
    return x * y;
}

int main()
{
    int valorA = 10;
    int valorB = 5;

    // Passando funções como parâmetros
    executaOperacao(valorA, valorB, soma);
    executaOperacao(valorA, valorB, subtracao);
    executaOperacao(valorA, valorB, multiplicacao);

    return 0;
}
