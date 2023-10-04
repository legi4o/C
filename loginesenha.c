#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char usuario[100];
char senha[100];
char usuariosalvo[100] = "Matheus900";
char senhasalva[100] = "senai123";

int main()
{

    setlocale(LC_ALL, "portuguese");

    printf("Digite seu usuario: ");
    gets(usuario);

    printf("Digite sua senha: ");
    gets(senha);

    if (strcmp(usuario, usuariosalvo) == 0 && strcmp(senha, senhasalva) == 0)
    {
        printf("Seja Bem Vindo!");
    }
    else
    {
        printf("ACESSO NEGADO!");
    }

    return 0;
}