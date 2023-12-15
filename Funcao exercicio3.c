#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct produto
{
    char nome[100];
    float preco;
    int qtdestoque;
};

int calcularestoque(produto)
{
}

int main()
{

    setlocale(LC_ALL, "portuguese");

    int codigo;

    printf(" --------MENU--------");
    printf("\n 1 - Realizar compra\n");
    printf("\n 2 - Consultar estoque\n");
    printf("\n 3 - Sair do programa\n");
    printf(" ---------------------");

     



    return 0;
}