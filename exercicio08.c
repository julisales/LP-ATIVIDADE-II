#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    for (i = numero; i >= 0; i--)
    {
        printf("%d \n", i);
    }

    return 0;
}