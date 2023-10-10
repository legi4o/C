#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int quantidademaca;
float total;

int main()
{

    setlocale(LC_ALL, "portuguese");

    printf("Digite a quantidade que deseja comprar: ");
    scanf("%d", &quantidademaca);

    if (quantidademaca >= 12)
    {
        total = 1.00 * quantidademaca;
    }
    else
    {
        total = 1.30 * quantidademaca;
    }

    printf("\n\n");
    printf("Quantidade de maçãs: %d \n", quantidademaca);
    printf("\n");
    printf("valor total: %.2f \n", total);

    return 0;
}