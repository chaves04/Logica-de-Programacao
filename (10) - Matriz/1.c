#include <stdio.h>

void Mostrar(int matriz[][4]){
    int i, j;
    for(i=0; i < 4; i++){
        for(j=0; j < 4; j++){
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void Multiplica(int matriz[][4], int *k){
    int i, j;
    i=0;
    j=0;
    while(i < 4 && j < 4){
        matriz[i][j]= matriz[i][j]*(*k);
        i += 1;
        j += 1;
    }
}

void Leitura(int matriz[][4]){
    int i,j;
    for(i=0; i < 4; i++){
        for(j=0; j < 4; j++){
            scanf("%i", &matriz[i][j]);
        }
    }
}

int main(void){

    int matriz[4][4], k;

    Leitura(matriz);
    printf("Qual o valor de k?\n");
    scanf("%i", &k);
    Multiplica(matriz, &k);
    Mostrar(matriz);

    return 0;
}
