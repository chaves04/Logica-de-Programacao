#include <stdio.h>
#define LINHA 6
#define COLUNA 8

int main(void){

    int matriz[LINHA][COLUNA], vetor[LINHA], i, j, soma;

    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            printf("Entre com o valor da %ia linha e %ia", i+1;j+1);
            scanf("%i", &matriz[i][j]);
        }
    }

    for (i = 0; i < LINHA; i++){
        soma = 0;
        for (j = 0; j < COLUNA; j++){
            soma += matriz[i][j];
        }
        vetor[i] = soma;
    }

    for (i = 0; i < LINHA; i++){
        printf("%i \n", vetor[i]);
    }



    return 0;
}
