#include <stdio.h>

void Mostrar(int *vetor){
    int i;
    for(i = 0; i < 20; i++){
        printf("%i ", vetor[i]);
    }
}

void TrocarValores(int vetor []){
    int i;
    for(i = 0; i < 20; i++){
        if(vetor[i] < 0)
            vetor[i] = 0;
    }


}

void LerVetor(int vetor[]){
    int i;
    for(i = 0; i < 20; i++){
        scanf("%i", &vetor[i]);
    }
}

int main(void){


    int vetor[20], i;

    LerVetor(vetor);
    TrocarValores(vetor);
    Mostrar(vetor);


    return 0;
}
