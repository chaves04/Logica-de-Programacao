/*Descrição: lercinco valores do tipo inteiro, armazenar em um vetor W, e imprimir este vetor*/
/*Aluno: Filipe Gonçalves*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

int main(void){

    int i, W[5];

    /*Le os valores e armazena numa variavel do tipo vetor*/

    for (i = 0; i < 5; i++){
        printf("Digite o %do numero: \n", i+1);
        scanf("%d", &W[i]);
    }
    /* Imprime na tela os valores armazenados no vetor W*/

    for (i=0; i<5; i++){
        printf("O valor armazenado em W[%d] = %d \n",i+1,W[i]);
    }
    getchar();
    return 0;
}
