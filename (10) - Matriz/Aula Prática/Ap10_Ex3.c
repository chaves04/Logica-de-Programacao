/* Verificar numero de linhas e colunas repitidas*/
/*Aluno: Filipe Gonçalves Botelho*/
/*Matrícula: 16/0120276*/
#include <stdio.h>
#define TAM 4
void Verificacao(int mat[][TAM], int *l_nula, int *c_nula){
    int i, j, cont;
    cont = 0;
    for (i = 0; i < TAM; i++){
        cont = 0;
        j = 0;
        while(mat[i][j] == 0 && j < TAM){
            j++;
            cont++;
        }
        if (cont != 0){
            *l_nula += 1;
        }
    }

    cont = 0;
    for (j = 0; j < TAM; j++){
        cont = 0;
        i = 0;
        while(mat[i][j] == 0 && i < TAM){
            i++;
            cont++;
        }
        if (cont != 0){
            *c_nula += 1;
        }
    }
}

void Leitura(int mat[][TAM]){
    int i, j;
    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            scanf("%i", &mat[i][j]);
        }
    }
}

int main(void){

    int mat[TAM][TAM], l_nula, c_nula;

    Leitura(mat);
    l_nula = 0;
    c_nula = 0;
    Verificacao(mat, &l_nula, &c_nula);
    printf("%i %i", l_nula, c_nula);





    return 0;
}
