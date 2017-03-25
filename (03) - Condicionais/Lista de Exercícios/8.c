#include <stdio.h>


int main(void){


    float notas[5],pesos[5], calc[2];
    int i;

    calc[0] = calc[1] = 0;

    printf("Digite as notas\n");

    for(i=0; i < 5; i++){
        scanf("%f", &notas[i]);
    }

    printf("Digite os pesos\n");

    for(i=0; i < 5; i++){
        scanf("%f", &pesos[i]);
    }

    for (i=0; i < 5; i++){
        calc[0] = calc[0]+notas[i];
        calc[1] = calc[1]+pesos[i];
    }

    if (calc[0]/calc[1] >=5){
        printf("O aluno foi aprovado!");
    }
    else{
        printf("O aluno foi reprovado!");
    }







    return 0;
}
