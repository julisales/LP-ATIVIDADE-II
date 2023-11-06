#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int codigo;
    float medida, conversao;

    do
    {
        
    printf("---------------------------------\n");
    printf("C�DIGO  |        CONVERS�O       \n");
    printf("---------------------------------\n");
    printf("   1    | QUIL�METROS PARA MILHAS\n");
    printf("   2    | CELSIUS PARA FAHRENHEIT\n");
    printf("   0    | SAIR                   \n");
    printf("---------------------------------\n \n");

    printf("Digite o c�digo da convers�o que deseja fazer: ");
    scanf("%d", &codigo);

     if (codigo == 0) {
            break; 
        }

    system("cls || clear");

    switch (codigo)
    {
    case 1:
        printf("Digite a dist�ncia em quil�metros: ");
        scanf("%f",&medida);

        conversao = medida * 0.62137;

        system("cls || clear");

        printf("%.2f quilometros = %.2f milhas \n \n", medida, conversao);

        break;

    case 2:
        printf("Digite a temperatura em graus Celsius: ");
        scanf("%f", &medida);

        conversao = (medida * 9/5) + 32;

        system("cls || clear");

        printf("%.f�C = %.f�F \n \n", medida, conversao);
        break;

    default:
        printf("C�DIGO INV�LIDO! DIGITE NOVAMENTE. \n");
        break;
    }

    } while (codigo != 0);

    return 0;
}