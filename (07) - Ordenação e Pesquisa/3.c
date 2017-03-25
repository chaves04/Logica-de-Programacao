#include <stdio.h>
#define TAM 10

Procurar(int vetor[], int procurar){
    int inicio, fim, meio, achou;

    inicio = 0;
    fim = TAM-1;
    achou = 0;
    while(inicio <= fim && achou == 0){
        meio = (int) ((inicio+fim)/2);
        if(procurar < vetor[meio]){
            fim = meio - 1;
        }
        else if(procurar > vetor[meio]){
            inicio = meio + 1;
        }
        else{
            achou = 1;
        }
    }
    if (achou == 1){
        printf("O %i foi encontrado na posicao %i", procurar, meio+1);
    }
    else{
        printf("O valor %i nao foi encontrado!", procurar);
    }
}

Ler_vetor(int vetor[]){
    int i;
    for (i = 0; i < TAM; i++){
        printf("Digite o %io valor do vetor \n", i+1);
        scanf("%i", &vetor[i]);
    }
}

int main(void){
    int vetor[TAM], procurar;

    Ler_vetor(vetor);
    printf("Digite o valor a ser procurado: \n");
    scanf("%i", &procurar);
    Procurar(vetor, procurar);

    getchar();
    return 0;
}
