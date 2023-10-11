#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    char sexo;
    float altura;
    float peso;

    setlocale(LC_ALL, "portuguese");

    printf(" Digite seu sexo: ");
    scanf("%c", &sexo);

    printf(" Digite sua altura: ");
    scanf("%f", &altura);

    sexo = toupper(sexo);
    
    printf("\n");

    switch (sexo)
    {
    case 'M':
        peso = 72.7 * altura - 58;
        break;

    case 'F':
        peso = 62.1 * altura - 44.7;
        break;
    default:
        printf("opção inválida");
    }

    printf(" O seu peso ideal é: %.2f \n", peso);

    return 0;
}