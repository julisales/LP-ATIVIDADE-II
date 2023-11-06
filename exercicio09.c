#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero, contador = 0, i;

    printf("Digite um número: ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 0:
    case 1:
        printf("Número não primo!");
        break;
    
    default:
        for (i = 1; i <= numero; i++){
            
            if (numero % i == 0) {
                contador++;
            }
        }

        if (contador == 2) {
            printf("Número primo!");
        }

        else {
            printf("Número não primo!");
        }
        break;
    }

    return 0;
}