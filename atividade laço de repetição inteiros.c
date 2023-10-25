#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    int numero;
    float media;
    float soma = 0;
    int contador;

    setlocale(LC_ALL, "portuguese");

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero > 0)

        {
            soma += numero;
            contador++;
        }

    } while (numero > 0);

    media = soma / (float) contador;

    printf("\n");

    printf(" a media e: %.1f \n", media);

    return 0;
}
