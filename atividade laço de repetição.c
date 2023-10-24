#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float nota;
    float nota2;
    float media;

    do
    {
        printf(" Escreva a primeira nota: ");
        scanf("%f", &nota);

    } while (nota < 0 || nota > 10);

    do
    {
        printf(" Escreva a segunda nota: ");
        scanf("%f", &nota2);

    } while (nota2 < 0 || nota2 > 10);

    
    
    media = (nota + nota2) / 2;

    
    printf(" A media e:  %f \n", media);

    return 0;
}