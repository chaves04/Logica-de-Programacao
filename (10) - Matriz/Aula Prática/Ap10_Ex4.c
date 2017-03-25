/* Verificar numeros de elementos negativos em cada linha de uma matriz e armazenar em um vetor*/
/*Aluno: Filipe Gonçalves Botelho*/
/*Matrícula: 16/0120276*/
#include <stdio.h>
#define LINHA 6
#define COLUNA 8

void Mostrar(int vetor_c[]){
    int i;
    printf("Vetor C!\n");
    for(i = 0; i < LINHA; i++){
        printf("%i ", vetor_c[i]);
    }
}

void Verificacao(int matriz[][COLUNA], int vetor_c[]){
    int i, j, k, cont;

    for(i = 0; i < LINHA; i++){
        cont = 0;
        for(j = 0; j < COLUNA; j++){
            if (matriz[i][j] == 0){
                cont++;
            }
        }
        vetor_c[i] = cont;
    }
}

void Leitura(int matriz[][LINHA]){
    int i, j;
    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            scanf("%i", &matriz[i][j]);
        }
    }
}

int main(void){

    int matriz[LINHA][COLUNA], vetor_c[LINHA], i, j;
    Leitura(matriz);
    Verificacao(matriz, vetor_c);
    Mostrar(vetor_c);

    return 0;
}
