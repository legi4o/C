#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    int codigo;

    printf("------------------ MENU --------------------");
    printf("\n");
    printf("| codigo   |      prato         |   valor  |");
    printf("\n");
    printf("|    1     |     picanha        |   25.00  |");
    printf("\n");
    printf("|    2     |     lasanha        |   20.00  |");
    printf("\n");
    printf("|    3     |    strogonoff      |   18.00  |");
    printf("\n");
    printf("|    4     |   bife acebolado   |   15.00  |");
    printf("\n");
    printf("|    5     |    pão com ovo     |   5.00   |");
    printf("\n");
    printf("--------------------------------------------");
    printf("\n\n");

    printf(" Digite o codigo do prato: ");
    scanf("%d", &codigo);
    printf("\n");

    switch (codigo)
    {

    case 1:
        printf(" picanha, 25.00");
        break;

    case 2:
        printf(" lasanha, 20,00");
        break;

    case 3:
        printf(" strogonoff, 18,00");
        break;

    case 4:
        printf(" bife acebolado, 15,00");
        break;

    case 5:
        printf(" pão com ovo, 5,00");
        break;
    default:
        printf(" opção invalida");
    }

    return 0;
}