/*Faça um algoritmo que leia a idade da pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias. Assuma que o ano tem sempre 365 dias e o mês sempre 30 dias.   */
/*Aluno: Filipe Gonçales*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

int main (void){

    int ano, mes, dia;

    printf("Digite a idade expressa. Ex.: 02 03 15\n");

    scanf("%i %i %i", &ano, &mes, &dia);

    printf("A idade expressa em dia e: %i", (ano*365)+(mes*30)+dia);









    return 0;
}
