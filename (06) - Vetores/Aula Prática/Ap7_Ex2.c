/* Leitura de 6 valores inteiros, determinando a quantidade de pares e ímpares*/
/*Aluno: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include<stdio.h>

void Contagem(int *vetor, int *par, int *impar){
    int i;
    *par = 0;
    *impar = 0;
    for (i = 0; i<=5; i++){
        if (vetor[i]%2 == 0){
            *par = *par + 1;
        }
        else{
            *impar = *impar + 1;
        }
    }
}

void Leitura(int *vetor){
    int i;
    for (i = 0; i<=5; i++){
        printf("Digite o %io numero \n", i+1);
        scanf("%i", &vetor[i]);
    }
}


int main(void){

    int vetor[6], par, impar;
    Leitura(&vetor);
    Contagem(&vetor, &par, &impar);
    printf("Pares: %i Impares: %i \n", par, impar);


    return 0;
}
