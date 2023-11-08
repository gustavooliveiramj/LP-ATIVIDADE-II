#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "portuguese");

char clima;
float temperatura;

printf ("Qual a temperatura:");
scanf("%f",&temperatura);

if (temperatura >= 25){
    printf("ensolarado!");
}else if (temperatura <= 15 ) {
    printf("chuvoso!");
}
else if (temperatura <= 15 && 25) {
    printf("nublado!");
}

    return 0;
}

