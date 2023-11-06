#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int quantidade, i;
    float nota, soma = 0, media;

    printf("Digite a quantidade de notas que deseja inserir: ");
    scanf("%d", &quantidade);

    system("cls || clear");

    for (i = 1; i <= quantidade; i++)
    {
        printf("Digite a %d° nota: ", i);
        scanf("%f", &nota);

        soma += nota;
    }

    system("cls || clear");

    media = soma / quantidade;

    printf("Média: %.2f", media);

    return 0;
}