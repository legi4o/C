#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numero1;
int numero2;
int produto;
int soma;
int maiorvalor;
int menorvalor;
float media;

int main()
{

    setlocale(LC_ALL, "portuguese");

    printf("Digite um numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    media = (numero1 + numero2) / 2;

    soma = (numero1 + numero2);

    produto = (numero1 * numero2);

    maiorvalor = numero1 > numero2 ? numero1 : numero2;
    menorvalor = numero1 < numero2 ? numero1 : numero2;

    printf("\n");

    printf("A media é: %.2f \n", media);
    printf("A soma é: %d \n", soma);
    printf("O produto é: %d \n", produto);
    printf("O maior valor é: %d \n", maiorvalor);
    printf("O menor valor é: %d \n", menorvalor);

    return 0;
}