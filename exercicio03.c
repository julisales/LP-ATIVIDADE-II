#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float nota;
    char resultado [50];
    
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    
    if (nota >= 9) {
        strcpy(resultado, "Excelente!");
    }
    
    else if (nota >= 7 && nota <= 8.9){
        strcpy(resultado, "Bom!");
    }
    
    else if (nota >= 5 && nota <= 6.9)
    {
        strcpy(resultado, "Razoável!");
    }
    
    else 
    {
        strcpy(resultado, "Insuficiente!");
    }
    
    system("cls || clear");
    
    printf("Nota: %.1f \n", nota);
    printf("Resultado: %s", resultado);

    return 0;
}