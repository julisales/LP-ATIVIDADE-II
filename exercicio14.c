#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero, pares= 0, impares = 0, soma_pares = 0, soma_impares = 0;
    float media_pares = 0, media_impares = 0;

    printf("Para parar a execu��o digite um n�mero NEGATIVO!\n");

    do
    {
        printf("Digite um n�mero: ");
        scanf("%d", &numero);

        if (numero > 0)
        {
            if (numero % 2 == 0){
                pares++;
                soma_pares += numero;
            } else {
                impares++;
                soma_impares += numero;
            }
        }

    } while (numero > 0);

    media_pares = (float) soma_pares / pares;
    media_impares = (float) soma_impares / impares;

    system("cls || clear");
    
    printf("Quantidade de n�meros pares: %d \n", pares);
    printf("Quantidade de n�meros �mpares: %d \n", impares);
    printf("M�dia aritm�tica de n�meros pares: %.2f \n", media_pares);
    printf("M�dia aritm�tica de n�meros �mpares: %.2f \n", media_impares);

    return 0;
}