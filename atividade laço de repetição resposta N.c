#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float soma = 0;
    float media;
    float nota;
    char resposta;
    int contador;

    do
    {
        printf(" Digite uma nota: ");
        scanf("%f", &nota);

        soma = +nota;
        contador++;

        fflush(stdin);

        printf("Deseja inserir mais uma nota? ");
        printf("S - sim \nN - não \nResposta: ");
        scanf("%c", &resposta);

    } while (resposta != 'N');

    media = soma / contador;

    printf("\nMedia: %.1f \n", media);

    return 0;
}