#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int idioma;
    
    printf("------------------- \n");
    printf("C�DIGO  | IDIOMA    \n");
    printf("------------------- \n");
    printf("   1    | INGL�S    \n");
    printf("   2    | ESPANHOL  \n");
    printf("   3    | FRANC�S   \n");
    printf("-------------------\n \n");

    printf("Escolha um idioma de prefer�ncia: \n");
    scanf("%d", &idioma);

    system("cls || clear");
    
    switch (idioma)
    {
    case 1:
        printf("WELCOME!");
        break;

    case 2:
        printf("BIENVENIDA!");
        break;

    case 3:
        printf("ACCUEILLIR!");
        break;
    
    default:
        printf("C�DIGO INV�LIDO!");
        break;
    }
    
    return 0;
}