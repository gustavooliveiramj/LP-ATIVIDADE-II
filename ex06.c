#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "portuguese");

int produto;

printf("------------MENU-----------\n");
printf("\n");
printf("1-Camiseta             |R$ 200,00 \n");
printf("2-Calça cargo          |R$ 180,00 \n");
printf("3-Tênis Puma           |R$ 320,00 \n");
printf("\n");
printf("------------FIM-----------\n");

printf("escolha um produto:");
scanf ("%d",&produto);
system ("cls || clear");
switch (produto)
{
case 1:
    printf("Camiseta             |R$ 200,00");
  
    break;
case 2:
    printf("Calça cargo          |R$ 180,00");
     
    break;
case 3:
    printf("Tênis Puma           |R$ 320,00 ");
   
    break;

default:
    break;
}


      return 0;
}
