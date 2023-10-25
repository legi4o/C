#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char logincorreto[100] = "legiao";
    char senhacorreta[100] = "error404";

    do
    {
        printf("Digite seu login: ");
        scanf("%s", &logincorreto);

        printf("Digite sua senha: ");
        scanf("%s", &senhacorreta);

        if (strcmp(logincorreto, "legiao") == 0 && strcmp(senhacorreta, "error404") == 0)
        {
            printf("SEJA BEM VINDO!");
        }
        else
        {
            printf("Dados Incorretos. Tente novamente \n");
        }

    } while (strcmp(logincorreto, "legiao") != 0 && strcmp(senhacorreta, "error404") !=0);

    return 0;
}