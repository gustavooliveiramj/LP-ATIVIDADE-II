#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "portuguese");

int i = 0;
int n = 0;

printf("Digite um numero:");
scanf ("%d",&n);

for (i = n ;i >= 0 ;i--){

    printf("%d\n",n);
    n = n - 1;
}
       return 0;
}
