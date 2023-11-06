#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int idioma;
    
    printf("------------------- \n");
    printf("CÓDIGO  | IDIOMA    \n");
    printf("------------------- \n");
    printf("   1    | INGLÊS    \n");
    printf("   2    | ESPANHOL  \n");
    printf("   3    | FRANCÊS   \n");
    printf("-------------------\n \n");

    printf("Escolha um idioma de preferência: \n");
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
        printf("CÓDIGO INVÁLIDO!");
        break;
    }
    
    return 0;
}