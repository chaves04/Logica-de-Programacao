#include <stdio.h>

int main(void){

    char sexo;
    float altura, peso_ideal;

    printf("Qual o sexo da pessoa? H - homem e M - mulher\n");
    scanf("%c", &sexo);
    printf("Qual a altura?\n");
    scanf("%f", &altura);

    if (sexo == 'H' || sexo == 'h'){
        peso_ideal = (72.7*altura)-58;
        printf("O peso ideal e: %.2f", peso_ideal);
    }
    else {
        peso_ideal = (62.1*altura)-44.7;
        printf("O peso ideal e: %.2f", peso_ideal);
    }






    return 0;
}
