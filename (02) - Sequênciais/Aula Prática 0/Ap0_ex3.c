/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
Supondo que a porcentagem do distribuidor seja de 28% e os impostos de 45%,
escreva um algoritmo que leia o custo de fábrica e imprima o custo ao
consumidor. */
/*Aluno: Filipe Gonçales*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

int main(void){

    float custo;

    printf("Digite o custo do veiculo\n");

    scanf("%f", &custo);

    printf("O custo para o consumidor e: R$ %.2f", custo*1.73);






    return 0;
}
