#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int idade, anonascimento, tempotrabalho, codigo;

int main()
{

    setlocale(LC_ALL, "portuguese");

    printf("<<<< VERIFIQUE SE ESTA APTO PARA SE APOSENTAR >>>>");

    printf("\n\n");

    printf(" Digite seu codigo de funcionario: ");
    scanf("%d", &codigo);

    printf(" Digite seu ano de nascimento: ");
    scanf("%d", &anonascimento);

    printf(" Digite seu tempo de trabalho em anos: ");
    scanf("%d", &tempotrabalho);

    idade = 2023 - anonascimento;

    printf("\n\n");

    if (idade >= 65 || tempotrabalho >= 30)
    {
        printf(" PARABÉNS VOCÊ ESTÁ APTO PARA SE APOSENTAR!\n");
    }
    else
    {
        printf(" VOCÊ NÃO ESTÁ APTO PARA SE APOSENTAR\n");
    }

    printf("\n\n");

    printf(" Codigo do funcionario: %d \n", codigo);
    printf(" idade do funcionario: %d \n", idade);
    printf(" Tempo de trabalho do funcionario: %d \n", tempotrabalho);

    return 0;
}