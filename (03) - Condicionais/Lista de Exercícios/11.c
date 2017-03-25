#include <stdio.h>

int main(void){

    float premio,valor[2];

    printf("Qual o valor do premio?\n");
    scanf("%f", &premio);
    printf("Qual o valor apostado por cada um?\n");
    scanf("%f %f", &valor[0], &valor[1]);

    printf("O primeiro recebera: R$ %.2f\n", (valor[0]/(valor[0]+valor[1]))*premio);
    printf("O segundo recebera: R$ %.2f\n", (valor[1]/(valor[0]+valor[1]))*premio);






    return 0;
}
