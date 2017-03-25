#include <stdio.h>

int main(void){

    float litros;
    char combustivel;
    printf("Qual o combustivel? \nG - gasolina e A - alcool\n");
    scanf("%c", &combustivel);
    printf("Qual a quantidade de litros?\n");
    scanf("%f", &litros);


    switch(combustivel)
    {
    case 'G':
        if (litros > 20){
            printf("Valor a ser pago: %f\n", litros*3*0.94);
        }
        else{
            printf("Valor a ser pago: %f\n", litros*3*0.96);
        }
        break;
    case 'A':
        if (litros > 20){
            printf("Valor a ser pago: %.2f\n", litros*3*0.95);
        }
        else{
            printf("Valor a ser pago: %.2f\n", litros*3*0.97);
        }
        break;
    }







    return 0;
}
