#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");

    float temperatura;
    char resultado [100];

    printf("Digite a temperatura externa: ");
    scanf("%f", &temperatura);

    if (temperatura > 25)
    {
        strcpy(resultado, "Clima ensolarado!");
    }

    else if (temperatura >= 15 && temperatura <= 25)
    {
        strcpy(resultado, "Clima nublado!");
    }

    else 
    {
        strcpy(resultado, "Clima chuvoso!");
    }

    printf("%s", resultado);

    return 0;
}