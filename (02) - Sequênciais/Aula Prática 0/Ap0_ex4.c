/*Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a
expressa em anos, meses e dias. Assuma que o ano tem sempre 365 dias e o mês
sempre 30 dias. */
/*Aluno: Filipe Gonçales*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

int main(void){

    int idade;

    printf("Digite a idade expressa em dias\n");

    scanf("%i", &idade);

    printf("A idade expressa em ano, mes, dia:\n");

    printf("%i anos\n",idade/365);

    printf("%i meses\n", (idade%365)/12);

    printf("%i dias", (idade%365)%12);










    return 0;
}
