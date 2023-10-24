#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    float soma = 0;
    float media;
    float nota;

    for (i = 0; i < 2; i++)
    {
        do
        {
            printf(" Digite a %dª nota: ", i + 1);
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);

        soma += nota;
    }

    media = soma / i;

    printf(" \nMedia: %.1f \n", media);

    return 0;
}