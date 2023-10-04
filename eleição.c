#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int idade;

    int main()
{

    setlocale(LC_ALL, "portuguese");

    printf(" VERIFIQUE SE É OBRIGADO A VOTAR");
    printf("\n\n");
    printf(" Digite sua idade: ");
    scanf("%d", &idade);
    printf("\n");

    if (idade >= 18 && idade <= 65)
    {
        printf(" É OBRIGADO A VOTAR");
    }
    else
    {
        printf(" NÃO É OBRIGADO A VOTAR!");
    }
printf("\n");

    return 0;
}