#include <stdio.h>

int main(void){

    int horas, minutos, segundos;

    printf("Entre com a quantidade de tempo em horas, minutos e segundos. Ex.: 10 20 30\n");
    scanf("%i %i %i", &horas, &minutos, &segundos);
    segundos = segundos+(minutos*60)+(horas*3600);
    printf("O tempo equivalente em horas: %i", segundos);







    return 0;
}
