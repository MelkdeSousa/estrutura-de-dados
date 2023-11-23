#include <stdio.h>
#include <string.h>

// Função genérica para imprimir uma string
void imprimirString(const char *str)
{
    printf("%s\n", str);
}

// Função genérica para obter o comprimento de uma string
size_t obterComprimentoString(const char *str)
{
    return strlen(str);
}

int main()
{
    // Exemplo de uso com strings
    const char *string1 = "Hello,";
    const char *string2 = " world!";

    // Imprimir strings
    imprimirString(string1);
    imprimirString(string2);

    // Concatenar strings
    char resultado[50];
    strcpy(resultado, string1);
    strcat(resultado, string2);

    // Imprimir resultado da concatenação
    imprimirString(resultado);

    // Obter comprimento da string resultante
    size_t comprimento = obterComprimentoString(resultado);
    printf("Comprimento da string resultante: %zu\n", comprimento);

    return 0;
}
