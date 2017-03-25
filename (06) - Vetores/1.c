#include <stdio.h>

int main(void){

    int vetor_1[25], vetor_2[25], vetor_t[50], i, j, k;

    printf("Digite os valores do primeiro vetor\n");
    for(i = 0; i < 25; i++){
        scanf("%i", &vetor_1[i]);
    }

    printf("Digite os valores do segundo vetor\n");
    for(i = 0; i < 25; i++){
        scanf("%i", &vetor_2[i]);
    }

    printf("Valores dos 2 vetores\n");
    j = 0;
    for(i = 0; i < 50; i = i + 2){
        vetor_t[i] = vetor_1[j];
        j++;
    }
    k = 0;
    for(i = 1; i < 50; i = i + 2){
        vetor_t[i] = vetor_2[k];
        k++;
    }

    for(i = 0; i < 50; i++){
        printf("%i ", vetor_t[i]);
    }

    return 0;
}
