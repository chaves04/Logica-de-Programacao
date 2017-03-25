#include <stdio.h>

int main(void){

    int quantidade_carros;
    float salario, valor_total, valor_carro;

    printf("Qual a quantidade de carros vendidos?\n");
    scanf("%i", &quantidade_carros);
    printf("Qual o valor total dos carros vendidos?\n");
    scanf("%f", &valor_total);
    printf("Qual o salario fixo?\n");
    scanf("%f", &salario);
    printf("Qual a comissao por carro vendido?\n");
    scanf("%f", &valor_carro);

    printf("O salario e': %.2f", (float)salario+(valor_carro*quantidade_carros)+(0.05*valor_total));




    return 0;
}
