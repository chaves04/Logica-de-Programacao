#include <stdio.h>

int main(void){

    float indice;

    printf("Digite os indices de poluicao das 3 lista de industria\n");
    scanf("%f", &indice);

    if (indice >= 0.30 && indice <= 0.40){
        printf("As industria da lista A serao convocadas a suspender as operacoes");
    }
    else if (indice >= 0.40 && indice <= 0.50){
        printf("As industria da lista B serao convocadas a suspender as operacoes");
    }
    else{
        printf("Todas as industrias das 3 lista serao convocadas a suspender as operacoes");

    }








    return 0;
}
