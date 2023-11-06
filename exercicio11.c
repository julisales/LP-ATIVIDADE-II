#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int codigo;
    int codigo_salvo = 123456; 

    do {
        printf("Digite o código de acesso: ");
        scanf("%d", &codigo);
        
        system("cls || clear");

        if (codigo != codigo_salvo)
        {
        printf("Código de acesso incorreto. Digite novamente. \n");
        }

    } while (codigo != codigo_salvo);

    system("cls || clear");

    printf("ACESSO PERMITIDO!\n");

    return 0;
}