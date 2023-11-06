#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int idade;
    char resultado [50];
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    system("cls || clear");
    
    if (idade >= 18)
    {
        strcpy(resultado, "Acesso permitido!");
    }
    
    else
    {
        strcpy(resultado, "Acesso negado!");
    }
    
    printf("%s", resultado);

    return 0;
}