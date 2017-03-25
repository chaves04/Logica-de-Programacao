/*Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste
aluno. Considerar que a média é ponderada e que o peso das notas é: 1, 3 e 4,
respectivamente. */
/*Aluno: Filipe Gonçales*/
/*Matrícula: 16/0120276*/
#include <stdio.h>

int main(void){

    float nota[3];

    printf("Digite as 3 notas\n");

    scanf("%f %f %f", &nota[0],&nota[1],&nota[2]);

    printf("A media e: %f", ((nota[0]*1)+(nota[1]*3)+(nota[2]*4))/8);



    return 0;
}
