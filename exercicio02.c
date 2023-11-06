#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int dia;
    float valor, desconto, valortotal;

    do
    {
        printf("--------------- SISTEMA DE DESCONTOS ---------------\n \n");

        printf("CÓDIGO  |    DIA    \n");
        printf("  1     |  SEGUNDA  \n");
        printf("  2     |  TERÇA    \n");
        printf("  3     |  QUARTA   \n");
        printf("  4     |  QUINTA   \n");
        printf("  5     |  SEXTA    \n");
        printf("  6     |  SABÁDO   \n");
        printf("  7     |  DOMINGO  \n");

        printf("Digite o dia da semana que foi realizada a compra: ");
        scanf("%d", &dia);

        printf("Digite o valor da compra: ");
        scanf("%f", &valor);

        desconto = dia == 6 || dia == 7 ? valor * 0.15 : valor * 0.10;

        valortotal = valor - desconto;

        system("cls || clear");

        if (dia < 1 || dia > 7)
        {
            printf("Código Inválido! Digite novamente. \n \n");
        }

    } while (dia < 1 || dia > 7);

    printf("Valor total da compra: %.2f", valortotal);

    return 0;
}