/*Aluno: Filipe Gonçalves Botelho*/
/*Matrícula: 16/0120276*/
/*Saída sem printf: 123456789*/
#include <stdio.h>

int main(void){

    int i, j;
    int MAT[3][3];

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("Entre com os valores da matriz. %ia linha e %ia coluna \n", i+1, j+1);
            scanf("%d", &MAT[i][j]);
        }
    }
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d", MAT[i][j]);
        }
    }
    getchar();
    getchar();

    return 0;
}
