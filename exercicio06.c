#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int produto;

    printf("------------------- \n");
    printf("CÓDIGO  | PRODUTO   \n");
    printf("------------------- \n");
    printf("   1    | CAMISETA  \n");
    printf("   2    |  CALÇA    \n");
    printf("   3    |  SAPATO   \n");
    printf("-------------------\n \n");

    printf("Digite o código do produto que deseja saber o preço:");
    scanf("%d", &produto);

    system("cls || clear");
    
    switch (produto)
    {
    case 1:
        printf("VALOR: R$50,00");
        break;

    case 2:
        printf("VALOR: R$100,00");
        break;

    case 3:
        printf("VALOR: R$300,00");
        break;
    
    default:
        printf("CÓDIGO INVÁLIDO!");
        break;
    }
    
    return 0;
}