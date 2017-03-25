#include <stdio.h>

void Impressao (int *vetor_inv){
    int i;
    for(i = 0; i < 20; i++){
        printf("%i ", vetor_inv[i]);
    }
}

void Inversao(int *vetor, int *vetor_inv){
    int i;
    for(i = 0; i < 20; i++){
        vetor_inv[19-i] = vetor[i];
    }
}

void Leitura(int *vetor){
    int i;
    for(i = 0; i < 20; i++){
        scanf("%i", &vetor[i]);
    }
}

int main(void){

    int vetor[20], vetor_inv[20];

    Leitura(&vetor);
    Inversao(&vetor, &vetor_inv);
    Impressao(&vetor_inv);

    return 0;
}
