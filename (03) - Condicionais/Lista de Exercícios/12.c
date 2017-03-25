#include <stdio.h>

int main(void){

    int hora[2];

    printf("Entre com o horario inicial e final\n");
    scanf("%i %i", &hora[0], &hora[1]);

    if (hora[1] > hora [0]){
        printf("Tempo de jogo: %i\n", hora[1] - hora[0]);
    }
    else {
        printf("Tempo de jogo: %i\n", hora[1] + 24 - hora[0]);
    }










    return 0;
}
