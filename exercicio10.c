#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero1, numero2;
    float resultado;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    fflush(stdin);

    printf("Digite a operação desejada (+ - * /): ");
    scanf("%c", &operacao);

    switch (operacao)
    {

    case '+':
        resultado = numero1 + numero2;
        break;
    
    case '-':
         resultado = numero1 - numero2;
        break;
    
    case '*':
         resultado = numero1 * numero2;
        break;
    
    case '/':
         resultado = (float) numero1 / numero2;
        break;
    
    default:
        printf("Operação inválida \n");
        break;
    }
    
    printf("%d %c %d = %.1f \n", numero1, operacao,numero2, resultado);

    return 0;
}