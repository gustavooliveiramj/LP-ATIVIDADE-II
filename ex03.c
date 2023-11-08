#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "portuguese");

    int nota ;
  

    printf("Digite sua nota :");
    scanf("%d",&nota);


    if (nota >= 9){
        printf ("Excelente!");
    }else if (nota >= 7 && 8.9){
        printf("Bom!");
    }else if (nota >= 5 && 6.9){
        printf("Razoavel!");
    }else if (nota <= 5){
        printf("insuficiente!");
    }
    
    return 0;
}
