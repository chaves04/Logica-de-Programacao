/* Leitura de n valores inteiros, determinando a quantidade de pares e ímpares*/
/*Aluno: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include<stdio.h>

void Contagem(int *vetor, int *par, int *impar, int *quant_vetor){
    int i;
    *par = 0;
    *impar = 0;
    for (i = 0; i<*quant_vetor; i++){
        if (vetor[i]%2 == 0){
            *par = *par + 1;
        }
        else{
            *impar = *impar + 1;
        }
    }
}

void Leitura(int *vetor, int *quant_vetor){
    int i;
    for (i = 0; i<*quant_vetor; i++){
        printf("Digite o %io numero \n", i+1);
        scanf("%i", &vetor[i]);
    }
}


int main(void){

    int par, impar, quant_vetor;

    printf("Qual a quantidade de numeros que deseja ler? \n");
    scanf("%i", &quant_vetor);
    int vetor[quant_vetor];
    Leitura(&vetor, &quant_vetor);
    Contagem(&vetor, &par, &impar, &quant_vetor);
    printf("Pares: %i Impares: %i \n", par, impar);


    return 0;
}
