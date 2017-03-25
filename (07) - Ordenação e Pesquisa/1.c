#include <stdio.h>

Mostrar_vetor_ordenado(int vetor[]){
    int i;
    printf("Vetor ordenado:\n");
    for (i = 0; i < 6; i++) {
        printf("%d\n", vetor[i]);
    }
}

Ordenacao(int *aux, int *fez_troca, int vetor[]){
    int i;
    fez_troca = 1;
    while (fez_troca) {
        fez_troca = 0;
        for (i = 0; i < 5; i++) {
            if (vetor[i] > vetor[i + 1]) {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                fez_troca = 1;
            }
        }
    }
}

Ler_vetor(int vetor[]){
    int i;
    for (i = 0; i < 6; i++) {
        printf("Informe o elemento %d do vetor:\n", i + 1);
        scanf("%d", &vetor[i]);
    }
}

int main(void){
    int vetor[6], aux, fez_troca;
    Ler_vetor(vetor);
    Ordenacao(&aux, &fez_troca, vetor);
    Mostrar_vetor_ordenado(vetor);





    return 0;
}
