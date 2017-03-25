#include <stdio.h>
#define LINHA_A 2
#define COLUNA_A 3
#define LINHA_B 3
#define COLUNA_B 1
int main(void){
    int matriz_a[LINHA_A][COLUNA_A], matriz_b[LINHA_B][COLUNA_B], matriz_p[LINHA_A][COLUNA_B], i, j, k,soma, mult;
    int linha, coluna;
    for(i = 0; i < LINHA_A; i++){
        for(j = 0; j < COLUNA_A; j++){
            scanf("%i", &matriz_a[i][j]);
        }
    }
    for(i = 0; i < LINHA_B; i++){
        for(j = 0; j < COLUNA_B; j++){
            scanf("%i", &matriz_b[i][j]);
        }
    }
    for (i = 0; i < LINHA_A; i++){
        for (j = 0; j < COLUNA_B; j++){
            matriz_p[i][j] = 0;
            for (k = 0; k < LINHA_B; k++){
                matriz_p[i][j] = matriz_p[i][j] + matriz_a[i][k] + matriz_b[k][j];
            }
        }
    }
    for(i = 0; i < LINHA_A; i++){
        for(j = 0; j < COLUNA_B; j++){
            printf("%i ", matriz_p[i][j]);
        }
        printf("\n");
    }



    return 0;
}