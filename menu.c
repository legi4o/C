#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

int codigo;

printf("------------------ MENU --------------------");
printf("\n");
printf("| codigo   |       prato        |   valor  |");
printf("\n");
printf("|    1     |     picanha        |   25.00  |");
printf("\n");
printf("|    2     |     lasanha        |   25.00  |");
printf("\n");
printf("|    3     |    strogonoff      |   25.00  |");
printf("\n");
printf("|    4     |   bife acebolado   |   25.00  |");
printf("\n");
printf("|    5     |    pão com ovo     |   25.00  |");
printf("\n");
printf("--------------------------------------------");
printf("\n\n");

printf("Digite o codigo do prato: ");
scanf("%d", &codigo);

switch (codigo){

case 1 :
printf(" picanha, 25.00");
break;

}






















    return 0;
}