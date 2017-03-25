/*Leitura de 9 valores e mostrar quais são negativos*/
/*Aluno: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

void Impressao(int *vetor){
    int i;
    for(i = 0; i<9; i++){
        if (vetor[i]<0){
            printf("%i posicao %i\n",vetor[i],i+1);
        }
    }
}

void Leitura(int *vetor){
    int i;
    printf("Entre com os 9 valores a serem lidos \n");
    for (i = 0; i < 9; i++){
        scanf("%i", &vetor[i]);
    }
}

int main(void){

    int vetor[9];
    Leitura(&vetor);
    Impressao(&vetor);


    return 0;
}
