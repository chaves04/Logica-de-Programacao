#include <stdio.h>

int main(void){

    int  soma, idade = 0, cont = 0;



    soma = 0;
    while(idade != -1){
       printf("Digite a idade\n");
       scanf("%i", &idade);
       soma = soma + idade;
       cont++;
    }

    printf("A media e': %.2f", (float)soma/(cont-1));



    return 0;
}
