#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define tam 5

struct dadosalunos
{
    char nome[100];
    char datanascimento[100];
    char situacao[100];
    float notas[2];
    float media;
};

float calcularmedia(struct dadosalunos alunos)
{
    int i;

    for (i = 0; i < 2; i++)
    {
        int i;
        float somanotas = 0;

        somanotas += aluno[i].notas;
    }
    return somanotas / 2;
}

void verificarsituacao(struct dadosalunos *situacao)
{
    if (media >= 7)
    {
        printf("Aprovado");
    }
    else
    {
        printf("Reprovado");
    }
}

int main()
{

    struct dadosalunos alunos[tam];
    int i, j;

    for (i = 0; i < tam; i++)
    {
        printf(" Informe o nome do %d� aluno: ", i + 1);
        gets(alunos[i].nome);
        printf(" Informe a data de nascimento: ");
        gets(alunos[i].datanascimento);

        printf("\n");

        for (j = 0; j < 2; j++)
        {
            printf(" Informe a %d� nota: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }
    }

    

    for (i = 0; i < 5; i++)
    {
        printf(" Nome do %d� aluno: %s \n", i + 1, alunos[i].nome);
        printf(" Data de nascimento: %s \n", alunos[i].datanascimento);
        
        for (j = 0; j < 2; j++)
        {
            printf(" %d� nota: %f \n", j + 1, alunos[i].notas[j]);
        }

        printf(" M�dia: %f \n", calcularmedia(media));
        printf(" Situa��o %s \n", verificarsituacao(situacao));
    }

    return 0;
}