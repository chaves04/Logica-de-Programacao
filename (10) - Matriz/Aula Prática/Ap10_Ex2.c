/*Algoritmo: Contar número de elementos repetidos em uma matriz */
/*Aluno: Filipe Gonçalves Botelho*/
/*Matrícula: 16/0120276*/

#include <stdio.h>

void Verificacao(int *m, int *n, float *matriz){
    int i, j, k, aux, cont, cont_t;

    cont_t = 0;
    for(k = 0; k < *m; k++){
        printf("%i \n", matriz+k*()+j);
        for(i = 0; i < *m; i++){
            for(j = 0; j < *n; j++){
                printf("%i ", *matriz+i+j);
                if(aux == *matriz+i+j){

                }
            }
        printf("\n");
        }
    }
    printf("%i", cont_t-1);
}


void Leitura(int *m, int *n, float *matriz){
    int i, j;
    for(i = 0; i < *m; i++){
        for(j = 0; j < *n; j++){
            printf("Entre com o valor da matriz. %ia linha e %ia coluna: ", i+1, j+1);
            scanf("%f", matriz+i+j);
        }
    }

}

int main(void){
    int m,n;
    float matriz[100*100];

    printf("Qual a quantidade de linhas (m) e colunas (n) da matriz?\n");
    scanf("%i %i", &m,&n);

    Leitura(&m,&n, matriz);
    Verificacao(&m, &n, matriz);


    return 0;
}
