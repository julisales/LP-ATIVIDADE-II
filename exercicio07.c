#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int opcao;

    printf("----------------------  \n");
    printf("C�DIGO  | OP��O         \n");
    printf("----------------------  \n");
    printf("   1    | NOVO JOGO     \n");
    printf("   2    | CARREGAR JOGO \n");
    printf("   3    | CONFIGURA��ES \n");
    printf("-----------------------\n \n");

    printf("Digite a op��o desejada: ");
    scanf("%d", &opcao);

    system("cls || clear");

    switch (opcao)
    {
    case 1:
        printf("Criando novo jogo...");
        break;

    case 2:
        printf("Carregando jogo salvo...");
        break;

    case 3:
        printf("Iniciando configura��es...");
        break;

    default:
        printf("C�digo Inv�lido!");
        break;
    }

    return 0;
}