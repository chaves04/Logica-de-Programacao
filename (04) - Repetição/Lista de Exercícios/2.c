#include <stdio.h>

int main(void){

    int numero, i, soma;

    printf("Qual o numero de somatorio?\n");
    scanf("%i", &numero);

    soma = 0;
    for(i = 1; i <= numero; i++){
        soma = soma + i;
    }

    printf("%i\n", soma);





    return 0;
}
