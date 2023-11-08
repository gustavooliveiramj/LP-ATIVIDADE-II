#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "portuguese");

int funcao;

printf("------------SENAI DA MORTE-----------\n");
printf("\n");
printf("1-Novo jogo \n");
printf("2-Carregar jogo\n");
printf("3-Configurações \n");
printf("\n");

printf("Escolha a opção de jogo:");
scanf ("%d",&funcao);
system ("cls || clear");
switch (funcao)
{
case 1:
    printf("NOVO JOGO\n\n\n");
system ("cls || clear");
    printf("BEM VINDO AO SENAI DA MORTE");
    break;
case 2:
    printf("CARREGAR JOGO\n\n\n");
system ("cls || clear");
    printf("JOGO SALVO 1\n");
    printf("JOGO SALVO 2\n");
    printf("JOGO SALVO 3\n");
    break;
case 3:
    printf("CONFIGURAÇÕES");
    break;

default:

printf("OPÇÃO INVALIDA!");
    break;
}


      return 0;
}
