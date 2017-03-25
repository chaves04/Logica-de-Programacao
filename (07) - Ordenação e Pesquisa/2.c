#include <stdio.h>
#define TAM 10

int Procurar(int vetor[],int *procurar){
    int i, achou;

    achou = -1;
    i = 0;
    while (i < TAM  &&  achou != -1){
        if (vetor[i] == *procurar){
            achou = i+1;
        }
        i++;
    }
    return achou;
}

Ler_vetor(int vetor[]){
    int i;
    for (i = 0; i < TAM; i++){
        printf("Digite o valor %i: \n", i+1);
        scanf("%i", &vetor[i]);
    }
}

int main(void){

    int vetor[TAM], procurar, achou, i;
    Ler_vetor(vetor);

    printf("Qual o valor a ser procurado? \n");
    scanf("%i", &procurar);
    achou = Procurar(vetor, &procurar);

    if (achou != -1){
        printf("O numero foi encontra no indice %i do vetor. \n", achou);
    }
    else{
        printf("O numero nao foi encontrado! \n");
    }

    getchar();
    return 0;
}
